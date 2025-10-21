#define BLYNK_TEMPLATE_ID "TMPL3nIJM4WYV"
#define BLYNK_TEMPLATE_NAME "smart moisture monitoring esp8266"
#define BLYNK_AUTH_TOKEN "goAwH16SgRwtzXjRABzaAsPrRFg2tY-1"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Andriod";
char pass[] = "12345678";

#define SOIL_PIN A0       // ESP8266 has only one analog pin
#define RELAY_PIN D1      // choose any digital pin like D1, D2, etc.

int threshold = 600;

void setup() {
  Serial.begin(115200);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();

  int moisture = analogRead(SOIL_PIN);
  Serial.print("Moisture: ");
  Serial.println(moisture);

  Blynk.virtualWrite(V1, moisture);

  if (moisture < threshold) {
    digitalWrite(RELAY_PIN, LOW);
    Blynk.virtualWrite(V2, 1);
    Serial.println("Soil is Dry → Relay ON");
  } else {
    digitalWrite(RELAY_PIN, HIGH);
    Blynk.virtualWrite(V2, 0);
    Serial.println("Soil is Wet → Relay OFF");
  }

  delay(2000);
}
