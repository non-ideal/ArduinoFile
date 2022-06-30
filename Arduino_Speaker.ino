#include <Arduino.h>
 
#include "talkie.h"
 
const int8_t bus[] PROGMEM = { ####
};
  ####의 경우에는 Arduino에서 음성 출력이 가능하도록 하는 Hex Array
Talkie voice;
 
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, INPUT);
}
 
void loop() {
  if(digitalRead(5 == HIGH)){
    voice.say(bus);
  }
  else{
    delay(1000); 
  }
}
