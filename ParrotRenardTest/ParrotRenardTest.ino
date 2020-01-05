#include <Renard.h>

#define PARROT_MOUTH 5
#define PARROT_BODY 6

Renard renard(Serial, 2);


void setup() {
  Serial.begin(57600);
  pinMode(PARROT_MOUTH, OUTPUT);
  pinMode(PARROT_BODY, OUTPUT);
}

void loop() {
  while (!renard.processInput())
      ;


  if(renard.channelValue(1) > 127){
      digitalWrite(PARROT_MOUTH, HIGH);
  }
  else {
    digitalWrite(PARROT_MOUTH, LOW);
  }

  if(renard.channelValue(2) > 127){
      digitalWrite(PARROT_BODY, HIGH);
  }
  else {
    digitalWrite(PARROT_BODY, LOW);
  }


  
}
