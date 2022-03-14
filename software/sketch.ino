//This file contains the functions for the System and Function Menu, and navigation for both menus
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <OneButton.h>
#include <EEPROM.h>
#include <RF24.h>
#include <nRF24L01.h>


#define SCREEN_WIDTH        128 // OLED display width, in pixels
#define SCREEN_HEIGHT        64 // OLED display height, in pixels

#define UP_PIN 3
#define DOWN_PIN 6
#define OK_PIN 2
#define CANCEL_PIN 5

#define BATT_VOLT A0

#define CH1_PIN  A1
#define CH2_PIN  A2
#define CH3_PIN  A3 
#define CH4_PIN  A4

#define VRA_PIN  A6
#define VRB_PIN  A7

#define SWA_PIN  A8
#define SWB_PIN  A9
#define SWC_PIN  A10
#define SWD_PIN  A11


#define CH1_LEFT_TRIM_PIN 29
#define CH1_RIGHT_TRIM_PIN 27

#define CH2_UPTRIM_PIN 23
#define CH2_DOWNTRIM_PIN 25

#define CH3_UPTRIM_PIN 22
#define CH3_DOWNTRIM_PIN 24

#define CH4_LEFT_TRIM_PIN 26
#define CH4_RIGHT_TRIM_PIN 28

#define BUZZ_PIN 7




// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
// The pins for I2C are defined by the Wire-library. 
// On an arduino UNO:       A4(SDA), A5(SCL)
// On an arduino MEGA 2560: 20(SDA), 21(SCL)
// On an arduino LEONARDO:   2(SDA),  3(SCL), ...

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET            4 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


#define NRF_CE 8
#define NRF_CSN 9


const uint64_t address = 0xE8E8F0F0E1LL; //Byte of array representing the address. This is the address where we will send the data. This should be same on the receiving side.
RF24 radio(NRF_CE, NRF_CSN);   // nRF24L01 (CE, CSN)




  
OneButton UP(UP_PIN, true); // Setup a new OneButton on pin D3. 
OneButton DOWN(DOWN_PIN, true); // Setup a new OneButton on pin D4.
OneButton OK(OK_PIN, true); // Setup a new OneButton on pin D3. 
OneButton CANCEL(CANCEL_PIN, true); // Setup a new OneButton on pin D4. 

OneButton CH1_LEFT_TRIM(CH1_LEFT_TRIM_PIN, true);
OneButton CH1_RIGHT_TRIM(CH1_RIGHT_TRIM_PIN, true);

OneButton CH2_UPTRIM(CH2_UPTRIM_PIN, true);
OneButton CH2_DOWNTRIM(CH2_DOWNTRIM_PIN, true);
  
OneButton CH3_UPTRIM(CH3_UPTRIM_PIN, true);
OneButton CH3_DOWNTRIM(CH3_DOWNTRIM_PIN, true);

OneButton CH4_LEFT_TRIM(CH4_LEFT_TRIM_PIN, true);
OneButton CH4_RIGHT_TRIM(CH4_RIGHT_TRIM_PIN, true);

int buttonDelay = 100;

int line = 0;

String Model1_Sel = "(*)"; 
String Model2_Sel = "";
String Model3_Sel = "";
String Model4_Sel = "";
String Model5_Sel = "";

int CH1_MIN = 0;
int CH1_MAX = 255;

int CH2_MIN = 0;
int CH2_MAX = 255;

int CH3_MIN = 0;
int CH3_MAX = 255;

int CH4_MIN = 0;
int CH4_MAX = 255;

int CH5_MIN = 0;
int CH5_MAX = 255;

int CH6_MIN = 0;
int CH6_MAX = 255;

int NRF_CH1_value = analogRead(CH1_PIN); //aileron
int NRF_CH2_value = analogRead(CH2_PIN); //elevator
int NRF_CH3_value = analogRead(CH3_PIN); //throttle
int NRF_CH4_value = analogRead(CH4_PIN); //rudder


int THROTTLE_MODE_VALUE = 0; //0 if  non centered, 127 if centered


int CH1_trimMove = 94;
int CH2_trimMove = 32;
int CH3_trimMove = 32;
int CH4_trimMove = 34;

int BATT_value = analogRead(BATT_VOLT);

int CH1_value = analogRead(CH1_PIN);
int CH2_value = analogRead(CH2_PIN);
int CH3_value = analogRead(CH3_PIN);
int CH4_value = analogRead(CH4_PIN);
int CH5_value;
int CH6_value;

int VRA_value = analogRead(VRA_PIN);
int VRB_value = analogRead(VRB_PIN);

int SWA_value = analogRead(SWA_PIN);
int SWB_value = analogRead(SWB_PIN);
int SWC_value = analogRead(SWC_PIN);
int SWD_value = analogRead(SWD_PIN);

bool upPressed = (digitalRead(UP_PIN) == LOW);
bool downPressed = (digitalRead(DOWN_PIN) == LOW);
bool okPressed = (digitalRead(OK_PIN) == LOW);
bool cancelPressed = (digitalRead(CANCEL_PIN) == LOW);

bool CH1_LEFT_TRIM_P = (digitalRead(CH1_LEFT_TRIM_PIN) == LOW);
bool CH1_RIGHT_TRIM_P = (digitalRead(CH1_RIGHT_TRIM_PIN) == LOW);

bool CH2_UPTRIM_P = (digitalRead(CH2_UPTRIM_PIN) == LOW);
bool CH2_DOWNTRIM_P = (digitalRead(CH2_DOWNTRIM_PIN) == LOW);

bool CH3_UPTRIM_P = (digitalRead(CH3_UPTRIM_PIN) == LOW);
bool CH3_DOWNTRIM_P = (digitalRead(CH3_DOWNTRIM_PIN) == LOW);

