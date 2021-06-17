/*
read the IR sensors's state
*/

// the constants won't change:

const int ledPin = 13;       // the pin that the LED is attached to

const int sensor1 = 2;
const int sensor2 = 3;
const int sensor3 = 4;
const int sensor4 = 5;
const int sensor5 = 6;
const int sensor6 = 7;
const int sensor7 = 8;


// Variables will change:
// in this Arduino the sensor will give 1 = no presence, 0 = presence detected
//but we will use the state as usual. 0=false, 1= true
int sensor1State = 0; 
int sensor2State = 0; 
int sensor3State = 0; 
int sensor4State = 0; 
int sensor5State = 0;  
int sensor6State = 0; 
int sensor7State = 0; 

int last1State = 0;
int last2State = 0;
int last3State = 0;
int last4State = 0;
int last5State = 0;
int last6State = 0;
int last7State = 0;

void setup() {
  // initialize the sensor pin as an input:
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(sensor4, INPUT);
  pinMode(sensor5, INPUT);
  pinMode(sensor6, INPUT);
  pinMode(sensor7, INPUT);
  // initialize the LED as an output:
  //pinMode(ledPin, OUTPUT);
  // initialize serial communication:
  Serial.begin(9600);
}


void loop() {
///////////sensor 1 
//if active
  if( digitalRead(sensor1)==0){
    sensor1State = 1; //active
    Serial.println("11");
   }
   else {sensor1State = 0;
   Serial.println("10");}

///////////sensor 2
  if( digitalRead(sensor2)==0){
    sensor2State = 1;
    Serial.println("21");
  }
  else {sensor2State = 0;
  Serial.println("20");}
  
///////////sensor 3
  if( digitalRead(sensor3)==0){
    sensor3State = 1;
    Serial.println("31"); //active
  }
  else {sensor3State = 0;
   Serial.println("30");}

///////////sensor 4
  if( digitalRead(sensor4)==0){
    sensor4State = 1;
    Serial.println("41");
  }
  else {sensor4State = 0;
    Serial.println("40");}
    
//////////sensor 5
  if( digitalRead(sensor5)==0){
    sensor5State = 1;
    Serial.println("51");
  }
  else {sensor5State = 0;
      Serial.println("50");}
      
//////////sensor 6
  if( digitalRead(sensor6)==0){
    sensor6State = 1;
    Serial.println("61");
  }
  else {sensor6State = 0;
    Serial.println("60");}

//////////sensor 7
  if( digitalRead(sensor7)==0){
    sensor7State = 1;
    Serial.println("71");
  }
  else {sensor7State = 0;
    Serial.println("70");}
  
  delay(20);
  
}
