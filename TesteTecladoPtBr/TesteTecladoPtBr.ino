#include "DigiKeyboardPtBr.h"
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
  DigiKeyboardPtBr.println("notepad"); // to search for command prompt
  DigiKeyboardPtBr.delay(100); 
  DigiKeyboardPtBr.println("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
  DigiKeyboardPtBr.println("abcdefghijklmnopqrstuvwxyz");
  DigiKeyboardPtBr.println("1234567890");
  DigiKeyboardPtBr.println("!@#$%&*()_+=-");
  DigiKeyboardPtBr.println("[]{}\\|;:',./<>?");
  DigiKeyboardPtBr.println("ççÇÇ");  
  DigiKeyboardPtBr.delay(1000);
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
