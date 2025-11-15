int num_array[10][7] = {  
  {1,1,1,1,1,1,0},  //0
  {0,1,1,0,0,0,0},  //1
  {1,1,0,1,1,0,1},  //2
  {1,1,1,1,0,0,1},  //3
  {0,1,1,0,0,1,1},  //4
  {1,0,1,1,0,1,1},  //5
  {1,0,1,1,1,1,1},  //6
  {1,1,1,0,0,0,0},  //7
  {1,1,1,1,1,1,1},  //8
  {1,1,1,0,0,1,1}   //9
};

const int segment_a = 2; 
const int segment_b = 3; 
const int segment_c = 4;
const int segment_d = 5;
const int segment_e = 6;
const int segment_f = 7;
const int segment_g = 8;

const int digit1 = 10;   // หลักซ้าย
const int digit2 = 11;  // หลักขวา

// ลำดับตัวเลข 8 ตัว
int digits[8] = {6,7,0,7,0,2,7,7};

void setup() { 
  pinMode(segment_a, OUTPUT);   
  pinMode(segment_b, OUTPUT);   
  pinMode(segment_c, OUTPUT);   
  pinMode(segment_d, OUTPUT);   
  pinMode(segment_e, OUTPUT);   
  pinMode(segment_f, OUTPUT);   
  pinMode(segment_g, OUTPUT);   

  pinMode(digit1, OUTPUT);
  pinMode(digit2, OUTPUT);
}

void loop() {
  for (int i = 0; i < 8; i += 2) {
    int d1 = digits[i];     // หลักซ้าย
    int d2 = digits[i+1];   // หลักขวา

    unsigned long startTime = millis();
    while (millis() - startTime < 1000) {  // โชว์คู่นี้นาน 1 วิ
      // หลักซ้าย
      digitalWrite(digit1, LOW);
      digitalWrite(digit2, HIGH);
      displayDigit(d1);
      delay(5);

      // หลักขวา
      digitalWrite(digit1, HIGH);
      digitalWrite(digit2, LOW);
      displayDigit(d2);
      delay(5);
    }
  }
}

void displayDigit(int digit) {
  digitalWrite(segment_a, num_array[digit][0]);
  digitalWrite(segment_b, num_array[digit][1]);
  digitalWrite(segment_c, num_array[digit][2]);
  digitalWrite(segment_d, num_array[digit][3]);
  digitalWrite(segment_e, num_array[digit][4]);
  digitalWrite(segment_f, num_array[digit][5]);
  digitalWrite(segment_g, num_array[digit][6]);
}
