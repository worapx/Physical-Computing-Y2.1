// Thermistor parameters from the datasheet
#define RT0 10000
#define B 3977

// Our series resistor value = 330 Ω
#define R 10000 //ใช้ตัวสีน้ำตาล,ดำ,ส้ม,ทอง  

// Variables for calculations
float RT, VR, ln, TX, T0, VRT;

void setup() {
  // Setup serial communication
  Serial.begin(9600);
  // Convert T0 from Celsius to Kelvin
  T0 = 25 + 273.15;
}

void loop() {
  // Read the voltage across the thermistor
  VRT = (5.00 / 1023.00) * analogRead(A0);
  // Calculate the voltage across the resistor
  VR = 5.00 - VRT;
  // Calculate resistance of the thermistor
  RT = VRT / (VR / R);
  // Calculate temperature from thermistor resistance
  ln = log(RT / RT0);
  TX = (1 / ((ln / B) + (1 / T0)));
  // Convert to Celsius
  TX = TX - 273.15;
  Serial.print("Temperature: ");
  // Display in Celsius
  Serial.print(TX);                  
  Serial.print("C\t");
  // Convert and display in Kelvin
  Serial.print(TX + 273.15);
  Serial.print("K\t");
  // Convert and display in Fahrenheit
  Serial.print((TX * 1.8) + 32);
  Serial.println("F");
  delay(500);
}