bool CH4_LEFT_TRIM_P = (digitalRead(CH4_LEFT_TRIM_PIN) == LOW);
bool CH4_RIGHT_TRIM_P = (digitalRead(CH4_RIGHT_TRIM_PIN) == LOW);


void upClick() { Serial.println("UP Button clicked."); }
void downClick() { Serial.println("DOWN Button clicked."); }
void okClick() { Serial.println("OK Button clicked."); }
void cancelClick() { Serial.println("CANCEL Button clicked."); }


void CH1_left_trim_click() { Serial.println("CH1 left trim clicked."); }
void CH1_right_trim_click() { Serial.println("CH1 right trim clicked."); }

void CH2_uptrim_click() { Serial.println("CH2 up trim clicked."); }
void CH2_downtrim_click() { Serial.println("CH2 down trim clicked."); }

void CH3_uptrim_click() { Serial.println("CH3 up trim clicked."); }
void CH3_downtrim_click() { Serial.println("CH3 down trim clicked."); }

void CH4_left_trim_click() { Serial.println("CH4 left trim clicked."); }
void CH4_right_trim_click() { Serial.println("CH4 right trim clicked."); }


void refresh()
{
  display.display();
  delay(00);
  display.clearDisplay();
}

/*-----------------------------------WARNING----------------------------------------*/
void warning()
{

  bool upPressed = (digitalRead(UP_PIN) == LOW);
  bool downPressed = (digitalRead(DOWN_PIN) == LOW);
  bool okPressed = (digitalRead(OK_PIN) == LOW);
  bool cancelPressed = (digitalRead(CANCEL_PIN) == LOW);

  int CH3_value = analogRead(CH3_PIN);
        
  int SWA_value = analogRead(SWA_PIN);
  int SWB_value = analogRead(SWB_PIN);
  int SWC_value = analogRead(SWC_PIN);
  int SWD_value = analogRead(SWD_PIN);


  if (CH3_value > 30)
  { 
    while(CH3_value > 30)
    {
      bool upPressed = (digitalRead(UP_PIN) == LOW);
      bool downPressed = (digitalRead(DOWN_PIN) == LOW);
      bool okPressed = (digitalRead(OK_PIN) == LOW);
      bool cancelPressed = (digitalRead(CANCEL_PIN) == LOW);

      int CH3_value = analogRead(CH3_PIN);
        
      int SWA_value = analogRead(SWA_PIN);
      int SWB_value = analogRead(SWB_PIN);
      int SWC_value = analogRead(SWC_PIN);
      int SWD_value = analogRead(SWD_PIN);

      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(5,13);  display.print("  THROTTLE WARNING");
      display.setCursor(5,22);  display.print("  Throttle not idle");
      display.setCursor(5,42);  display.print("  Press any key to ");
      display.setCursor(5,52);  display.print("  skip");
      refresh();
      
      if (okPressed || upPressed || downPressed || cancelPressed || CH3_value <= 30)
      {
        delay(buttonDelay);
        break;
      }
    }
  }

  if (SWA_value != 0)
  {
    while(SWA_value != 0)
    {
      bool upPressed = (digitalRead(UP_PIN) == LOW);
      bool downPressed = (digitalRead(DOWN_PIN) == LOW);
      bool okPressed = (digitalRead(OK_PIN) == LOW);
      bool cancelPressed = (digitalRead(CANCEL_PIN) == LOW);

      int CH3_value = analogRead(CH3_PIN);
        
      int SWA_value = analogRead(SWA_PIN);
      int SWB_value = analogRead(SWB_PIN);
      int SWC_value = analogRead(SWC_PIN);
      int SWD_value = analogRead(SWD_PIN);

      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(5,13);  display.print("  SWITCH WARNING");
      display.setCursor(5,22);  display.print("  SA ->");
      display.setCursor(5,42);  display.print("  Press any key to ");
      display.setCursor(5,52);  display.print("  skip");
      refresh();
      
      if (okPressed || upPressed || downPressed || cancelPressed || SWA_value == 0)
      {
        delay(buttonDelay);
        break;
      }
    }
  }

  if (SWD_value != 0)
  {
    while(SWD_value != 0)
    {
      bool upPressed = (digitalRead(UP_PIN) == LOW);
      bool downPressed = (digitalRead(DOWN_PIN) == LOW);
      bool okPressed = (digitalRead(OK_PIN) == LOW);
      bool cancelPressed = (digitalRead(CANCEL_PIN) == LOW);

      int CH3_value = analogRead(CH3_PIN);
        
      int SWA_value = analogRead(SWA_PIN);
      int SWB_value = analogRead(SWB_PIN);
      int SWC_value = analogRead(SWC_PIN);
      int SWD_value = analogRead(SWD_PIN);

      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(5,13);  display.print("  SWITCH WARNING");
      display.setCursor(5,22);  display.print("  SD ->");
      display.setCursor(5,42);  display.print("  Press any key to ");
      display.setCursor(5,52);  display.print("  skip");
      refresh();
      
      if (okPressed || upPressed || downPressed || cancelPressed || SWD_value == 0)
      {
        delay(buttonDelay);
        break;
      }
    }
  }


}

/*----------------------------------END OF WARNING-------------------------------*/


/*---------------------------------INTRO-------------------------------------*/
void intro()
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(5,23);  display.print("  RC Transmitter");
  display.setCursor(5,32);  display.print("  By Laviscannon");
  refresh();
}

/*---------------------------END OF INTRO------------------------------------*/



/*-------------------------BUZZER----------------------------------------*/

void movementBuzz() {tone(BUZZ_PIN, 2000, 1); }
void cancelBuzz(){ tone(BUZZ_PIN, 3000, 1); }
void trimBuzz() {tone(BUZZ_PIN, 2500,1);}
void trimCenterBuzz() {tone(BUZZ_PIN, 3000,1);}

