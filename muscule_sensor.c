/*
    Project name : ESP8266 Muscle Sensor EMG
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-muscle-sensor-emg
*/

const int emgPin = A0; // Analog pin connected to the EMG sensor
const int threshold = 500; // Threshold value for muscle activity

void setup() {
  Serial.begin(115200); // Initialize serial communication at 115200 baud rate
}

void loop() {
  int emgValue = analogRead(emgPin); // Read the analog value from the EMG sensor
  
  // Print the EMG value to the Serial Monitor
  Serial.print("EMG Value: ");
  Serial.println(emgValue);

  // Check if the EMG value exceeds the threshold
  if (emgValue > threshold) {
    Serial.println("Muscle activity detected!");
  }

  delay(100); // Add a small delay before the next reading
}
