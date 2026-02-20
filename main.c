const int potPin=7;
const int ledPin=8;

int potValue=0;
int brightness=0;

vaid setup(){
pinMode(ledPin, OUTPUT);
Serial.begin(9600);
}

void loop(){
  potValue=analogRead(potPin);
brightness=map(potValue,0,1023,0,255);

Serial.print("Brightness: ");
Serial.println(brightness);
delay(50);}
