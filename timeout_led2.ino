int button1 = 3;
int button2 = 4;
int button3 = 5;
int button4 = 6;
int led1= 9;
int led2= 10;
int led3= 11;
int led4= 12;
int startbutton= 7;
int led=8;
int ledPin = 13; 

int ledState1 = LOW;         
int buttonState1;          
int lastButtonState1 = LOW;
unsigned long lastDebounceTime1 = 0;  
unsigned long debounceDelay1 = 50;

int ledState2 = LOW;         
int buttonState2;          
int lastButtonState2 = LOW;
unsigned long lastDebounceTime2 = 0;  
unsigned long debounceDelay2 = 50;

int ledState3 = LOW;         
int buttonState3;          
int lastButtonState3 = LOW;
unsigned long lastDebounceTime3 = 0;  
unsigned long debounceDelay3 = 50;

int ledState4 = LOW;         
int buttonState4;          
int lastButtonState4 = LOW;
unsigned long lastDebounceTime4 = 0;  
unsigned long debounceDelay4 = 50;
int waktu1=1000;
int waktu2=2000;
int waktu3=3000;
int waktu4=4000;
void setup() {
  // put your setup code here, to run once:
   pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(startbutton,INPUT);
  pinMode(led,OUTPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);
  
}

void time1() {
  int reading1 = digitalRead(button1);
  if (reading1 != lastButtonState1) {
    lastDebounceTime1 = millis();
  }
  if ((millis() - lastDebounceTime1) > debounceDelay1) {
    if (reading1 != buttonState1) {
      buttonState1 = reading1;
      if (buttonState1 == HIGH) {
        ledState1 = !ledState1;
      }
    }
  }
  digitalWrite(led1, ledState1);
  lastButtonState1 = reading1;
}
void time2() {
  int reading2 = digitalRead(button2);
  if (reading2 != lastButtonState2) {
    lastDebounceTime2 = millis();
  }
  if ((millis() - lastDebounceTime2) > debounceDelay2) {
    if (reading2 != buttonState2) {
      buttonState2 = reading2;
      if (buttonState2 == HIGH) {
        ledState2 = !ledState2;
      }
    }
  }
  digitalWrite(led2, ledState2);
  lastButtonState2 = reading2;
}
void time3() {
  int reading3 = digitalRead(button3);
  if (reading3 != lastButtonState3) {
    lastDebounceTime3 = millis();
  }
  if ((millis() - lastDebounceTime3) > debounceDelay3) {
    if (reading3 != buttonState3) {
      buttonState3 = reading3;
      if (buttonState3 == HIGH) {
        ledState3 = !ledState3;
      }
    }
  }
  digitalWrite(led3, ledState3);
  lastButtonState3 = reading3;
}
void time4() {
  int reading4 = digitalRead(button4);
  if (reading4 != lastButtonState4) {
    lastDebounceTime4 = millis();
  }
  if ((millis() - lastDebounceTime4) > debounceDelay4) {
    if (reading4 != buttonState4) {
      buttonState4 = reading4;
      if (buttonState4 == HIGH) {
        ledState4 = !ledState4;
      }
    }
  }
  digitalWrite(led4, ledState4);
  lastButtonState4 = reading4;
}

void loop()
{
  time1();
  time2();
  time3();
  time4();
  int mulai=digitalRead(startbutton);
  if(mulai==HIGH&&ledState1==HIGH)
  {
    digitalWrite(13,LOW);
    digitalWrite(led,HIGH);
    delay(waktu1);
    digitalWrite(led,LOW);
    digitalWrite(13,HIGH);  
  }
  if(mulai==HIGH&&ledState2==HIGH)
  {
    digitalWrite(13,LOW);
    digitalWrite(led,HIGH);
    delay(waktu2);
    digitalWrite(led,LOW);
    digitalWrite(13,HIGH);  
  }
  if(mulai==HIGH&&ledState3==HIGH)
  {
    digitalWrite(13,LOW);
    digitalWrite(led,HIGH);
    delay(waktu3);
    digitalWrite(led,LOW);
    digitalWrite(13,HIGH);  
  }
  if(mulai==HIGH&&ledState4==HIGH)
  {
    digitalWrite(13,LOW);
    digitalWrite(led,HIGH);
    delay(waktu4);
    digitalWrite(led,LOW);
    digitalWrite(13,HIGH);  
  }
}

