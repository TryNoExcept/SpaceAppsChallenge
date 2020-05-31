#define relay1 11 //Relay responsible for controlling Flap 1 and 2
#define relay2 12 //Relay responsible for controlling Flap 3   
#define relay3 13 //Relay responsible for controlling Flap 4
int Stage = 1;

void setup()
{
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{

  switch(Stage){
  
  case 1:
    Serial.println("***************");
    Serial.println("***************");
    Serial.println("*TEST STARTED*");
    Serial.println("***************");
    Serial.println("***************");
    //Compressor ON
    digitalWrite(relay1, LOW);
    digitalWrite(relay2, HIGH);
    digitalWrite(relay3, HIGH);
    Stage = 2;
    Serial.println("CASO 1 EM ANDAMENTO");
    delay(1500);
    digitalWrite(relay3, LOW);
    delay(200);
    digitalWrite(relay3, HIGH);
    break;
    
   case 2:
    Serial.println("CASO 2 EM ANDAMENTO");
    digitalWrite(relay1, HIGH);
    delay(1500);
    Stage = 3;
    break;
    
   case 3:
    Serial.println("CASO 3 EM ANDAMENTO");
    digitalWrite(relay2, LOW);
    delay(200);
    Stage = 4;
    break;
  
   case 4:
    Serial.println("CASO 4 EM ANDAMENTO");
    digitalWrite(relay2, HIGH);
    digitalWrite(relay1, LOW);
    delay(1500);
    Stage = 5;
    break;
    
   case 5:
    Serial.println("CASO 5 EM ANDAMENTO");
    digitalWrite(relay3, LOW);
    delay(200);
    digitalWrite(relay3, HIGH);
    Stage = 2;
    break;
  }
  
}
