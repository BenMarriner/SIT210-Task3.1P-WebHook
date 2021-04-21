const int tempSensor = A5;
String sensorReading;

void setup() {
    Serial.begin(9600);
    pinMode(tempSensor, INPUT);
}

void loop() {
    sensorReading = analogRead(tempSensor);
    Particle.publish("temp", sensorReading, PRIVATE);
    delay(60000);
}
