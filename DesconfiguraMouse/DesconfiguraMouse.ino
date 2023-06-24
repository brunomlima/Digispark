#include "DigiKeyboardPtBr.h"
#define KEY_TAB 43
#define KEY_ARROW_RIGHT 0x4F

void setup() {
    pinMode(0,OUTPUT); //LED on model B
    pinMode(1,OUTPUT); //LED on model A      
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
    digitalWrite(0, HIGH); // LED on <--> Action start
    digitalWrite(1, HIGH); // LED on <--> Action start
    DigiKeyboardPtBr.delay(velocidade);  
    digitalWrite(0, LOW); // LED off <--> Action end
    digitalWrite(1, LOW); // LED off <--> Action end
    DigiKeyboardPtBr.delay(velocidade);  
  } 
}