/*----------------------------END OF BUZZER------------------------------*/



/*-------------------------------MENU-----------------------------------------*/

void menuHeader()
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(32,0);  display.print("MENU");
  display.drawLine (0,9,128,9, WHITE);
}
  
void lineFunction()
{
  menuHeader();
  display.setCursor(0,11);  display.print (">Functions Setup");
  display.setCursor(0,20);  display.print (" System Setup");
  refresh();
}
  
void lineSystem()
{
  menuHeader();
  display.setCursor(0,11);  display.print (" Functions Setup");
  display.setCursor(0,20);  display.print (">System Setup");
  refresh();
}
  
void updateMenu(int x)
{
  switch(x)
  {
    case -1:
    lineSystem();
    line = 1;
    break;

    case 0:
    lineFunction();
    break;

    case 1:
    lineSystem();
    break;

    case 2:
    lineFunction();
    line = 0;
  }
}




/*--------------------------------------END OF SETTINGS MENU--------------------------------*/




/*---------------------------FUNCTION MENU----------------------------------------*/

void functionHeader()
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(32,0);  display.print("FUNCTION");
  display.drawLine (0,9,128,9, WHITE);
}
  
void lineReverse()
{
  functionHeader();
  display.setCursor(0,11);  display.print (">Reverse");
  display.setCursor(0,20);  display.print (" End points");
  display.setCursor(0,29);  display.print (" Subtrim");
  display.setCursor(0,38);  display.print (" Rate/Exp.");
  refresh();
}
  
void lineEndpoints()
{
  functionHeader();
  display.setCursor(0,11);  display.print (" Reverse");
  display.setCursor(0,20);  display.print (">End points");
  display.setCursor(0,29);  display.print (" Subtrim");
  display.setCursor(0,38);  display.print (" Rate/Exp.");
  refresh();
}
  
void lineSubtrim()
{
  functionHeader();
  display.setCursor(0,11);  display.print (" Reverse");
  display.setCursor(0,20);  display.print (" End points");
  display.setCursor(0,29);  display.print (">Subtrim");
  display.setCursor(0,38);  display.print (" Rate/Exp.");
  refresh();
}
  

void lineRate()
{
  functionHeader();
  display.setCursor(0,11);  display.print (" Reverse");
  display.setCursor(0,20);  display.print (" End points");
  display.setCursor(0,29);  display.print (" Subtrim");
  display.setCursor(0,38);  display.print (">Rate/Exp.");
  refresh();
}
  
void lineThrottle()
{
  functionHeader();
  display.setCursor(0,11);  display.print (">Throttle curve");
  display.setCursor(0,20);  display.print (" Aux. channels");
  display.setCursor(0,29);  display.print (" Mix");
  display.setCursor(0,38);  display.print (" Failsafe");
  refresh();
}
  
void lineAux()
{
  functionHeader();
  display.setCursor(0,11);  display.print (" Throttle curve");
  display.setCursor(0,20);  display.print (">Aux. channels");
  display.setCursor(0,29);  display.print (" Mix");
  display.setCursor(0,38);  display.print (" Failsafe");
  refresh();
}
  
void lineMix()
{
  functionHeader();
  display.setCursor(0,11);  display.print (" Throttle curve");
  display.setCursor(0,20);  display.print (" Aux. channels");
  display.setCursor(0,29);  display.print (">Mix");
  display.setCursor(0,38);  display.print (" Failsafe");
  refresh();
}
  
void lineFailsafe()
{
  functionHeader();
  display.setCursor(0,11);  display.print (" Throttle curve");
  display.setCursor(0,20);  display.print (" Aux. channels");
  display.setCursor(0,29);  display.print (" Mix");
  display.setCursor(0,38);  display.print (">Failsafe");
  refresh();
}
  
void updateFunctionMenu(int x)
{
  switch(x)
  {
    case -1:
    lineFailsafe();
    line = 8;
    break;

    case 0:
    lineReverse();
    break;

    case 1:
    lineEndpoints();
    break;

    case 2:
    lineSubtrim();
    break;

    case 3:
    lineRate();
    break;

    case 4:
    lineThrottle();
    break;

    case 5:
    lineAux();
    break;

    case 6:
    lineMix();
    break;

    case 7:
    lineFailsafe();
    break;

    case 8:
    lineReverse();
    line = 0;
  }
}
  
void navigateFunctionMenu()
{
  while(!cancelPressed)
  {
    UP.tick();
    DOWN.tick();
    OK.tick();
    CANCEL.tick();
      
    bool upPressed = (digitalRead(UP_PIN) == LOW);
    bool downPressed = (digitalRead(DOWN_PIN) == LOW);
    bool okPressed = (digitalRead(OK_PIN) == LOW);
    bool cancelPressed = (digitalRead(CANCEL_PIN) == LOW);

    if (okPressed)
    {
      delay(buttonDelay);

      movementBuzz();

      if (line == 0)
      {
        updateReverse(0);
        line = 0;
        navigateReverseMenu();
      }

      if (line == 1)
      {
        updateEndPoints(0);
        line = 0;
        navigateEndPointsMenu();
      }

      if (line == 2)
      {
        updateSubtrim(0);
        line = 0;
        navigateSubtrimMenu();
      }

      if (line == 3)
      {
        updateRate(0);
        line = 0;
        navigateRateMenu();
      }

      if (line == 4)
      {
        updateCurve(0);
        line = 0;
        navigateCurveMenu();
      }

      if (line == 5)
      {
        updateAux(0);
        line = 0;
        navigateAuxMenu();
      }

      if (line == 6)
      {
        updateMix(0);
        line = 0;
        navigateMixMenu();
      }

      if (line == 7)
      {
        updateFailsafe(0);
        line = 0;
        navigateFailsafeMenu();
      }


    }
      
    if (downPressed)
    {
      delay(buttonDelay);

      line++;
      movementBuzz();
      updateFunctionMenu(line);
    }
      
    if (upPressed)
    {
      delay(buttonDelay);

      line--;
      movementBuzz();
      updateFunctionMenu(line);
    }
      
    if (cancelPressed)
    {
      delay(buttonDelay);

      cancelBuzz();
      break;
    }
  }
  
  line = 0;
  updateMenu(line);
  
}

