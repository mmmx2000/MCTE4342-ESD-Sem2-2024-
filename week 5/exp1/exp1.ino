void setup()  //To run on Arduino, just change this function to void setup()
{
  Serial.begin(9600);  //For now, we are still using the Serial library
  for (;;) {
    int value = analogRead(A0);  //int or unsigned int does not matter
    Serial.println(value);
  }
}