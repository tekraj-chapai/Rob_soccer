#include <SoftwareSerial.h>
SoftwareSerial BTserial( 2, 3);  // Using Pin 2 and  3 as tx for arduino nano
char bt = 'S';
const int IN1 = 6;
const int IN2 = 7;
const int ENA = 10;

const int IN3 = 8;
const int IN4 = 9;
const int ENB = 11;
const int p=350;

void setup() {
  Serial.begin(9600);
  BTserial.begin(9600);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);

  pinMode(IN4, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(ENB, OUTPUT);
}
void loop() {

  bt = BTserial.read();
  //BACKWAED
   if (bt == 'B') {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    analogWrite(ENA, p);
    analogWrite(ENB, p);
    
  }
  //FORWARD
  if (bt == 'F') {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
     analogWrite(ENA, p);
    analogWrite(ENB, p);
    
  }
  //LEFT
  if (bt == 'L') {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
     analogWrite(ENA, p);
    analogWrite(ENB, p);
  }
  //RIGHT
  if (bt == 'R') {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
     analogWrite(ENA, p);
    analogWrite(ENB, p);
  }
  //BACKWARD LEFT
  if (bt == 'H') {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
     analogWrite(ENA, p);
    analogWrite(ENB, p);
  }
  //FORWARD LEFT
  if (bt == 'G') {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
     analogWrite(ENA, p);
    analogWrite(ENB, p);
  }
  //BACKWARD RIGHT
  if (bt == 'J') {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
     analogWrite(ENA, p);
    analogWrite(ENB, p);
  }
  //FORWARD RIGHT
  if (bt == 'I') {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
     analogWrite(ENA, p);
    analogWrite(ENB, p);
  }

  if (bt == 'S') {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
  }
}
