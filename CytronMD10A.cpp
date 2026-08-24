#include <Arduino.h>
# include "pins.h"

void Cytron_init(int Cytron_DIR, int Cytron_PWM){
  
  // firstly pins declaration 
  pinMode(Cytron_PWM, OUTPUT);
  pinMode(Cytron_DIR, OUTPUT);

  digitalWrite(DIR, LOW);
  analogWrite(PWM, 0);
  
}

void Cytron_forward(int Cytron_DIR,int Cytron_PWM,int speed_in_PWM){

  digitalWrite(Cytron_DIR, LOW);
  analogWrite(Cytron_PWM, speed_in_PWM);
}

void Cytron_backward(int Cytron_DIR,int Cytron_PWM,int speed_in_PWM){

  digitalWrite(Cytron_DIR, HIGH);
  analogWrite(Cytron_PWM, speed_in_PWM);
}

void Cytron_stop(int Cytron_DIR,int Cytron_PWM,int speed_in_PWM){

  digitalWrite(Cytron_DIR, LOW);
  analogWrite(Cytron_PWM, 0);
}
