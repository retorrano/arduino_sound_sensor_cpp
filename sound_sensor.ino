// Define the pins
#define SENSOR_PIN A0 // Analog pin connected to the AOUT pin of the sound sensor
#define LED_PIN 2    // Digital pin connected to the LED

// Define the variables
int soundValue; // The analog value of the sound sensor
int stat = 0;
  
void setup() {
  // Initialize the serial communication
  Serial.begin(9600);
  
  // Initialize the pins
  pinMode(SENSOR_PIN, INPUT); // Set the sensor pin as an input
  pinMode(LED_PIN, OUTPUT);  // Set the LED pin as an output
}

void loop() {
  // Read the analog value of the sound sensor
  soundValue = analogRead(SENSOR_PIN);
  
  // Print the sound value to the serial monitor
  
  
  // Turn on the LED if the sound value is above a certain level
  // You can adjust the threshold based on your needs, here it's set as 200 for demonstration
  if (soundValue > 100) {
    Serial.println(soundValue);
    if (stat == 0){
      stat=1;
      digitalWrite(LED_PIN, HIGH);
    }
    else{
      stat=0;
      digitalWrite(LED_PIN, LOW);
    }
  }

}
