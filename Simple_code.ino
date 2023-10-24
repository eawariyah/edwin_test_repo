int NPN1=1;
int PNP1=2;
int PNP2=3;
int NPN2=5;

void setup() {
  // put your setup code here, to run once:
pinMode(NPN1,OUTPUT);
pinMode(PNP1,OUTPUT);
pinMode(PNP2,OUTPUT);
pinMode(NPN2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(NPN1,HIGH);
digitalWrite(PNP1,LOW);
digitalWrite(PNP2,LOW);
digitalWrite(NPN2,HIGH);
delay(2000);
}