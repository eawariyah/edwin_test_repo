#include <NewPing.h>

// testing with github desktop
// Motor Control Pins
int IN1 = 2;
int IN2 = 3;
int IN3 = 4;
int IN4 = 5;

// Ultrasonic Sensor Pins
int trigPin = 6; // Trig pin
int echoPin = 7; // Echo pin
NewPing sonar(trigPin, echoPin);

void stopMoving();
void moveForward();
void moveLeft();
void moveRight();
void moveBackwards();
void autoMode();

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  autoMode(); // Assuming we run the automatic mode in the loop
}

void moveBackwards() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void moveLeft() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void moveRight() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void stopMoving() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
}

void autoMode() {
  // Ultrasonic Sensor Logic
  unsigned int distance = sonar.ping_cm();

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance < 10) {
    // If an obstacle is closer than 10 cm, stop and change direction
    stopMoving();
    delay(1000); // Pause for a second
    moveLeft(); // Turn left (you can customize this as needed)
    delay(1000); // Pause for a second
  } else {
    // If no obstacle is detected, move forward
    moveForward();
  }
}
