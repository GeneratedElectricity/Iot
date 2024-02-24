
 const int buttonPin = 3;

 const int redPin = 11;    
 const int greenPin = 9;
 const int bluePin = 10;


int counter = 0;

long time = 0;         
long debounce = 200; 

void setup()
{
  pinMode(buttonPin, INPUT);
  pinMode(redPin, OUTPUT);  
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
}


void loop()
{
  int buttonState;  
  buttonState = digitalRead(buttonPin);

  
  if (buttonState == LOW && millis() - time > debounce) 
  {
    counter++;
    delay(150);
  }

  if(counter == 0)
  {
   digitalWrite(redPin,LOW);
   digitalWrite(greenPin,LOW);
   digitalWrite(bluePin,LOW);
  }

  else if(counter == 1)
  {
   digitalWrite(redPin,HIGH);
   digitalWrite(greenPin,LOW);
   digitalWrite(bluePin,LOW);
  }

  else if(counter ==2)
  {
   digitalWrite(redPin,LOW);
   digitalWrite(greenPin,HIGH);
   digitalWrite(bluePin,LOW);
  }

  else if(counter ==3)
  {
   digitalWrite(redPin,LOW);
   digitalWrite(greenPin,LOW);
   digitalWrite(bluePin,HIGH);
  }

  else
  {
   counter =0;
    time = millis(); 
  }


}