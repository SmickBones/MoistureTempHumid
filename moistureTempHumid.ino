#include <dht11.h>

dht11 DHT11;

#define DHT11PIN 2

int sensorValue0 = 0; 
int sensorValue1 = 0;
int sensorValue2 = 0;
int sensorValue3 = 0;
int sensorValue4 = 0;

void setup(){
Serial.begin(115200);
}

void loop() {
// read the input on analog pins:
int sensorValue0 = analogRead(A0); 
int sensorValue1 = analogRead(A1);
int sensorValue2 = analogRead(A2);
int sensorValue3 = analogRead(A3);
int sensorValue4 = analogRead(A4);

int chk = DHT11.read(DHT11PIN);

float temp = DHT11.temperature;
float humid = DHT11.humidity;

Serial.print(temp, 2);
Serial.print(",");
Serial.print(humid, 2);
Serial.print(",");
Serial.print(sensorValue0);
Serial.print(",");
Serial.print(sensorValue1);
Serial.print(",");
Serial.print(sensorValue2);
Serial.print(",");
Serial.print(sensorValue3);
Serial.print(",");
// println for new line:
Serial.println(sensorValue4);

// log every minute
delay(60000);

}
