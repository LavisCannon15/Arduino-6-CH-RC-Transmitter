int CH1_subtrim = 0;
int CH2_subtrim = 0;
int CH3_subtrim = 0;
int CH4_subtrim = 0;


//Function Subtrim EEPROM
byte MODEL_1_CH1_SUBTRIM_EEPROM;
byte MODEL_1_CH2_SUBTRIM_EEPROM;
byte MODEL_1_CH3_SUBTRIM_EEPROM;
byte MODEL_1_CH4_SUBTRIM_EEPROM;

byte MODEL_2_CH1_SUBTRIM_EEPROM;
byte MODEL_2_CH2_SUBTRIM_EEPROM;
byte MODEL_2_CH3_SUBTRIM_EEPROM;
byte MODEL_2_CH4_SUBTRIM_EEPROM;

byte MODEL_3_CH1_SUBTRIM_EEPROM;
byte MODEL_3_CH2_SUBTRIM_EEPROM;
byte MODEL_3_CH3_SUBTRIM_EEPROM;
byte MODEL_3_CH4_SUBTRIM_EEPROM;

byte MODEL_4_CH1_SUBTRIM_EEPROM;
byte MODEL_4_CH2_SUBTRIM_EEPROM;
byte MODEL_4_CH3_SUBTRIM_EEPROM;
byte MODEL_4_CH4_SUBTRIM_EEPROM;

byte MODEL_5_CH1_SUBTRIM_EEPROM;
byte MODEL_5_CH2_SUBTRIM_EEPROM;
byte MODEL_5_CH3_SUBTRIM_EEPROM;
byte MODEL_5_CH4_SUBTRIM_EEPROM;



void subtrimHeader()
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(40,0);  display.print("SUBTRIM");
  display.drawLine (0,9,128,9, WHITE);
}

void subtrimLine1()
{
  subtrimHeader();
  display.setCursor(0,11);  display.print ("CH1>" + String(CH1_subtrim) + "%");
  display.setCursor(0,20);  display.print ("CH2 " + String(CH2_subtrim) + "%");
  display.setCursor(0,29);  display.print ("CH3 " + String(CH3_subtrim) + "%");
  display.setCursor(0,38);  display.print ("CH4 " + String(CH4_subtrim) + "%");
  refresh();
}

void subtrimLine2()
{
  subtrimHeader();
  display.setCursor(0,11);  display.print ("CH1 " + String(CH1_subtrim) + "%");
  display.setCursor(0,20);  display.print ("CH2>" + String(CH2_subtrim) + "%");
  display.setCursor(0,29);  display.print ("CH3 " + String(CH3_subtrim) + "%");
  display.setCursor(0,38);  display.print ("CH4 " + String(CH4_subtrim) + "%");
  refresh();
}

void subtrimLine3()
{
  subtrimHeader();
  display.setCursor(0,11);  display.print ("CH1 " + String(CH1_subtrim) + "%");
  display.setCursor(0,20);  display.print ("CH2 " + String(CH2_subtrim) + "%");
  display.setCursor(0,29);  display.print ("CH3>" + String(CH3_subtrim) + "%");
  display.setCursor(0,38);  display.print ("CH4 " + String(CH4_subtrim) + "%");
  refresh();
}


void subtrimLine4()
{
  subtrimHeader();
  display.setCursor(0,11);  display.print ("CH1 " + String(CH1_subtrim) + "%");
  display.setCursor(0,20);  display.print ("CH2 " + String(CH2_subtrim) + "%");
  display.setCursor(0,29);  display.print ("CH3 " + String(CH3_subtrim) + "%");
  display.setCursor(0,38);  display.print ("CH4>" + String(CH4_subtrim) + "%");
  refresh();
}



void updateSubtrim(int x)
{
  switch(x)
  {
    case -1:
    subtrimLine4();
    line = 3;
    break;

    case 0:
    subtrimLine1();
    break;

    case 1:
    subtrimLine2();
    break;

    case 2:
    subtrimLine3();
    break;

    case 3:
    subtrimLine4();
    break;

    case 4:
    subtrimLine1();
    line = 0;
  }
}

void navigateSubtrimMenu()
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
      setSubtrim();
    }

    if (downPressed)
    {
      delay(buttonDelay);

      line++;
      movementBuzz();
      updateSubtrim(line);
    }
      
    if (upPressed)
    {
      delay(buttonDelay);

      line--;
      movementBuzz();
      updateSubtrim(line);
    }
      
    if (cancelPressed)
    {
      delay(buttonDelay);

      cancelBuzz();
      saveSubtrim();
      break;
    }
  }

  line = 2;
  updateFunctionMenu(line);

}

