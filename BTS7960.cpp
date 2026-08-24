#include <Arduino.h>
# include "pins.h"

void BTS7960_init(int BTS7960_RPWM, int BTS7960_LPWM){
  pinMode(BTS7960_RPWM, OUTPUT);
  pinMode(BTS7960_LPWM, OUTPUT);

  analogWrite(BTS7960_RPWM, 0);
  analogWrite(BTS7960_LPWM, 0);
  
}

void BTS7960_forward(int BTS7960_RPWM, int BTS7960_LPWM, int speed_in_PWM){
    
    analogWrite(BTS7960_LPWM, 0);
    analogWrite(BTS7960_RPWM, speed_in_PWM);
}

void BTS7960_backward(int BTS7960_RPWM, int BTS7960_LPWM, int speed_in_PWM){
  
    analogWrite(BTS7960_LPWM, speed_in_PWM);
    analogWrite(BTS7960_RPWM, 0);
}

void BTS7960_stop(int BTS7960_RPWM, int BTS7960_LPWM, int speed_in_PWM){
    
    analogWrite(BTS7960_LPWM, 0);
    analogWrite(BTS7960_RPWM, 0);
}
