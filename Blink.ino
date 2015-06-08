#define FIRST_PATTERN_DELAY 120

void setup() {
  enableOutputPins();  
}

void enableOutputPins(){
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);  
}


void loop() {
  
  firstPattern();
  secondPattern();
  thirdPattern();
}


// 3rd pattern from middle to sides
void thirdPattern(){
  digitalWrite(8, HIGH); 
  delay(FIRST_PATTERN_DELAY);
  digitalWrite(13, HIGH);  
  delay(FIRST_PATTERN_DELAY);
  digitalWrite(9, HIGH);
  delay(FIRST_PATTERN_DELAY);
  digitalWrite(12, HIGH);
  delay(FIRST_PATTERN_DELAY);  
  digitalWrite(10, HIGH);
  delay(FIRST_PATTERN_DELAY);  
  digitalWrite(11, HIGH);
  delay(FIRST_PATTERN_DELAY);  
  
  digitalWrite(8, LOW); 
  delay(FIRST_PATTERN_DELAY);
  digitalWrite(13, LOW);  
  delay(FIRST_PATTERN_DELAY);
  digitalWrite(9, LOW);
  delay(FIRST_PATTERN_DELAY);
  digitalWrite(12, LOW);
  delay(FIRST_PATTERN_DELAY);  
  digitalWrite(10, LOW);
  delay(FIRST_PATTERN_DELAY);  
  digitalWrite(11, LOW);  
  delay(FIRST_PATTERN_DELAY); 
}


// 2nd pattern from right to left
void secondPattern(){    
  digitalWrite(8, HIGH); 
  delay(FIRST_PATTERN_DELAY);
  digitalWrite(9, HIGH);  
  delay(FIRST_PATTERN_DELAY);
  digitalWrite(10, HIGH);
  delay(FIRST_PATTERN_DELAY);
  digitalWrite(11, HIGH);
  delay(FIRST_PATTERN_DELAY);  
  digitalWrite(12, HIGH);
  delay(FIRST_PATTERN_DELAY);  
  digitalWrite(13, HIGH);
  delay(FIRST_PATTERN_DELAY);  
  
  digitalWrite(8, LOW); 
  delay(FIRST_PATTERN_DELAY);
  digitalWrite(9, LOW);  
  delay(FIRST_PATTERN_DELAY);
  digitalWrite(10, LOW);
  delay(FIRST_PATTERN_DELAY);
  digitalWrite(11, LOW);
  delay(FIRST_PATTERN_DELAY);  
  digitalWrite(12, LOW);
  delay(FIRST_PATTERN_DELAY);  
  digitalWrite(13, LOW);  
  delay(FIRST_PATTERN_DELAY);    
}

// 1st pattern from left to right
void firstPattern(){    
  digitalWrite(13, HIGH); 
  delay(FIRST_PATTERN_DELAY);
  digitalWrite(12, HIGH);  
  delay(FIRST_PATTERN_DELAY);
  digitalWrite(11, HIGH);
  delay(FIRST_PATTERN_DELAY);
  digitalWrite(10, HIGH);
  delay(FIRST_PATTERN_DELAY);  
  digitalWrite(9, HIGH);
  delay(FIRST_PATTERN_DELAY);  
  digitalWrite(8, HIGH);
  delay(FIRST_PATTERN_DELAY);  

  digitalWrite(13, LOW); 
  delay(FIRST_PATTERN_DELAY);
  digitalWrite(12, LOW);  
  delay(FIRST_PATTERN_DELAY);
  digitalWrite(11, LOW);
  delay(FIRST_PATTERN_DELAY);
  digitalWrite(10, LOW);
  delay(FIRST_PATTERN_DELAY);  
  digitalWrite(9, LOW);
  delay(FIRST_PATTERN_DELAY);  
  digitalWrite(8, LOW);  
  delay(FIRST_PATTERN_DELAY);    
}

