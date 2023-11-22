#include "DigiKeyboard.h"
void setup() {
  // don't need to set anything up to use DigiKeyboard
   DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  DigiKeyboard.println("https://github.com/BoKersten/"); //Change this to the website you want to spam
  //test
}
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  
  
}