/*---------------------------------------END OF FUNCTION MENU----------------------------------------*/



/*------------------------------------------SYSTEM MENU-----------------------------------------------*/


void systemHeader()
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(32,0);  display.print("SYSTEM");
  display.drawLine (0,9,128,9, WHITE);
}
  
void lineRX()
{
  systemHeader();
  display.setCursor(0,11);  display.print (">RX bind");
  display.setCursor(0,20);  display.print (" Models");
  display.setCursor(0,29);  display.print (" Output mode");
  display.setCursor(0,38);  display.print (" Sticks mode");
  display.setCursor(0,47);  display.print (" Throttle mode");
  refresh();
}
  
void lineModels()
{
  systemHeader();
  display.setCursor(0,11);  display.print (" RX bind");
  display.setCursor(0,20);  display.print (">Models");
  display.setCursor(0,29);  display.print (" Output mode");
  display.setCursor(0,38);  display.print (" Sticks mode");
  display.setCursor(0,47);  display.print (" Throttle mode");
  refresh();
}
  
void lineOutput()
{
  systemHeader();
  display.setCursor(0,11);  display.print (" RX bind");
  display.setCursor(0,20);  display.print (" Models");
  display.setCursor(0,29);  display.print (">Output mode");
  display.setCursor(0,38);  display.print (" Sticks mode");
  display.setCursor(0,47);  display.print (" Throttle mode");
  refresh();
}
  
void lineSticks()
{
  systemHeader();
  display.setCursor(0,11);  display.print (" RX bind");
  display.setCursor(0,20);  display.print (" Models");
  display.setCursor(0,29);  display.print (" Output mode");
  display.setCursor(0,38);  display.print (">Sticks mode");
  display.setCursor(0,47);  display.print (" Throttle mode");
  refresh();
}

void lineThrottleMode()
{
  systemHeader();
  display.setCursor(0,11);  display.print (" RX bind");
  display.setCursor(0,20);  display.print (" Models");
  display.setCursor(0,29);  display.print (" Output mode");
  display.setCursor(0,38);  display.print (" Sticks mode");
  display.setCursor(0,47);  display.print (">Throttle mode");
  refresh();
}
  
void lineSticksAdj()
{
  systemHeader();
  display.setCursor(0,11);  display.print (">Sticks adjust");
  display.setCursor(0,20);  display.print (" Bri./Sound");
  display.setCursor(0,29);  display.print (" Factory reset");
  display.setCursor(0,38);  display.print (" Firmware update");
  display.setCursor(0,47);  display.print (" About Transmitter");
  refresh();
}
  
void lineBri()
{
  systemHeader();
  display.setCursor(0,11);  display.print (" Sticks adjust");
  display.setCursor(0,20);  display.print (">Bri./Sound");
  display.setCursor(0,29);  display.print (" Factory reset");
  display.setCursor(0,38);  display.print (" Firmware update");
  display.setCursor(0,47);  display.print (" About Transmitter");
  refresh();
}
  
void lineFactory()
{
  systemHeader();
  display.setCursor(0,11);  display.print (" Sticks adjust");
  display.setCursor(0,20);  display.print (" Bri./Sound");
  display.setCursor(0,29);  display.print (">Factory reset");
  display.setCursor(0,38);  display.print (" Firmware update");
  display.setCursor(0,47);  display.print (" About Transmitter");
  refresh();
}
  
void lineFirmware()
{
  systemHeader();
  display.setCursor(0,11);  display.print (" Sticks adjust");
  display.setCursor(0,20);  display.print (" Bri./Sound");
  display.setCursor(0,29);  display.print (" Factory reset");
  display.setCursor(0,38);  display.print (">Firmware update");
  display.setCursor(0,47);  display.print (" About Transmitter");
  refresh();
}

  
void lineAbout()
{
  systemHeader();
  display.setCursor(0,11);  display.print (" Sticks adjust");
  display.setCursor(0,20);  display.print (" Bri./Sound");
  display.setCursor(0,29);  display.print (" Factory reset");
  display.setCursor(0,38);  display.print (" Firmware update");
  display.setCursor(0,47);  display.print (">About Tranmsitter");
  refresh();
}



  
void updateSystemMenu(int x)
{
  switch(x)
  {
    case -1:
    lineAbout();
    line = 9;
    break;

    case 0:
    lineRX();
    break;

    case 1:
    lineModels();
    break;

    case 2:
    lineOutput();
    break;

    case 3:
    lineSticks();
    break;

    case 4:
    lineThrottleMode();
    break;

    case 5:
    lineSticksAdj();
    break;

    case 6:
    lineBri();
    break;

    case 7:
    lineFactory();
    break;

    case 8:
    lineFirmware();
    break;

    case 9:
    lineAbout();
    break;

    case 10:
    lineRX();
    line = 0;
  }
}
  
