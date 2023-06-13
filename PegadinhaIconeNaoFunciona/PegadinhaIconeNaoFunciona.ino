#include "DigiKeyboardPtBr.h"
void setup() {
}

void loop() {  
  digitalWrite(1, HIGH); // LED on <--> Action start
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(70, MOD_ALT_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("mspaint");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(800);
  DigiKeyboardPtBr.sendKeyStroke(KEY_V, MOD_CONTROL_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_S, MOD_CONTROL_LEFT);
  DigiKeyboardPtBr.delay(600);
  DigiKeyboardPtBr.print("%USERPROFILE%\\wall.jpg");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(600);
  DigiKeyboardPtBr.sendKeyStroke(KEY_F, MOD_ALT_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_K);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_F);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_F, MOD_ALT_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_X);
  DigiKeyboardPtBr.delay(600);
  DigiKeyboardPtBr.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_F10, MOD_SHIFT_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_V);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(81);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(81);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(81);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(81);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.sendKeyStroke(81);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  digitalWrite(1, LOW); // LED off <--> Action end
  for(;;){ /*empty*/ }
}
