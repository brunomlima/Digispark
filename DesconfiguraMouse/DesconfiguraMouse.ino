#include "DigiKeyboardPtBr.h"
void setup() {
    #define KEY_TAB 43
    #define KEY_ARROW_RIGHT 0x4F
}

void loop() {
  digitalWrite(1, HIGH); // LED on <--> Action start

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

  digitalWrite(1, LOW); // LED off <--> Action end
  for(;;){ /*empty*/ }
}