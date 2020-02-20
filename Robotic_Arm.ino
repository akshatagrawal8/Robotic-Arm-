  #include <Servo.h>
Servo myservo1;
Servo myservo2;
Servo myservo3;
void setup() {
  // put your setup code here, to run once:
myservo1.attach(13,600,2300);
myservo2.attach(12,600,2300);
myservo3.attach(11,600,2300);
Serial.begin(9600);
pinMode(A2,INPUT);
pinMode(A3,INPUT);
pinMode(A4,INPUT);
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

float rvalue1 = analogRead(A2);
float rvalue2 = analogRead(A3);
float rvalue3 = analogRead(A4);

float value1 = map(rvalue1,0,1023,-90,90);
float value2 = map(rvalue2,0,1023,0,180);
float value3 = map(rvalue3,0,1023,0,180);
Serial.println(value1);
Serial.println(value2);
Serial.println(value3);
myservo1.write(90-value1);
myservo2.write(value2);
myservo3.write(value3);
delay(100);

}