void setSubtrim()
{
  if (line == 0)
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

      if (upPressed)
      {
        delay(buttonDelay);

        movementBuzz();
        if (CH1_subtrim < 120)
        {
          CH1_subtrim++;
        }
        updateSubtrim(line);
      }

      if (downPressed)
      {
        delay(buttonDelay);

        movementBuzz();
        if (CH1_subtrim > -120)
        {
          CH1_subtrim--; 
        }
        updateSubtrim(line);
      }

      if (cancelPressed)
      {
        delay(buttonDelay);
        
        cancelBuzz;
        break;
      }
    }
  }

  if (line == 1)
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

      if (upPressed)
      {
        movementBuzz();
        if (CH2_subtrim < 120)
        {
          CH2_subtrim++;
        }
        updateSubtrim(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (CH2_subtrim > -120)
        {
          CH2_subtrim--; 
        }
        updateSubtrim(line);
      }

      if (cancelPressed)
      {
        cancelBuzz;
        break;
      }
    }
  }

  if (line == 2)
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

      if (upPressed)
      {
        movementBuzz();
        if (CH3_subtrim < 120)
        {
          CH3_subtrim++;
        }
        updateSubtrim(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (CH3_subtrim > -120)
        {
          CH3_subtrim--; 
        }
        updateSubtrim(line);
      }

      if (cancelPressed)
      {
        cancelBuzz;
        break;
      }
    }
    
  }

  if (line == 3)
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

      if (upPressed)
      {
        movementBuzz();
        if (CH4_subtrim < 120)
        {
          CH4_subtrim++;
        }
        updateSubtrim(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (CH4_subtrim > -120)
        {
          CH4_subtrim--; 
        }
        updateSubtrim(line);
      }

      if (cancelPressed)
      {
        cancelBuzz;
        break;
      }
    }
    
  }

  cancelBuzz();
  updateSubtrim(line);



}

void saveSubtrim()
{
  if (Model1_Sel == "(*)")
  {
    MODEL_1_CH1_SUBTRIM_EEPROM = EEPROM.put(31,CH1_subtrim);
    MODEL_1_CH2_SUBTRIM_EEPROM = EEPROM.put(32,CH2_subtrim);
    MODEL_1_CH3_SUBTRIM_EEPROM = EEPROM.put(33,CH3_subtrim);
    MODEL_1_CH4_SUBTRIM_EEPROM = EEPROM.put(34,CH4_subtrim);

  }

  else if (Model2_Sel == "(*)")
  {
    MODEL_2_CH1_SUBTRIM_EEPROM = EEPROM.put(151,CH1_subtrim);
    MODEL_2_CH2_SUBTRIM_EEPROM = EEPROM.put(152,CH2_subtrim);
    MODEL_2_CH3_SUBTRIM_EEPROM = EEPROM.put(153,CH3_subtrim);
    MODEL_2_CH4_SUBTRIM_EEPROM = EEPROM.put(154,CH4_subtrim);
  }

  else if (Model3_Sel == "(*)")
  {
    MODEL_3_CH1_SUBTRIM_EEPROM = EEPROM.put(271,CH1_subtrim);
    MODEL_3_CH2_SUBTRIM_EEPROM = EEPROM.put(272,CH2_subtrim);
    MODEL_3_CH3_SUBTRIM_EEPROM = EEPROM.put(273,CH3_subtrim);
    MODEL_3_CH4_SUBTRIM_EEPROM = EEPROM.put(274,CH4_subtrim);
  }

  else if (Model4_Sel == "(*)")
  {
    MODEL_4_CH1_SUBTRIM_EEPROM = EEPROM.put(391,CH1_subtrim);
    MODEL_4_CH2_SUBTRIM_EEPROM = EEPROM.put(392,CH2_subtrim);
    MODEL_4_CH3_SUBTRIM_EEPROM = EEPROM.put(393,CH3_subtrim);
    MODEL_4_CH4_SUBTRIM_EEPROM = EEPROM.put(394,CH4_subtrim);
  }

  else if (Model5_Sel == "(*)")
  {
    MODEL_5_CH1_SUBTRIM_EEPROM = EEPROM.put(511,CH1_subtrim);
    MODEL_5_CH2_SUBTRIM_EEPROM = EEPROM.put(512,CH2_subtrim);
    MODEL_5_CH3_SUBTRIM_EEPROM = EEPROM.put(513,CH3_subtrim);
    MODEL_5_CH4_SUBTRIM_EEPROM = EEPROM.put(514,CH4_subtrim);
  }
}

void loadSubtrim()
{
  if (Model1_Sel == "(*)")
  {
    CH1_subtrim = EEPROM.read(31);
    CH2_subtrim = EEPROM.read(32);
    CH3_subtrim = EEPROM.read(33);
    CH4_subtrim = EEPROM.read(34);
  }

  else if (Model2_Sel == "(*)")
  {
    CH1_subtrim = EEPROM.read(151);
    CH2_subtrim = EEPROM.read(152);
    CH3_subtrim = EEPROM.read(153);
    CH4_subtrim = EEPROM.read(154);
  }

  else if (Model3_Sel == "(*)")
  {
    CH1_subtrim = EEPROM.read(271);
    CH2_subtrim = EEPROM.read(272);
    CH3_subtrim = EEPROM.read(273);
    CH4_subtrim = EEPROM.read(274);
  }

  else if (Model4_Sel == "(*)")
  {
    CH1_subtrim = EEPROM.read(391);
    CH2_subtrim = EEPROM.read(392);
    CH3_subtrim = EEPROM.read(393);
    CH4_subtrim = EEPROM.read(394);
  }

  else if (Model5_Sel == "(*)")
  {
    CH1_subtrim = EEPROM.read(511);
    CH2_subtrim = EEPROM.read(512);
    CH3_subtrim = EEPROM.read(513);
    CH4_subtrim = EEPROM.read(514);
  }
  
}
