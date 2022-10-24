int button = 8;
int val;
int led = 9;

void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT_PULLUP);
  pinMode(led, OUTPUT);

}

void loop() {
  val = digitalRead(button);
  if(val == 0){
    
      digitalWrite(led, HIGH);
      
      delay(1000);
   
    
    
  }else{
    digitalWrite(led,LOW);
    
  }
 

}
