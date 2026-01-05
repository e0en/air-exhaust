#define LED_ON        LOW
#define LED_OFF       HIGH
#define pinLed        25    // GP25, On-board BUILTIN_LED
#define pinPot        28    // GP28, Potentiometer input
#define pinRPM        22
#define pinPWM        0
#define frequency     250000

void setup()
{
  pinMode(pinLed, OUTPUT);
  pinMode(pinPot, INPUT);
  analogWriteFreq(frequency);
  analogWriteResolution(10);

  digitalWrite(pinLed, HIGH);

  /*
  pinMode(pinRPM, INPUT);
  Serial.begin(115200);
  while (!Serial) {
    digitalWrite(pinLed, HIGH);
    delay(100);
    digitalWrite(pinLed, LOW);
    delay(100);
  }
  */
}


void loop()
{
  int duty_cycle = analogRead(pinPot);
  
  analogWrite(pinPWM, duty_cycle);
  /*
  digitalWrite(pinLed, HIGH);
  delay(500);

  int rpm = analogRead(pinRPM);
  Serial.println(duty_cycle);
  Serial.println(rpm);
  digitalWrite(pinLed, LOW);
  delay(500);
  */
}