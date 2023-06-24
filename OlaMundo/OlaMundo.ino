#include "DigiKeyboardPtBr.h"
void setup() {
}

void loop() {
  digitalWrite(1, HIGH); // LED on <--> Action start
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println("notepad"); // to search for command prompt 
  DigiKeyboardPtBr.delay(1000);  
  DigiKeyboardPtBr.print("OLA MUNDO!");  
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  digitalWrite(1, LOW); // LED off <--> Action end
  for(;;){ /*empty*/ }
}