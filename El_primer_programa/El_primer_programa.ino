/************************************************************************
**                                                                     **
**                        Descripció programa                          **
**                                                                     **
/***********************************************************************/

//******  Inculdes  *****************************************************


//******  Variables  ****************************************************

//******  Setup  ********************************************************
void setup(){
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
//******  Loop  *********************************************************
void loop(){
  digitalWrite(13, HIGH);  //turn the LED on (HICH is the voltage level)
  delay(1000);             //wait for a second
  digitalWrite(13, LOW);   //turn the LED off by making the voltage LOW
  delay(1000);
  }
