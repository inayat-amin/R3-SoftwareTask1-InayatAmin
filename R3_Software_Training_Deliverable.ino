//BCD 2

int a1 = 4;
int a2 = 5;
int a3 = 6;
int a4 = 7;

//BCD 1

int b1 = 8;
int b2 = 9;
int b3 = 10;
int b4 = 11;

void setup()
{
  /*Initalize pinModes for the four switches (output pins) 
  for the BCD2 */
  
  pinMode(a1,OUTPUT);
  pinMode(a2,OUTPUT);
  pinMode(a3,OUTPUT);
  pinMode(a4,OUTPUT);
  
  /*Initalize pinModes for the four switches (output pins) 
  for the BCD1 */
  
  pinMode(b1,OUTPUT);
  pinMode(b2,OUTPUT);
  pinMode(b3,OUTPUT);
  pinMode(b4,OUTPUT);  
}
void loop()
{
  /* Declare a variable to read the value from the potentiometer
  and map the values to 0-99 sequence */
  
  int val = analogRead(A0);
  val = map(val, 0, 1023, 0, 99);
  disp1(val);
  disp2(val);
}

/* Function for display 1 calculates the first digit of
val and outputs the binary equivalent to the 7-segment
display */

void disp1(int num)
{
  int first_digit = num/10;
  
  Serial.println(first_digit);
  
  if(first_digit == 0)
    {
    digitalWrite(b1, LOW);
    digitalWrite(b2, LOW);
    digitalWrite(b3, LOW);
    digitalWrite(b4, LOW);
    }
  
  if(first_digit == 1)
    {
    digitalWrite(b1, HIGH);
    digitalWrite(b2, LOW);
    digitalWrite(b3, LOW);
    digitalWrite(b4, LOW);
    }
  
  if(first_digit == 2)
    {
    digitalWrite(b1, LOW);
    digitalWrite(b2, HIGH);
    digitalWrite(b3, LOW);
    digitalWrite(b4, LOW);
    }
  
  if(first_digit == 3)
    {
    digitalWrite(b1, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(b3, LOW);
    digitalWrite(b4, LOW);
    }
  
  if(first_digit == 4)
    {
    digitalWrite(b1, LOW);
    digitalWrite(b2, LOW);
    digitalWrite(b3, HIGH);
    digitalWrite(b4, LOW);
    }
  
  if(first_digit == 5)
    {
    digitalWrite(b1, HIGH);
    digitalWrite(b2, LOW);
    digitalWrite(b3, HIGH);
    digitalWrite(b4, LOW);
    }
  
  if(first_digit == 6)
    {
    digitalWrite(b1, LOW);
    digitalWrite(b2, HIGH);
    digitalWrite(b3, HIGH);
    digitalWrite(b4, LOW);
    }
  
  if(first_digit == 7)
    {
    digitalWrite(b1, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(b3, HIGH);
    digitalWrite(b4, LOW);
    }
  
  if(first_digit == 8)
    {
    digitalWrite(b1, LOW);
    digitalWrite(b2, LOW);
    digitalWrite(b3, LOW);
    digitalWrite(b4, HIGH);
    }
  
  if(first_digit == 9)
  {
    digitalWrite(b1, HIGH);
    digitalWrite(b2, LOW);
    digitalWrite(b3, LOW);
    digitalWrite(b4, HIGH);
  }
}

/* Function for display 2 calculates the second digit of
val and outputs the binary equivalent to the 7-segment
display */

void disp2(int num)
{
  int second_digit = num%10;
  
  Serial.println(second_digit);
  
  if(second_digit == 0)
    {
    digitalWrite(a1, LOW);
    digitalWrite(a2, LOW);
    digitalWrite(a3, LOW);
    digitalWrite(a4, LOW);
    }
  
  if(second_digit == 1)
    {
    digitalWrite(a1, HIGH);
    digitalWrite(a2, LOW);
    digitalWrite(a3, LOW);
    digitalWrite(a4, LOW);
    }
  
  if(second_digit == 2)
    {
    digitalWrite(a1, LOW);
    digitalWrite(a2, HIGH);
    digitalWrite(a3, LOW);
    digitalWrite(a4, LOW);
    }
  
  if(second_digit == 3)
    {
    digitalWrite(a1, HIGH);
    digitalWrite(a2, HIGH);
    digitalWrite(a3, LOW);
    digitalWrite(a4, LOW);
    }
  
  if(second_digit == 4)
    {
    digitalWrite(a1, LOW);
    digitalWrite(a2, LOW);
    digitalWrite(a3, HIGH);
    digitalWrite(a4, LOW);
    }
  
  if(second_digit == 5)
    {
    digitalWrite(a1, HIGH);
    digitalWrite(a2, LOW);
    digitalWrite(a3, HIGH);
    digitalWrite(a4, LOW);
    }
  
  if(second_digit == 6)
    {
    digitalWrite(a1, LOW);
    digitalWrite(a2, HIGH);
    digitalWrite(a3, HIGH);
    digitalWrite(a4, LOW);
    }
  
  if(second_digit == 7)
    {
    digitalWrite(a1, HIGH);
    digitalWrite(a2, HIGH);
    digitalWrite(a3, HIGH);
    digitalWrite(a4, LOW);
    }
  
  if(second_digit == 8)
    {
    digitalWrite(a1, LOW);
    digitalWrite(a2, LOW);
    digitalWrite(a3, LOW);
    digitalWrite(a4, HIGH);
    }
  
  if(second_digit== 9)
  {
    digitalWrite(a1, HIGH);
    digitalWrite(a2, LOW);
    digitalWrite(a3, LOW);
    digitalWrite(a4, HIGH);
  }
}
  
  