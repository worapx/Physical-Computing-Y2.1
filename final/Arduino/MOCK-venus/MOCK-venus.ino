/*
 *
 * This Arduino UNO R4 code is made available for public use without any restriction
 *
 */

#include <WiFiS3.h>
#include <MQTTClient.h>

const int PIN_RED = 9;
const int PIN_GREEN = 6;
const int PIN_BLUE = 3;

const char WIFI_SSID[] = "bxrtxrr";     // CHANGE TO YOUR WIFI SSID
const char WIFI_PASSWORD[] = "blue.saturn";  // CHANGE TO YOUR WIFI PASSWORD

const char MQTT_BROKER_ADRRESS[] = "phycom.it.kmitl.ac.th";  // CHANGE TO MQTT BROKER'S ADDRESS
//const char MQTT_BROKER_ADRRESS[] = "192.168.0.11";  // CHANGE TO MQTT BROKER'S IP ADDRESS
const int MQTT_PORT = 1883;
const char MQTT_CLIENT_ID[] = "67070277-Worapa";  // CHANGE IT AS YOU DESIRE
const char MQTT_USERNAME[] = "";              // CHANGE IT IF REQUIRED, empty if not required
const char MQTT_PASSWORD[] = "";              // CHANGE IT IF REQUIRED, empty if not required

// The MQTT topics that Arduino should publish/subscribe
const char PUBLISH_TOPIC[] = "";       // CHANGE IT AS YOU DESIRE
const char SUBSCRIBE_TOPIC[] = "67070277/venus";  // CHANGE IT AS YOU DESIRE

const int PUBLISH_INTERVAL = 2000;  // 5 seconds
WiFiClient network;
MQTTClient mqtt = MQTTClient(256);
unsigned long lastPublishTime = 0;

void setup() {
  Serial.begin(9600);
  pinMode(PIN_RED, OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE, OUTPUT);

  digitalWrite(PIN_RED,HIGH);
  digitalWrite(PIN_GREEN,HIGH);
  digitalWrite(PIN_BLUE,HIGH);

  int status = WL_IDLE_STATUS;
  while (status != WL_CONNECTED) {
    Serial.print("Arduino UNO R4 - Attempting to connect to SSID: ");
    Serial.println(WIFI_SSID);
    // Connect to WPA/WPA2 network. Change this line if using open or WEP network:
    status = WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    // wait 10 seconds for connection:
    delay(10000);
  }
  // print your board's IP address:
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
  connectToMQTT();
}

void loop() {
  mqtt.loop();
  if (millis() - lastPublishTime > PUBLISH_INTERVAL) {
    sendToMQTT();
    lastPublishTime = millis();
  }
}

void connectToMQTT() {
  // Connect to the MQTT broker
  mqtt.begin(MQTT_BROKER_ADRRESS, MQTT_PORT, network);
  // Create a handler for incoming messages
  mqtt.onMessage(messageReceived);
  Serial.print("Arduino UNO R4 - Connecting to MQTT broker");
  while (!mqtt.connect(MQTT_CLIENT_ID, MQTT_USERNAME, MQTT_PASSWORD)) {
    Serial.print(".");
    delay(100);
  }
  Serial.println();
  if (!mqtt.connected()) {
    Serial.println("Arduino UNO R4 - MQTT broker Timeout!");
    return;
  }
  // Subscribe to a topic, the incoming messages are processed by messageHandler() function
  if (mqtt.subscribe(SUBSCRIBE_TOPIC))
    Serial.print("Arduino UNO R4 - Subscribed to the topic: ");
  else
    Serial.print("Arduino UNO R4 - Failed to subscribe to the topic: ");
  Serial.println(SUBSCRIBE_TOPIC);
  Serial.println("Arduino UNO R4 - MQTT broker Connected!");
}

void sendToMQTT() {
  // int sensorValue = analogRead(A0); // อ่านค่าเซนเซอร์
  // float voltage = (sensorValue * 5.0) / 1023.0; // แปลงค่า Analog เป็น Voltage
  // float temperatureC = 100*(voltage-1)+45;
  // //int val = millis()/1000;
  // //int val = analogRead(A0);
  // String val_str = String(temperatureC);
  // char messageBuffer[10];
  // val_str.toCharArray(messageBuffer, 10);
  // mqtt.publish(PUBLISH_TOPIC, messageBuffer);

  // Serial.println("Arduino UNO R4 - sent to MQTT:");
  // Serial.print("- topic: ");
  // Serial.println(PUBLISH_TOPIC);
  // Serial.print("- payload: ");
  // Serial.println(messageBuffer);
}

void messageReceived(String &topic, String &payload) {
  Serial.println("Arduino UNO R4 - received from MQTT:");
  Serial.println("- topic: " + topic);
  Serial.print("- payload: ");
  Serial.println(payload);

  int val = payload.toInt();
  if (val >= 36 && val <= 50){
    digitalWrite(PIN_BLUE,HIGH);
    digitalWrite(PIN_GREEN,HIGH);
    digitalWrite(PIN_RED,LOW);
  }
  else if (val >= 26 && val <= 35){
    digitalWrite(PIN_RED,HIGH);
    digitalWrite(PIN_GREEN,HIGH);
    digitalWrite(PIN_BLUE,LOW);
  }
  else if (val >= 10 && val <= 25){
    digitalWrite(PIN_RED,HIGH);
    digitalWrite(PIN_GREEN,LOW);
    digitalWrite(PIN_BLUE,HIGH);
  }
  else {
    digitalWrite(PIN_RED,HIGH);
    digitalWrite(PIN_GREEN,HIGH);
    digitalWrite(PIN_BLUE,HIGH);
  }
  // You can process the incoming data , then control something
  /*
 process something
 */
}
