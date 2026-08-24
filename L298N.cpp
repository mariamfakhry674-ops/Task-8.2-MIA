#include <Arduino.h>
# include "pins.h"

void L298N_init(int L298N_IN1, int L298N_IN2, int L298N_ENA){
  pinMode(L298N_IN1,OUTPUT);
  pinMode(L298N_IN2,OUTPUT);
  pinMode(L298N_ENA,OUTPUT);

  digitalWrite(L298N_IN1,LOW);
  digitalWrite(L298N_IN2,LOW);
  analogWrite(L298N_ENA, 0);
}

void L298N_forward(int L298N_IN1, int L298N_IN2, int L298N_ENA, int speed_in_PWM){

    digitalWrite(L298N_IN1, HIGH);
    digitalWrite(L298N_IN2, LOW);

    analogWrite(L298N_ENA, speed_in_PWM);
}

void L298N_backward(int L298N_IN1, int L298N_IN2, int L298N_ENA, int speed_in_PWM){

    digitalWrite(L298N_IN1, LOW);
    digitalWrite(L298N_IN2, HIGH);

    analogWrite(L298N_ENA, speed_in_PWM);
}

void L298N_stop(int L298N_IN1, int L298N_IN2, int L298N_ENA, int speed_in_PWM){
 
    digitalWrite(L298N_IN1, LOW);
    digitalWrite(L298N_IN2, LOW);

    analogWrite(L298N_ENA, 0);
}