void navigateSystemMenu()
{
  while(!cancelPressed)
  {
    UP.tick();
    DOWN.tick();
    OK.tick();
    CANCEL.tick();
      
    bool upPressed = (digitalRead(UP_PIN) == LOW);
    bool downPressed = (digitalRead(DOWN_PIN) == LOW);
    bool okPressed = (digitalRead(OK_PIN) == LOW);
    bool cancelPressed = (digitalRead(CANCEL_PIN) == LOW);

    if (okPressed)
    {
      delay(buttonDelay);
      movementBuzz();

      if (line == 0)
      {
        updateBind();
        line = 0;
        navigateBindMenu();
      }

      if (line == 1)
      {
        updateModels(0);
        line = 0;
        navigateModelsMenu();
      }

      if (line == 2)
      {
        updateOutput(0);
        line = 0;
        navigateOutputMenu();
      }

      if (line == 3)
      {
        updateSticksMode(0);
        line = 0;
        navigateSticksModeMenu();
      }

      if (line == 4)
      {
        updateThrottle(0);
        line = 0;
        navigateThrottleMenu();
      }

      if (line == 5)
      {
        updateAdjust(0);
        line = 0;
        navigateAdjustMenu();
      }

      if (line == 6)
      {
        updateSound(0);
        line = 0;
        navigateSoundMenu();
      }

      if (line == 7)
      {
        updateFactory(0);
        line = 0;
        navigateFactoryMenu();
      }

      if (line == 8)
      {
        updateFirm(0);
        line = 0;
        navigateFirmMenu();
      }

      if (line == 9)
      {
        updateAbout();
        line = 0;
        navigateAboutMenu();
      }

    }
      
    if (downPressed)
    {
      delay(buttonDelay);

      line++;
      movementBuzz();
      updateSystemMenu(line);
    }
      
    if (upPressed)
    {
      delay(buttonDelay);

      line--;
      movementBuzz();
      updateSystemMenu(line);
    }
      
    if (cancelPressed)
    {
      delay(buttonDelay);

      cancelBuzz();
      break;
    }
  }

  line = 1;
  updateMenu(line);
  
}

/*------------------------------------------END OF SYSTEM MENU-----------------------------------------------*/

/*-----------------------------------------NAVIGATE SETTINGS-------------------------------------------------*/

void navigateSettings()
{
  while (!cancelPressed)
  {
    // keep watching the push buttons:

    UP.tick();
    DOWN.tick();
    OK.tick();
    CANCEL.tick();

    bool upPressed = (digitalRead(UP_PIN) == LOW);
    bool downPressed = (digitalRead(DOWN_PIN) == LOW);
    bool okPressed = (digitalRead(OK_PIN) == LOW);
    bool cancelPressed = (digitalRead(CANCEL_PIN) == LOW);
      
    if (okPressed)
    {
      delay(buttonDelay);
      movementBuzz();

      if (line == 0)
      {
        updateFunctionMenu(0);
        navigateFunctionMenu();
      }
        
      if (line == 1)
      {
        updateSystemMenu(0);
        navigateSystemMenu();
      }
    }
      
    if (downPressed)
    {
      delay(buttonDelay);

      line++;
      movementBuzz();
      updateMenu(line);
    }
      
    if (upPressed)
    {
      delay(buttonDelay);

      line--;
      movementBuzz();
      updateMenu(line);
    }

    if (cancelPressed)
    {
      delay(buttonDelay);

      cancelBuzz();
      break;
    }
  }

  line = 0;


}

/*---------------------------------------------END OF NAVIGATE SETTINGS---------------------------------------*/



/*-----------------------------------------MAIN MENU-----------------------------------------------------------*/

