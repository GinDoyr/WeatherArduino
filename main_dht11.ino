#include <DHT.h>
#define DHTPIN 2 // set sensor (DHT11) pin here
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  Serial.begin(9600);
  dht.begin();
}
void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Unable to read from sensor");
    return;
  }
  Serial.print("temp:");
  Serial.print(temperature);
  Serial.print("°C ");
  Serial.print("humm:");
  Serial.print(humidity);
  Serial.println("%");
  delay(500);
}
