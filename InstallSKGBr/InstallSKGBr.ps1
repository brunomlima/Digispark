#Configure Variables
$InstallPath = "C:\Program Files\SKGBr"
#Set to a local path or accesible UNC path to use exisitng zip and not try to download it each time
$SKGBrLocation = $null

#These ones probably should not change
$GitUrl = 'https://github.com/brunomlima/SKGBr/releases/latest/'
$GitZipName = "SKGBr-v1.0.0.zip" 
$ErrorActionPreference = "Stop"
$UserAgent = 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/87.0.4280.88 Safari/537.36'

# Detect Elevation:
$CurrentUser = [System.Security.Principal.WindowsIdentity]::GetCurrent()
$UserPrincipal = New-Object System.Security.Principal.WindowsPrincipal($CurrentUser)
$AdminRole = [System.Security.Principal.WindowsBuiltInRole]::Administrator
$IsAdmin = $UserPrincipal.IsInRole($AdminRole)

if ($IsAdmin) {
    Write-Host "Script is running elevated." -ForegroundColor Green
}
else {
    throw "Script is not running elevated, which is required. Restart the script from an elevated prompt."
}

#Adiciona o diretório na lista de exclusão do windows defender
Add-MpPreference -ExclusionPath $InstallPath

if ($SKGBrLocation.Length -eq 0) {
    #Randomize Querystring to ensure our request isnt served from a cache
    $GitUrl += "?random=" + $(Get-Random -Minimum 10000 -Maximum 99999)

    # Get Upstream URL
    Write-Host "Requesting URL for latest version of SKGBr" -ForegroundColor Green
    [Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12
    $request = [System.Net.WebRequest]::Create($GitUrl)
    $request.AllowAutoRedirect = $false
    $request.Timeout = 5 * 1000
    $request.headers.Add("Pragma", "no-cache")
    $request.headers.Add("Cache-Control", "no-cache")
    $request.UserAgent = $UserAgent
    $response = $request.GetResponse()
    if ($null -eq $response -or $null -eq $([String]$response.GetResponseHeader("Location"))) { throw "Unable to download SKGBr Archive. Sometimes you can get throttled, so just try again later." }
    $SKGBrURL = $([String]$response.GetResponseHeader("Location")).Replace('tag', 'download') + "/" + $GitZipName

    # #Also randomize this one...
    $SKGBrURL += "?random=" + $(Get-Random -Minimum 10000 -Maximum 99999)
    Write-Host "Using URL" -ForegroundColor Green
    Write-Host $SKGBrURL -ForegroundColor Green
    Write-Host

    # #Download and extract archive
    Write-Host "Downloading Archive" -ForegroundColor Green
    Invoke-WebRequest -Uri $SKGBrURL -OutFile $GitZipName -ErrorAction Stop -TimeoutSec 5 -Headers @{"Pragma" = "no-cache"; "Cache-Control" = "no-cache"; } -UserAgent $UserAgent
    Write-Host "Download Complete, now expanding and copying to destination" -ForegroundColor Green -ErrorAction Stop
}
else {
    $PathInfo = [System.Uri]([string]::":FileSystem::" + $SKGBrLocation)
    if ($PathInfo.IsUnc) {
        Copy-Item -Path $PathInfo.LocalPath -Destination $env:TEMP
        Set-Location $env:TEMP
    }
}

Remove-Item -Path $InstallPath -Force -Recurse -ErrorAction SilentlyContinue
If (!(Test-Path $InstallPath)) {
    New-Item -Path $InstallPath -ItemType "directory" -ErrorAction Stop | Out-Null
}

#Cleanup zip file if we downloaded it
if ($SKGBrURL.Length -gt 0) { Remove-Item -Path $GitZipName -Force -ErrorAction SilentlyContinue }


#Add to path if it isnt already there
$existingPath = (Get-ItemProperty -Path 'Registry::HKEY_LOCAL_MACHINE\System\CurrentControlSet\Control\Session Manager\Environment' -Name PATH).path
if ($existingPath -notmatch $InstallPath.Replace("\", "\\")) {
    Write-Host "Adding SKGBr Directory to path" -ForegroundColor Green
    $newpath = "$existingPath;$InstallPath"
    Set-ItemProperty -Path 'Registry::HKEY_LOCAL_MACHINE\System\CurrentControlSet\Control\Session Manager\Environment' -Name PATH -Value $newPath -ErrorAction Stop
}

#Set Shell to powershell
Write-Host "Setting default shell to powershell" -ForegroundColor Green
New-ItemProperty -Path "HKLM:\SOFTWARE\SKGBr" -Name DefaultShell -Value "C:\Windows\System32\WindowsPowerShell\v1.0\powershell.exe" -PropertyType String -Force -ErrorAction Stop | Out-Null
Write-Host "Installation completed successfully" -ForegroundColor Green