#include <Arduino.h>
#include "pitches.h"
#include "themes.h"

int buzzer = D1; 
int button = D2;
int buttonState = 0;


void setup()
{
  pinMode(buzzer, OUTPUT); 
  pinMode(button, INPUT_PULLUP);

}

void loop(){

  if (digitalRead(button) == LOW) {
    tone(buzzer, 1000);
  } else {
    tone(buzzer, 0);
  }
  /*if (digitalRead(button) == HIGH) {
    switch (buttonState)
    {
    case 1:
      for(int i = 0; i < 8; i++) {
        tone(buzzer, Pirates_note[i], Pirates_duration[i]);
        delay(Pirates_duration[i] * 1.30);
        noTone(buzzer);
        }
      break;
    case 2:
      for(int i = 0; i < 8; i++) {
        tone(buzzer, MarioUW_note[i], MarioUW_duration[i]);
        delay(MarioUW_duration[i] * 1.30);
        noTone(buzzer);
        }
      break;
    default:
      break;
    }
  }*/

 
  /*tone(buzzer, 1000); 
  delay(1000);        
  noTone(buzzer);     
  delay(1000);  */      
  
}