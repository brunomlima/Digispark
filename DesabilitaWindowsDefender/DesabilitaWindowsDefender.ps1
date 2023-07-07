Set-MpPreference -DisableRealtimeMonitoring $true -Force
New-ItemProperty -Path 'HKLM:\SOFTWARE\Policies\Microsoft\Windows Defender' -Name 'DisableAntiSpyware' -Value 1 -PropertyType DWord -Force
New-ItemProperty -Path 'HKLM:\SOFTWARE\Policies\Microsoft\Windows Defender' -Name 'DisableAntiVirus' -Value 1 -PropertyType DWord -Force
New-ItemProperty -Path 'HKLM:\SOFTWARE\Policies\Microsoft\Windows Defender' -Name 'ServiceKeepAlive' -Value 0 -PropertyType DWord -Force