void mainMenu()
{
  UP.tick();
  DOWN.tick();
  OK.tick();
  CANCEL.tick();

  CH1_LEFT_TRIM.tick();
  CH1_RIGHT_TRIM.tick();

  CH2_UPTRIM.tick();
  CH2_DOWNTRIM.tick();
  
  CH3_UPTRIM.tick();
  CH3_DOWNTRIM.tick();

  CH4_LEFT_TRIM.tick();
  CH4_RIGHT_TRIM.tick();

  bool upPressed = (digitalRead(UP_PIN) == LOW);
  bool downPressed = (digitalRead(DOWN_PIN) == LOW);
  bool okPressed = (digitalRead(OK_PIN) == LOW);
  bool cancelPressed = (digitalRead(CANCEL_PIN) == LOW);

  bool CH1_LEFT_TRIM_P = (digitalRead(CH1_LEFT_TRIM_PIN) == LOW);
  bool CH1_RIGHT_TRIM_P = (digitalRead(CH1_RIGHT_TRIM_PIN) == LOW);

  bool CH2_UPTRIM_P = (digitalRead(CH2_UPTRIM_PIN) == LOW);
  bool CH2_DOWNTRIM_P = (digitalRead(CH2_DOWNTRIM_PIN) == LOW);

  bool CH3_UPTRIM_P = (digitalRead(CH3_UPTRIM_PIN) == LOW);
  bool CH3_DOWNTRIM_P = (digitalRead(CH3_DOWNTRIM_PIN) == LOW);

  bool CH4_LEFT_TRIM_P = (digitalRead(CH4_LEFT_TRIM_PIN) == LOW);
  bool CH4_RIGHT_TRIM_P = (digitalRead(CH4_RIGHT_TRIM_PIN) == LOW);

  int BATT_value = analogRead(BATT_VOLT);

  int CH1_value = analogRead(CH1_PIN);
  int CH2_value = analogRead(CH2_PIN);
  int CH3_value = analogRead(CH3_PIN);
  int CH4_value = analogRead(CH4_PIN);
  int CH5_value;
  int CH6_value;

  int SWA_value = analogRead(SWA_PIN);
  int SWB_value = analogRead(SWB_PIN);
  int SWC_value = analogRead(SWC_PIN);
  int SWD_value = analogRead(SWD_PIN);

  int VRA_value = analogRead(VRA_PIN);
  int VRB_value = analogRead(VRB_PIN);


  //Serial.println("CH1: "+String(CH1_value)+" CH2: "+String(CH2_value)+" CH3: "+ String(CH3_value)+" CH4: "+String(CH4_value));
  //Serial.println("SWA: " + String(SWA_value) + " SWD: " + String(SWD_value));

  


 
  //Display Model
  if (Model1_Sel == "(*)")
  {
    display.setCursor(10,8);  display.print ("Model 1");
  }
  else if (Model2_Sel == "(*)")
  {
    display.setCursor(10,8);  display.print ("Model 2");
  }
  else if (Model3_Sel == "(*)")
  {
    display.setCursor(10,8);  display.print ("Model 3");
  }
  else if (Model4_Sel == "(*)")
  {
    display.setCursor(10,8);  display.print ("Model 4");
  }
  else if (Model5_Sel == "(*)")
  {
    display.setCursor(10,8);  display.print ("Model 5");
  }

  
  //Display volt

  float vin = ((BATT_value * 5.0) / 1024.0)/(7500.0/(30000.0 + 7500.0));
  display.setCursor(10,17);  display.print (String(vin) + "v");

  


  //Display switches
  if (SWA_value == 0)
  {
    display.setCursor(57,8);  display.print ("SWA <"); 
  }
  if (SWA_value == 1023)
  {
    display.setCursor(57,8);  display.print ("SWA >");
  }


  display.setCursor(90,8);  display.print ("SWB->");  //∨ ∧

  display.setCursor(57,16);  display.print ("SWC->");
  

  if (SWD_value == 0)
  {
    display.setCursor(90,16);  display.print ("SWD <");
  }
  if (SWD_value == 1023)
  {
    display.setCursor(90,16);  display.print ("SWD >");
  }

  //Display VrA and VrB
  int moveVRA = map(VRA_value, 0, 1023, 1, 32);
  int moveVRB = map(VRB_value, 0, 1023, 1, 32);
  display.fillRect(60,29,4,moveVRA,WHITE);
  display.fillRect(65,29,4,moveVRB,WHITE);

  //Display left stick
  int moveCH3 = map(CH3_value, 0, 1023, 51, 31);
  int moveCH4 = map(CH4_value, 0, 1023, 36, 56);
  display.drawRect(34,29,25,25,WHITE); //left square
  display.drawCircle(46, 41, 1, WHITE); //left center circle
  display.drawCircle(moveCH4, moveCH3, 2, WHITE); //left movement circle

  //Display right stick 
  int moveCH1 = map(CH1_value, 0, 1023, 72, 92);
  int moveCH2 = map(CH2_value, 0, 1023, 51, 31);
  display.drawRect(70,29,25,25,WHITE); //right square
  display.drawCircle(82, 41, 1, WHITE); //right center circle
  display.drawCircle(moveCH1, moveCH2, 2, WHITE); //left movement circle


  //CH1 Aileron Trims
  //CH1_trimMove = 94;

  display.drawLine(94,58,94,58, WHITE); //Center
  display.drawLine(CH1_trimMove,58,CH1_trimMove,58, WHITE); //Moving trim
  display.drawRect(70,56,50,5,WHITE);


  if (CH1_LEFT_TRIM_P)
  {
    CH1_trimMove--;
    if (CH1_trimMove != 94)
    {
      trimBuzz();
    }
    else
    {
      trimCenterBuzz();
    }
  }
    
  if (CH1_RIGHT_TRIM_P)
  {
    CH1_trimMove++;
    if (CH1_trimMove != 94)
    {
      trimBuzz();
    }
    else
    {
      trimCenterBuzz();
    }
  }

  //CH2 elevator Trims
  //CH2_trimMove = 32;

  display.drawLine(123,32,123,32, WHITE); //Center
  display.drawLine(123,CH2_trimMove,123,CH2_trimMove, WHITE);  //Moving trim
  display.drawRect(121,5,5,56,WHITE);

  if (CH2_UPTRIM_P)
  {
    CH2_trimMove--;
    if (CH2_trimMove != 32)
    {
      trimBuzz();
    }
    else
    {
      trimCenterBuzz();
    }
  }

  if (CH2_DOWNTRIM_P)
  {
    CH2_trimMove++;
    if (CH2_trimMove != 32)
    {
      trimBuzz();
    }
    else
    {
      trimCenterBuzz();
    }
  }


  //CH3 throttle Trims
  //CH3_trimMove = 32;

  display.drawLine(5,32,5,32, WHITE); //Center
  display.drawLine(5,CH3_trimMove,5,CH3_trimMove, WHITE); //Moving trim
  display.drawRect(3,5,5,56,WHITE);

  if (CH3_UPTRIM_P)
  {
    CH3_trimMove--;
    if (CH3_trimMove != 32)
    {
      trimBuzz();
    }
    else
    {
      trimCenterBuzz();
    }
  }

  if (CH3_DOWNTRIM_P)
  {
    CH3_trimMove++;
    if (CH3_trimMove != 32)
    {
      trimBuzz();
    }
    else
    {
      trimCenterBuzz();
    }
  }


  //CH4 rudder Trims
  //CH4_trimMove = 34;

  display.drawLine(34,58,34,58, WHITE); //Center
  display.drawLine(CH4_trimMove,58,CH4_trimMove,58, WHITE); //Moving trim
  display.drawRect(9,56,50,5,WHITE);

  if (CH4_LEFT_TRIM_P)
  {
    CH4_trimMove--;
    if (CH4_trimMove != 34)
    {
      trimBuzz();
    }
    else
    {
      trimCenterBuzz();
    }
  }

  if (CH4_RIGHT_TRIM_P)
  {
    CH4_trimMove++;
    if (CH4_trimMove != 34)
    {
      trimBuzz();
    }
    else
    {
      trimCenterBuzz();
    }
  }

  if (okPressed)
  {
    movementBuzz();
    refresh();
    
    lineFunction();
    navigateSettings();
  }

  if (downPressed || upPressed)
  {
    delay(buttonDelay);
    movementBuzz();
    refresh();

    secondMenu();

  }

  refresh();

  
}

