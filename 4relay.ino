char dado;
String dados="";
String recebido;
const int RELAY_PIN = 4;
const int RELAY_PIN1 = 5;
const int RELAY_PIN2 = 6;
const int RELAY_PIN3 = 7;

void setup() {  
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(RELAY_PIN1, OUTPUT);
  pinMode(RELAY_PIN2, OUTPUT);
  pinMode(RELAY_PIN3, OUTPUT);
}

void loop() {  
  recebido = lerSerial();  
  if (recebido.length()>0) {
    Serial.print(recebido);
    if (recebido == "1"){
      digitalWrite(13, HIGH);
      digitalWrite(RELAY_PIN, HIGH);
      delay(50);
      digitalWrite(13, LOW);
      digitalWrite(RELAY_PIN, LOW);
    }
    
    if (recebido == "2") {
      digitalWrite(13, HIGH);
      digitalWrite(RELAY_PIN1, HIGH);
      delay(50);
      digitalWrite(13, LOW);
      digitalWrite(RELAY_PIN1, LOW);
     
    }
    if (recebido == "3") {
      digitalWrite(13, HIGH);
      digitalWrite(RELAY_PIN2, HIGH);
      delay(50);
      digitalWrite(13, LOW);
      digitalWrite(RELAY_PIN2, LOW);
     
    }
    if (recebido == "4") {
      digitalWrite(13, HIGH);
      digitalWrite(RELAY_PIN3, HIGH);
      delay(50);
      digitalWrite(13, LOW);
      digitalWrite(RELAY_PIN3, LOW);
     
    }
  }
}

String lerSerial(){
  dados ="";
  dado=' ';
  while(Serial.available()>0){
    dado = (byte)Serial.read();
    dados += dado;
    dado = ' ';
    delay(10);    
  }  
  return dados;
}
