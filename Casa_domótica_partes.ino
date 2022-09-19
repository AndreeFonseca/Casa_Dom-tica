int led = 13;
int pir = 7;
int pirdato;
int gas;
int piezo = 12;
int foco = 8;
int interruptor = 4;

int interruptor2 =2;
int motor1 = 11;
int Dir1 = 10;
int Dir2 = 9;

int var1 = 0; //encender o apagar foco

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pir,INPUT);
  pinMode(A0, INPUT);
  pinMode(piezo, OUTPUT);
  pinMode(interruptor,OUTPUT);
  pinMode(foco, OUTPUT);
  pinMode(motor1, OUTPUT);
  Serial.begin(3600);
    
}
void loop()
{
  pirdato = digitalRead(pir); //detector de movimiento
  if (pirdato == HIGH)
  	{
    digitalWrite(led, HIGH);
  	}
  else
  	{
    digitalWrite(led, LOW);
  	}
  delay(10); 
  
  	gas = analogRead(A0); // detector de gas
 	 if (gas >= 600)
    	{
    	tone(piezo, 600, 200);
        delay(1000);
   	 	}
  
  if(digitalRead(interruptor)==1)//foco de dormitorio
  {
    digitalWrite(foco, HIGH);
  }else
  {
    digitalWrite(foco, LOW);
  }
  
  if(digitalRead(interruptor2)==0){
    //DIRECCION
    digitalWrite(Dir1,HIGH);
    digitalWrite(Dir2,LOW);
    //Encender motor
    digitalWrite(motor1, HIGH);
    int x=0;
    while(x<5){
    	x=x+1;
      	delay(1000);
    }
    digitalWrite(motor1, LOW);
  
  }else
  {
    //DIRECCION
    digitalWrite(Dir1,LOW);
    digitalWrite(Dir2,HIGH);
    //Encender motor
    digitalWrite(motor1, HIGH);
    int y=0;
    while(y<5){
    	y=y+1;
      	delay(1000);
    }
    digitalWrite(motor1, LOW);
  }
  
  if(digitalRead(interruptor2)==1){
    //DIRECCION
    digitalWrite(Dir1,HIGH);
    digitalWrite(Dir2,LOW);
    //Encender motor
    digitalWrite(motor1, HIGH);
    int x=0;
    while(x<5){
    	x=x+1;
      	delay(1000);
    }
    digitalWrite(motor1, LOW);
  
  }else
  {
    //DIRECCION
    digitalWrite(Dir1,LOW);
    digitalWrite(Dir2,HIGH);
    //Encender motor
    digitalWrite(motor1, HIGH);
    int y=0;
    while(y<5){
    	y=y+1;
      	delay(1000);
    }
    digitalWrite(motor1, LOW);
  }
}
