String Throttle1_Sel = "(*)";
String Throttle2_Sel = "";

int THROTTLE_SAVE = 1; //1 is non centering

byte SETTINGS_THROTTLE_MODE_SEL_EEPROM;

void throttleModeHeader()
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(32,0);  display.print("THROTTLE MODE");
  display.drawLine (0,9,128,9, WHITE);
}

void throttleLine1()
{
  throttleModeHeader();
  display.setCursor(0,11);  display.print (">Non Centering " + Throttle1_Sel);
  display.setCursor(0,20);  display.print (" Self Centering " + Throttle2_Sel);
  refresh();
}

void throttleLine2()
{
  throttleModeHeader();
  display.setCursor(0,11);  display.print (" Non Centering " + Throttle1_Sel);
  display.setCursor(0,20);  display.print (">Self Centering " + Throttle2_Sel);
  refresh();
}

void updateThrottle(int x)
{
  switch(x)
  {
    case -1:
    throttleLine2();
    line = 1;
    break;

    case 0:
    throttleLine1();
    break;

    case 1:
    throttleLine2();
    break;

    case 2:
    throttleLine1();
    line = 0;
  }
}

void navigateThrottleMenu()
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
      setThrottle();
    }
      
    if (downPressed)
    {
      delay(buttonDelay);

      line++;
      movementBuzz();
      updateThrottle(line);
    }
      
    if (upPressed)
    {
      delay(buttonDelay);

      line--;
      movementBuzz();
      updateThrottle(line);
    }
      
    if (cancelPressed)
    {
      delay(buttonDelay);
      
      cancelBuzz();
      saveThrottle();
      break;
    }
  }

  line = 4;
  updateSystemMenu(line);

}


void setThrottle()
{
  if (line == 0)
  {
    Throttle1_Sel = "(*)";
    Throttle2_Sel = "";
    
    THROTTLE_MODE_VALUE = 0;

    THROTTLE_SAVE = 1;


    updateThrottle(line);
  }

  if (line == 1)
  {
    Throttle1_Sel = "";
    Throttle2_Sel = "(*)";
    
    THROTTLE_MODE_VALUE = 127;

    THROTTLE_SAVE = 2;

    updateThrottle(line);
  }
}

void saveThrottle()
{
  SETTINGS_THROTTLE_MODE_SEL_EEPROM = EEPROM.put(621,THROTTLE_SAVE);
}

void loadThrottle()
{
  SETTINGS_THROTTLE_MODE_SEL_EEPROM = EEPROM.read(621);

  if (SETTINGS_THROTTLE_MODE_SEL_EEPROM == 1)
  {
    Throttle1_Sel = "(*)";
    Throttle2_Sel = "";

    THROTTLE_MODE_VALUE = 0;
  }

  else if (SETTINGS_THROTTLE_MODE_SEL_EEPROM == 2)
  {
    Throttle1_Sel = "";
    Throttle2_Sel = "(*)";

    THROTTLE_MODE_VALUE = 127;
  }

}
