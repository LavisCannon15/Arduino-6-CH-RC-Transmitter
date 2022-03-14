
//default values
String Mode1_Sel = "";
String Mode2_Sel = "*";
String Mode3_Sel = "";
String Mode4_Sel = "";


int MODE_SAVE = 2; //2 is mode 2, 1 is mode 1


byte SETTINGS_MODE_SEL_EEPROM;


void sticksModeHeader()
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(32,0);  display.print("STICKS MODE");
  display.drawLine (0,9,128,9, WHITE);
}

void sticksModeLine1()
{
  sticksModeHeader();
  display.setCursor(0,11);  display.print (">Mode 1 " + Mode1_Sel);
  display.setCursor(0,20);  display.print (" Mode 2 " + Mode2_Sel);
  display.setCursor(0,29);  display.print (" Mode 3 " + Mode3_Sel);
  display.setCursor(0,38);  display.print (" Mode 4 " + Mode4_Sel);
  refresh();
}

void sticksModeLine2()
{ 
  sticksModeHeader();
  display.setCursor(0,11);  display.print (" Mode 1 " + Mode1_Sel);
  display.setCursor(0,20);  display.print (">Mode 2 " + Mode2_Sel);
  display.setCursor(0,29);  display.print (" Mode 3 " + Mode3_Sel);
  display.setCursor(0,38);  display.print (" Mode 4 " + Mode4_Sel);
  refresh();
}

void sticksModeLine3()
{
  sticksModeHeader();
  display.setCursor(0,11);  display.print (" Mode 1 " + Mode1_Sel);
  display.setCursor(0,20);  display.print (" Mode 2 " + Mode2_Sel);
  display.setCursor(0,29);  display.print (">Mode 3 " + Mode3_Sel);
  display.setCursor(0,38);  display.print (" Mode 4 " + Mode4_Sel);
  refresh();
}


void sticksModeLine4()
{
  sticksModeHeader();
  display.setCursor(0,11);  display.print (" Mode 1 " + Mode1_Sel);
  display.setCursor(0,20);  display.print (" Mode 2 " + Mode2_Sel);
  display.setCursor(0,29);  display.print (" Mode 3 " + Mode3_Sel);
  display.setCursor(0,38);  display.print (">Mode 4 " + Mode4_Sel);
  refresh();
}


void updateSticksMode(int x)
{
  switch(x)
  {
    case -1:
    sticksModeLine4();
    line = 3;
    break;

    case 0:
    sticksModeLine1();
    break;

    case 1:
    sticksModeLine2();
    break;

    case 2:
    sticksModeLine3();
    break;

    case 3:
    sticksModeLine4();
    break;

    case 4:
    sticksModeLine1();
    line = 0;
  }
}

void navigateSticksModeMenu()
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
      setSticks();
    }
      
    if (downPressed)
    {
      delay(buttonDelay);

      line++;
      movementBuzz();
      updateSticksMode(line);
    }
      
    if (upPressed)
    {
      delay(buttonDelay);

      line--;
      movementBuzz();
      updateSticksMode(line);
    }
      
    if (cancelPressed)
    {
      delay(buttonDelay);
      
      cancelBuzz();
      saveSticks();
      break;
    }
  }

  line = 3;
  updateSystemMenu(line);

}

void setSticks()
{
  if (line == 0)
  {
    Mode1_Sel = "*";
    Mode2_Sel = "";
    Mode3_Sel = "";
    Mode4_Sel = "";

    NRF_CH1_value = analogRead(CH1_PIN);
    NRF_CH2_value = analogRead(CH3_PIN); 
    NRF_CH3_value = analogRead(CH2_PIN); 
    NRF_CH4_value = analogRead(CH4_PIN);

    MODE_SAVE = 1; 

    updateSticksMode(line);
  }

  if (line == 1)
  {
    Mode1_Sel = "";
    Mode2_Sel = "*";
    Mode3_Sel = "";
    Mode4_Sel = "";

    NRF_CH1_value = analogRead(CH1_PIN); //aileron
    NRF_CH2_value = analogRead(CH2_PIN); //elevator
    NRF_CH3_value = analogRead(CH3_PIN); //throttle
    NRF_CH4_value = analogRead(CH4_PIN); //rudder
    
    MODE_SAVE = 2; 

    updateSticksMode(line);
  }

  if (line == 2)
  {
    Mode1_Sel = "";
    Mode2_Sel = "";
    Mode3_Sel = "*";
    Mode4_Sel = "";

    NRF_CH1_value = analogRead(CH4_PIN);
    NRF_CH2_value = analogRead(CH3_PIN); 
    NRF_CH3_value = analogRead(CH2_PIN); 
    NRF_CH4_value = analogRead(CH1_PIN);

    MODE_SAVE = 3; 

    updateSticksMode(line);
  }

  if (line == 3)
  {
    Mode1_Sel = "";
    Mode2_Sel = "";
    Mode3_Sel = "";
    Mode4_Sel = "*";

    NRF_CH1_value = analogRead(CH4_PIN);
    NRF_CH2_value = analogRead(CH2_PIN);
    NRF_CH3_value = analogRead(CH3_PIN);
    NRF_CH4_value = analogRead(CH1_PIN); 

    MODE_SAVE = 4;

    updateSticksMode(line);
  }

}

void saveSticks()
{
  SETTINGS_MODE_SEL_EEPROM = EEPROM.put(611,MODE_SAVE);
}


void loadSticks()
{
  SETTINGS_MODE_SEL_EEPROM = EEPROM.read(611);

  if (SETTINGS_MODE_SEL_EEPROM == 1)
  {
    Mode1_Sel = "*";
    Mode2_Sel = "";
    Mode3_Sel = "";
    Mode4_Sel = "";

    NRF_CH1_value = analogRead(CH1_PIN);
    NRF_CH2_value = analogRead(CH3_PIN); 
    NRF_CH3_value = analogRead(CH2_PIN); 
    NRF_CH4_value = analogRead(CH4_PIN);
  }

  else if (SETTINGS_MODE_SEL_EEPROM == 2)
  {
    Mode1_Sel = "";
    Mode2_Sel = "*";
    Mode3_Sel = "";
    Mode4_Sel = "";

    NRF_CH1_value = analogRead(CH1_PIN); //aileron
    NRF_CH2_value = analogRead(CH2_PIN); //elevator
    NRF_CH3_value = analogRead(CH3_PIN); //throttle
    NRF_CH4_value = analogRead(CH4_PIN); //rudder
  }

  else if (SETTINGS_MODE_SEL_EEPROM == 3)
  {
    Mode1_Sel = "";
    Mode2_Sel = "";
    Mode3_Sel = "*";
    Mode4_Sel = "";

    NRF_CH1_value = analogRead(CH4_PIN);
    NRF_CH2_value = analogRead(CH3_PIN); 
    NRF_CH3_value = analogRead(CH2_PIN); 
    NRF_CH4_value = analogRead(CH1_PIN);
  }

  else if (SETTINGS_MODE_SEL_EEPROM == 4)
  {
    Mode1_Sel = "";
    Mode2_Sel = "";
    Mode3_Sel = "";
    Mode4_Sel = "*";

    NRF_CH1_value = analogRead(CH4_PIN);
    NRF_CH2_value = analogRead(CH2_PIN);
    NRF_CH3_value = analogRead(CH3_PIN);
    NRF_CH4_value = analogRead(CH1_PIN); 
  }
}
