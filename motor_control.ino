
#include <Arduino.h>
#include "pins.h"

// functions declaration
void L298N_init(int L298N_IN1, int L298N_IN2, int L298N_ENA);
void L298N_forward(int L298N_IN1, int L298N_IN2, int L298N_ENA, int speed_in_PWM);
void L298N_backward(int L298N_IN1, int L298N_IN2, int L298N_ENA, int speed_in_PWM);
void L298N_stop(int L298N_IN1, int L298N_IN2, int L298N_ENA, int speed_in_PWM);

void Cytron_init(int Cytron_DIR, int Cytron_PWM);
void Cytron_forward(int Cytron_DIR,int Cytron_PWM,int speed_in_PWM);
void Cytron_backward(int Cytron_DIR,int Cytron_PWM,int speed_in_PWM);
void Cytron_stop(int Cytron_DIR,int Cytron_PWM,int speed_in_PWM);

void BTS7960_init(int BTS7960_RPWM, int BTS7960_LPWM);
void BTS7960_forward(int BTS7960_RPWM, int BTS7960_LPWM, int speed_in_PWM);
void BTS7960_backward(int BTS7960_RPWM, int BTS7960_LPWM, int speed_in_PWM);
void BTS7960_stop(int BTS7960_RPWM, int BTS7960_LPWM, int speed_in_PWM);

void setup() {

  // initialize codes 
  void L298N_init(int L298N_IN1, int L298N_IN2, int L298N_ENA);
  void Cytron_init(int Cytron_DIR, int Cytron_PWM);
  void BTS7960_init(int BTS7960_RPWM, int BTS7960_LPWM);

}

void loop() {

  for (int speed_in_PWM=0; speed_in_PWM<= 255; speed_in_PWM++){
    void L298N_forward(int L298N_IN1, int L298N_IN2, int L298N_ENA, int speed_in_pwm);
    void Cytron_forward(int Cytron_DIR,int Cytron_PWM,int speed_in_PWM);
    void BTS7960_forward(int BTS7960_RPWM, int BTS7960_LPWM, int speed_in_pwm);

    delay(20);
  }

  delay(500);

  void L298N_stop(int L298N_IN1, int L298N_IN2, int L298N_ENA, int speed_in_PWM);
  void Cytron_stop(int Cytron_DIR,int Cytron_PWM,int speed_in_PWM);
  void BTS7960_stop(int BTS7960_RPWM, int BTS7960_LPWM, int speed_in_PWM);

  delay(20);

  for (int speed_in_PWM=0; speed_in_PWM<=255; speed_in_PWM++){
    void L298N_backward(int L298N_IN1, int L298N_IN2, int L298N_ENA, int speed_in_pwm);
    void Cytron_backward(int Cytron_DIR,int Cytron_PWM,int speed_in_PWM);
    void BTS7960_backward(int BTS7960_RPWM, int BTS7960_LPWM, int speed_in_pwm);
  }

  delay(500);

  
}
