int pinLDR = A3;
int valorLDR = 0;

const int ledPIN1 = 5;
const int ledPIN2 = 6;
const int ledPIN3 = 9;
const int ledPIN4 = 10;
const int ledPIN5 = 11;

void setup() {
  Serial.begin(9600);    
  pinMode(ledPIN1 , OUTPUT);
  pinMode(ledPIN2 , OUTPUT); 
  pinMode(ledPIN3 , OUTPUT); 
  pinMode(ledPIN4 , OUTPUT); 
  pinMode(ledPIN5 , OUTPUT);   
}
 
void loop(){
  valorLDR = analogRead(pinLDR);
  Serial.println(valorLDR);
  if(valorLDR >= 523){
  digitalWrite(ledPIN1, HIGH);
  digitalWrite(ledPIN2, HIGH);
  digitalWrite(ledPIN3, HIGH);
  digitalWrite(ledPIN4, HIGH);
  digitalWrite(ledPIN5, HIGH);
  } else if((valorLDR >= 423) & (valorLDR < 523)){
    digitalWrite(ledPIN1, LOW);
    digitalWrite(ledPIN2, HIGH);
    digitalWrite(ledPIN3, HIGH);
    digitalWrite(ledPIN4, HIGH);
    digitalWrite(ledPIN5, HIGH);
    } else if((valorLDR >= 323) & (valorLDR < 423)){
      digitalWrite(ledPIN1, LOW);
      digitalWrite(ledPIN2, LOW);
      digitalWrite(ledPIN3, HIGH);
      digitalWrite(ledPIN4, HIGH);
      digitalWrite(ledPIN5, HIGH);
    } else if((valorLDR >= 223) & (valorLDR < 323)){
      digitalWrite(ledPIN1, LOW);
      digitalWrite(ledPIN2, LOW);
      digitalWrite(ledPIN3, LOW);
      digitalWrite(ledPIN4, HIGH);
      digitalWrite(ledPIN5, HIGH);
      } else if((valorLDR >= 123) & (valorLDR < 223)){
        digitalWrite(ledPIN1, LOW);
        digitalWrite(ledPIN2, LOW);
        digitalWrite(ledPIN3, LOW);
        digitalWrite(ledPIN4, LOW);
        digitalWrite(ledPIN5, HIGH);
        }
  else{
    digitalWrite(ledPIN1, LOW);
    digitalWrite(ledPIN2, LOW);
    digitalWrite(ledPIN3, LOW);
    digitalWrite(ledPIN4, LOW);
    digitalWrite(ledPIN5, LOW);
  } 
}