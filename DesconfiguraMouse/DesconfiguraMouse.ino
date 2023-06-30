#include "DigiKeyboardPtBr.h"
#define KEY_TAB 43
#define KEY_ARROW_RIGHT 0x4F

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
  DigiKeyboardPtBr.print("main.cpl");
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_SPACE);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_TAB);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ARROW_RIGHT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ARROW_RIGHT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_TAB);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_TAB);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_TAB);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_TAB);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_SPACE);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ARROW_RIGHT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_TAB);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_SPACE);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(KEY_TAB);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("100");
  DigiKeyboardPtBr.delay(500);
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