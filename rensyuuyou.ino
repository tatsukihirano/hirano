void setup() {
 pinMode(5,OUTPUT);
 Serial.begin(115200);
}

void loop() {
 digitalWrite(5,HIGH);
 Serial.println("LED ON");
 delay(5000);
 digitalWrite(5,LOW);
 Serial.println("LED LOW");
 delay(5000);
}