/*------------------------------------END OF MAIN MENU----------------------------------------------------------*/

void secondMenu()
{
  while (!downPressed || !upPressed)
  {
    UP.tick();
    DOWN.tick();
    OK.tick();
    CANCEL.tick();
    
    CH1_LEFT_TRIM.tick();
    CH1_RIGHT_TRIM.tick();
    
    CH2_UPTRIM.tick();
    CH2_DOWNTRIM.tick();
    
    CH3_UPTRIM.tick();
    CH3_DOWNTRIM.tick();
    
    CH4_LEFT_TRIM.tick();
    CH4_RIGHT_TRIM.tick();

    bool upPressed = (digitalRead(UP_PIN) == LOW);
    bool downPressed = (digitalRead(DOWN_PIN) == LOW);
    bool okPressed = (digitalRead(OK_PIN) == LOW);
    bool cancelPressed = (digitalRead(CANCEL_PIN) == LOW);

    bool CH1_LEFT_TRIM_P = (digitalRead(CH1_LEFT_TRIM_PIN) == LOW);
    bool CH1_RIGHT_TRIM_P = (digitalRead(CH1_RIGHT_TRIM_PIN) == LOW);

    bool CH2_UPTRIM_P = (digitalRead(CH2_UPTRIM_PIN) == LOW);
    bool CH2_DOWNTRIM_P = (digitalRead(CH2_DOWNTRIM_PIN) == LOW);

    bool CH3_UPTRIM_P = (digitalRead(CH3_UPTRIM_PIN) == LOW);
    bool CH3_DOWNTRIM_P = (digitalRead(CH3_DOWNTRIM_PIN) == LOW);

    bool CH4_LEFT_TRIM_P = (digitalRead(CH4_LEFT_TRIM_PIN) == LOW);
    bool CH4_RIGHT_TRIM_P = (digitalRead(CH4_RIGHT_TRIM_PIN) == LOW);

    int CH1_value = analogRead(CH1_PIN);
    int CH2_value = analogRead(CH2_PIN);
    int CH3_value = analogRead(CH3_PIN);
    int CH4_value = analogRead(CH4_PIN);

    int VRA_value = analogRead(VRA_PIN);
    int VRB_value = analogRead(VRB_PIN);

    int SWA_value = analogRead(SWA_PIN);
    int SWB_value = analogRead(SWB_PIN);
    int SWC_value = analogRead(SWC_PIN);
    int SWD_value = analogRead(SWD_PIN);


    int moveCH1_UP = map(CH1_value, 512, 0, 35, 13); int drawCH1_UP = map(CH1_value, 512, 0, 1, 25);
    int moveCH1_DOWN = map(CH1_value, 512, 1023, 0, 26);

    int moveCH2_UP = map(CH2_value, 512, 0, 35, 13); int drawCH2_UP = map(CH2_value, 512, 0, 1, 25);
    int moveCH2_DOWN = map(CH2_value, 512, 1023, 1, 26); 

    int moveCH3_UP = map(CH3_value, 512, 0, 35, 13); int drawCH3_UP = map(CH3_value, 512, 0, 1, 25);
    int moveCH3_DOWN = map(CH3_value, 512, 1023, 1, 26); 

    int moveCH4_UP = map(CH4_value, 512, 0, 35, 13); int drawCH4_UP = map(CH4_value, 512, 0, 1, 25);
    int moveCH4_DOWN = map(CH4_value, 512, 1023, 1, 26);



    display.setCursor(4,4);  display.print ("CH1");
    display.drawRect(5,12,15,50,WHITE);
    display.fillRect(6,moveCH1_UP,13,drawCH1_UP,WHITE); //UP
    display.fillRect(6,35,13,moveCH1_DOWN,WHITE);  //DOWN


    display.setCursor(23,4);  display.print ("CH2");
    display.drawRect(25,12,15,50,WHITE);
    display.fillRect(26,moveCH2_UP,13,drawCH2_UP,WHITE); //UP
    display.fillRect(26,35,13,moveCH2_DOWN,WHITE); //DOWN

    display.setCursor(44,4);  display.print ("CH3");
    display.drawRect(45,12,15,50,WHITE); 
    display.fillRect(46,moveCH3_UP,13,drawCH3_UP,WHITE);
    display.fillRect(46,35,13,moveCH3_DOWN,WHITE);

    display.setCursor(65,4);  display.print ("CH4");
    display.drawRect(65,12,15,50,WHITE);
    display.fillRect(66,moveCH4_UP,13,drawCH4_UP,WHITE);
    display.fillRect(66,35,13,moveCH4_DOWN,WHITE);

    display.setCursor(85,4);  display.print ("CH5");
    display.drawRect(85,12,15,50,WHITE);
    display.fillRect(86,35,13,1,WHITE);

    display.setCursor(105,4);  display.print ("CH6");
    display.drawRect(105,12,15,50,WHITE);
    display.fillRect(106,35,13,1,WHITE);

    refresh();

    if (downPressed || upPressed)
    {
      delay(buttonDelay);
      movementBuzz();
      break;
    }
  }


}


struct Data_to_be_sent 
{
  byte ch1;
  byte ch2;
  byte ch3;
  byte ch4;
  byte ch5;
  byte ch6;
};

Data_to_be_sent sent_data;






