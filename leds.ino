void setup() {
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}


void loop() {
  int x=0;
   for(x = 0; x <= 13; x++)
  {
      digitalWrite(x,HIGH);
      delay (200);
      digitalWrite(x,LOW);
  }
  int a=13;
  for(x = 0; x <= 13; x++)
  {
    
      digitalWrite(a,HIGH);
      delay (200);
      digitalWrite(a,LOW);
      a=a-1;
  }
   for(x = 0; x <= 13; x++)
  {
    if (x%2==0)
    {
     
      digitalWrite(x,HIGH);
      delay (200);
      digitalWrite(x,LOW); 
    }
  }
  for(x = 0; x <= 13; x++)
  {
    if (x%2!=0)
    {
     
      digitalWrite(x,HIGH);
      delay (200);
      digitalWrite(x,LOW); 
    }
  }

  
 }

