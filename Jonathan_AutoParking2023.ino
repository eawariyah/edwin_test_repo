#include <AriduinoRobot.h>
// UtraSensor distance measuring sensor code
int trig = 7;
int echo = 6;


void setup() {
  robot.begin();

  pinmode(trig, OUTPUT);
  pinmode(echo , INPUT;
}

void loop(){
  // To move forward
  robot.motorsWrite(225, 225);
  delay(10000);
  robot.motorsWrite(0,0); // This is to stop moving

  // To move backwards
  robot.motorsWrite(-225, -225);
  delay(10000)

  robot.motorsWrite(0,0);
  delay(10000);

  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, high);
  delayMicroseconds(10);
  digitalWrite(trig, low);

  timeInMicro = pulseIn(echo, high);

}





