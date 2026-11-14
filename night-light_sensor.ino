const int led = 9;
const int sensor_led = A0;
int sensor;
const int threshold = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensor = analogRead(sensor_led);
  Serial.println(sensor);
if (sensor<threshold) {
  digitalWrite(led,HIGH);
}
else{digitalWrite(led,LOW);
}
}
