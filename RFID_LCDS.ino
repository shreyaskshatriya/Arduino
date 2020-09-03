#include <LiquidCrystal.h>


 // initialize the library with the numbers of the interface pins
 LiquidCrystal lcd1(12, 11, 5, 4, 3, 2);
 LiquidCrystal lcd2(22, 23, 24, 25, 26, 27);
int i;

 void setup() 
 {
   // set up the LCD's number of columns and rows:
   lcd1.begin(16, 2);
   lcd2.begin(16, 2);

   Serial.begin(9600);
 }

 void loop() 
 {
   if(Serial.available()>0)
   {
      i=Serial.read();
      Serial.print(i,DEC);
      Serial.print("\n");
      lcd1.clear();
      lcd1.print(i,DEC);
      lcd1.setCursor(0, 1);
      lcd1.print(i,DEC);
      lcd2.clear();
      lcd2.print("THE VALUES ARE"); 
   }
 }
