#include "DigiKeyboardPtBr.h"
void setup() {
  pinMode(0,OUTPUT); 
  pinMode(1,OUTPUT); 
}

void loop() {  
  pisca_led(100);
  DigiKeyboardPtBr.delay(10000);
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.sendKeyStroke(70, MOD_ALT_LEFT);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.print("mspaint");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_V, MOD_CONTROL_LEFT);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_S, MOD_CONTROL_LEFT);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.print("%USERPROFILE%\\wall.jpg");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_F, MOD_ALT_LEFT);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_F);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_F10, MOD_SHIFT_LEFT);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_X);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_B);
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