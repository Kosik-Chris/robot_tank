/*
 * Orientation is from the rear of tank. 
 * Quick Non-PWM test for batteries/ motor
 * 
 */
#define enA 21 //pwm right side lower motor
#define in1A 19
#define in2A 18

#define enB 5  //pwm right side upper motor
#define in1B 17
#define in2B 16

#define enAB 35  //pwm left side lower motor
#define in1AB 32
#define in2AB 33

#define enBB 25  //pwm left side upper motor
#define in1BB 26
#define in2BB 27

// the number of the LED pin
//const int ledPin = 16;  // 16 corresponds to GPIO16

// setting PWM properties esp32
const int freq = 5000;
const int ledChannel = 0;
const int resolution = 8;

int rotDirection = 0;

void setup() {

  pinMode(enA, OUTPUT);
  pinMode(in1A, OUTPUT);
  pinMode(in2A, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1B, OUTPUT);
  pinMode(in2B, OUTPUT);
  pinMode(enAB, OUTPUT);
  pinMode(in1AB, OUTPUT);
  pinMode(in2AB, OUTPUT);
  pinMode(enBB, OUTPUT);
  pinMode(in1BB, OUTPUT);
  pinMode(in2BB, OUTPUT);

    // Set initial rotation direction right side track
  digitalWrite(in1A, LOW);
  digitalWrite(in2A, HIGH);
  digitalWrite(in1B, LOW);
  digitalWrite(in2B, HIGH);

    // Set initial rotation direction left side track
  digitalWrite(in1AB, LOW);
  digitalWrite(in2AB, HIGH);
  digitalWrite(in1BB, LOW);
  digitalWrite(in2BB, HIGH);  
  
//  // configure LED PWM functionalitites
//  ledcSetup(ledChannel, freq, resolution);
//  
//  // attach the channel to the GPIO to be controlled
//  ledcAttachPin(enA, ledChannel);

}

void loop() {
    
  
    digitalWrite(enA, HIGH);
    digitalWrite(enB, HIGH);
    digitalWrite(enAB, HIGH);
    digitalWrite(enBB, HIGH);
//    ledcWrite(ledChannel, 255);

}
