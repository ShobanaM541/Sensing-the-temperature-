#include <dht11.h>

dht11 DHT11; // create object of DHT11
#define dhtpin 2 // set the pin to connect to DHT11

// start of settings for LCD1602-I2C
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
// Set the LCD address to 0x3F for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x3F, 16, 2);
// end of settings for LCD1602-I2C


void setup() {
    Serial.begin(9600);// setting up serial monitor

  // initialize the LCD, 
  // Turn on the blacklight and print a message.
  lcd.backlight();
  lcd.clear();
  lcd.setCursor (0,0); //
  lcd.print("DHT11 Sensor"); 
  delay(2000);
}

void loop() {
	//Robojax Step By Step Arduono Course YouTube Watch it here http://robojax.com/L/?id=338
  DHT11.read(dhtpin);// initialize the reading
  int humidity = DHT11.humidity;// get humidity

  lcd.clear();// clearn previous values from screen
  lcd.setCursor (0,0); //character zero, line 1
  lcd.print("LCD1602 DHT11"); // print text 

  // print distance in degrees C
  lcd.setCursor (0,1); //character 0, line 2
  lcd.print(getTemp('C'));// print Temperature Celsius
  lcd.setCursor (4,1); //character 5, line 2 
  lcd.print((char)223);// print degree 
  lcd.setCursor (5,1); //character 6, line 2 
  lcd.print("C");// print C
  
   // print distance degrees F
  lcd.setCursor (7,1); //character 8, line 2
  lcd.print(getTemp('F'));// print distance in cm
  lcd.setCursor (13,1); //character 14, line 2 
  lcd.print((char)223);// print degree 
  lcd.setCursor (14,1); //character 16, line 2 
  lcd.print("F");// print F 
  
  
  //code for Robojax.com video
   Serial.print(getTemp('C'));
   Serial.print("C ");
   Serial.print(getTemp('F'));
   Serial.print("F ");
   Serial.print(getTemp('K'));
   Serial.print("K ");
   Serial.print(" humidity:");
   Serial.print (humidity);
   Serial.print("% ");
   Serial.println();
 delay(500);
}


/*
 * getTemp(char type)
 * type character of upper case 
 * C is used to get Celsius
 * F is used to get fahrenheit
 * K is used for Kelvin
 */
float getTemp(char type) {
	//Robojax Step By Step Arduono Course YouTube Watch it here http://robojax.com/L/?id=338	
    float temp = (float)DHT11.temperature;//get temp
  if(type =='F')
  {
    return temp * 1.8 + 32;// convert to fahrenheit
  }else if(type =='K')
  {
    return temp + 274.15;// convert to Kelvin
  }else{
   return temp; 
  }
  
}
