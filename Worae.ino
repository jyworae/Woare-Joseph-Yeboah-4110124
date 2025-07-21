// Lab 1 - Experiment 4: Reading Analogue Input with ESP32 and a Potentiometer
// Define the analog pin connected to the potentiometer
const int potPin = 12; // GPIO12 is input only

void setup() {
  Serial.begin(115200); // Start Serial Monitor at 115200 baud rate
}

void loop() {
  int potValue = analogRead(potPin); // Read analog value (0-4095)
  
  // Print the potentiometer value to the Serial Monitor
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);
  
  delay(200); // Short delay for readability
}
