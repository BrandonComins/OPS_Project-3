#define LED 6
//#define transmitter 
#define reciever A0

int distance;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(reciever, INPUT);
//  digitalWrite(LED, 255);  
}

void loop() {
  distance = analogRead(reciever);
  int improvedDistance = map(distance, 0, 1023, 0, 150);
  analogWrite(LED, improvedDistance);
  Serial.println(improvedDistance);


}
