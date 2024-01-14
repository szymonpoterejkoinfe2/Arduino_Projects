int clicks = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT_PULLUP);
pinMode(3,INPUT_PULLUP);
pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pusshed = digitalRead(2);
  int startCount = digitalRead(3);
  if(pusshed == LOW ){
    digitalWrite(10,HIGH);
      clicks +=1;
      delay(500);
    }
    else{
       digitalWrite(10,LOW);
      }
  if(startCount == LOW )
  {
    if(clicks > 0)
    {
      for(int i = 0; i < clicks; i++)
      {
        digitalWrite(10,HIGH);
        delay(500);
        digitalWrite(10,LOW);
        delay(200);
      }  
    clicks = 0;
     }
   else
   {
     for(int i = 0; i < 5; i++)
      {
        digitalWrite(10,HIGH);
        delay(100);
        digitalWrite(10,LOW);
        delay(100);
      } 
    }
  }

}