void setup() 
{

  Serial.begin(9600);
  Serial.println("Starting Buttons...");

  // linking button functions.
  UP.attachClick(upClick);
  DOWN.attachClick(downClick);
  OK.attachClick(okClick);
  CANCEL.attachClick(cancelClick);

  CH1_LEFT_TRIM.attachClick(CH1_left_trim_click);
  CH1_RIGHT_TRIM.attachClick(CH1_right_trim_click);

  CH2_UPTRIM.attachClick(CH2_uptrim_click);
  CH2_DOWNTRIM.attachClick(CH2_downtrim_click);
  
  CH3_UPTRIM.attachClick(CH3_uptrim_click);
  CH3_DOWNTRIM.attachClick(CH3_downtrim_click);

  CH4_LEFT_TRIM.attachClick(CH4_left_trim_click);
  CH4_RIGHT_TRIM.attachClick(CH4_right_trim_click);

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3C (for the 128x64)

  //display.clearDisplay(); //prevents adafruit logo from appearing



  //Load function and system settings
  warning();
  intro();
  delay(3000);
  tone(BUZZ_PIN, 1000, 25);

  //loadModels();
  //loadSticks();
  //loadThrottle();  

  //NRF
  radio.begin(); //Starting the wireless communication
  radio.setAutoAck(false); //Enable or disable the auto-acknowledgement feature for all pipes. Auto-acknowledgement responds to every recieved payload with an empty ACK packet. These ACK packets get sent from the receiving radio back to the transmitting radio.
  radio.setDataRate(RF24_250KBPS); //speed  RF24_250KBPS for 250kbs, RF24_1MBPS for 1Mbps, or RF24_2MBPS for 2Mbps
  radio.openWritingPipe(address); //Setting the address where we will send the data
  //radio.setPALevel(RF24_PA_MIN);       // Power level minimum - radios are close together
  //radio.stopListening();          //This sets the module as transmitter

  
  sent_data.ch1 = 127;
  sent_data.ch2 = 127;
  sent_data.ch3 = THROTTLE_MODE_VALUE;
  sent_data.ch4 = 127;
  sent_data.ch5 = 0;
  sent_data.ch6 = 0;


  //lineFunction();
  //navigateSettings();
  
  mainMenu();

  //secondMenu();
}

void loop() 
{
  
  UP.tick();
  DOWN.tick();
  OK.tick();
  CANCEL.tick();

  /*
  CH1_LEFT_TRIM.tick();
  CH1_RIGHT_TRIM.tick();

  CH2_UPTRIM.tick();
  CH2_DOWNTRIM.tick();
  
  CH3_UPTRIM.tick();
  CH3_DOWNTRIM.tick();

  CH4_LEFT_TRIM.tick();
  CH4_RIGHT_TRIM.tick();
  */
  
  /*
  bool upPressed = (digitalRead(UP_PIN) == LOW);
  bool downPressed = (digitalRead(DOWN_PIN) == LOW);
  bool okPressed = (digitalRead(OK_PIN) == LOW);
  bool cancelPressed = (digitalRead(CANCEL_PIN) == LOW);

  
  bool CH1_LEFT_TRIM_P = (digitalRead(CH1_LEFT_TRIM_PIN) == LOW);
  bool CH1_RIGHT_TRIM_P = (digitalRead(CH1_RIGHT_TRIM_PIN) == LOW);

  bool CH2_UPTRIM_P = (digitalRead(CH2_UPTRIM_PIN) == LOW);
  bool CH2_DOWNTRIM_P = (digitalRead(CH2_DOWNTRIM_PIN) == LOW);

  bool CH3_UPTRIM_P = (digitalRead(CH3_UPTRIM_PIN) == LOW);
  bool CH3_DOWNTRIM_P = (digitalRead(CH3_DOWNTRIM_PIN) == LOW);

  bool CH4_LEFT_TRIM_P = (digitalRead(CH4_LEFT_TRIM_PIN) == LOW);
  bool CH4_RIGHT_TRIM_P = (digitalRead(CH4_RIGHT_TRIM_PIN) == LOW);

  int CH1_value = analogRead(CH1_PIN);
  int CH2_value = analogRead(CH2_PIN);
  int CH3_value = analogRead(CH3_PIN);
  int CH4_value = analogRead(CH4_PIN);

  int VRA_value = analogRead(VRA_PIN);
  int VRB_value = analogRead(VRB_PIN);

  int SWA_value = analogRead(SWA_PIN);
  int SWB_value = analogRead(SWB_PIN);
  int SWC_value = analogRead(SWC_PIN);
  int SWD_value = analogRead(SWD_PIN);

  */

  
  int NRF_CH1_value = analogRead(VRA_PIN); //aileron
  int NRF_CH2_value = analogRead(CH2_PIN); //elevator
  int NRF_CH3_value = analogRead(CH3_PIN); //throttle
  int NRF_CH4_value = analogRead(CH4_PIN); //rudder


  
  
  //Serial.println("CH1: " + String(CH1_value) + " CH2: " + String(CH2_value) + " CH3: " + String(CH3_value) + " CH4: " + String(CH4_value));

  sent_data.ch1 = map(NRF_CH1_value, 0, 1024, CH1_MIN, CH2_MAX);  //CH Min = 0, CH Max = 255
  sent_data.ch2 = map(NRF_CH2_value, 0, 1024, CH2_MIN, CH2_MAX);
  sent_data.ch3 = map(NRF_CH3_value, 0, 1024, CH3_MIN, CH3_MAX);
  sent_data.ch4 = map(NRF_CH4_value, 0, 1024, CH4_MIN, CH4_MAX);
  sent_data.ch5 = map(CH5_value, 0, 1024, CH5_MIN, CH5_MAX);
  sent_data.ch6 = map(CH6_value, 0, 1024, CH6_MIN, CH6_MAX);

  Serial.println(sent_data.ch1);

  radio.write(&sent_data, sizeof(Data_to_be_sent));


  mainMenu();
  //secondMenu();



  //delay(1);





  
}
