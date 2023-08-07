#include <Stepper.h>
int StepPerRevelotion=2048;
Stepper myStepper(StepPerRevelotion,8,10,9,11);
int motorSpeed=10;
int delayTime=250;

void setup() {
  
Serial.begin(9600);
myStepper.setSpeed(motorSpeed);

}

void loop() {

myStepper.step(StepPerRevelotion);
delay(delayTime);


}
