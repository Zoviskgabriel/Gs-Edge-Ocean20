#include <Wire.h>
#include <OneWire.h>
#include <DallasTemperature.h>

// Data wire is plugged into port 2 on the Arduino
#define ONE_WIRE_BUS 2
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

// LDR pin
const int ldrPin = A0;


void setup() {
  // Start the serial communication
  Serial.begin(9600);

  // Start up the DS18B20 sensor
  sensors.begin();
}

void loop() {
  // Reading temperature from DS18B20
  sensors.requestTemperatures();
  float temperatureC = sensors.getTempCByIndex(0);
  Serial.print("Water Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  

  // Reading light intensity from LDR
  int ldrValue = analogRead(ldrPin);
  // Convert LDR value to Lux (assuming a simple linear conversion)
  // Note: This conversion is a placeholder. Calibration is needed for accurate Lux conversion.
  float ldrLux = map(ldrValue, 0, 1023, 0, 1000);
  Serial.print("Water Clarity: ");
  Serial.print(ldrLux);
  Serial.println(" Lux");

  

  // Delay before next reading
  delay(2000);
}