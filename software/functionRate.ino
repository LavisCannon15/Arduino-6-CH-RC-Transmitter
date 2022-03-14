int CH1_RATE = 100;
int CH2_RATE = 100;
int CH3_RATE = 100;
int CH4_RATE = 100;

int CH1_EXPO = 0;
int CH2_EXPO = 0;
int CH3_EXPO = 0;
int CH4_EXPO = 0;


//Function Rate/Expo EEPROM
byte MODEL_1_CH1_RATE_EEPROM;
byte MODEL_1_CH2_RATE_EEPROM;
byte MODEL_1_CH3_RATE_EEPROM;
byte MODEL_1_CH4_RATE_EEPROM;
 
byte MODEL_1_CH1_EXPO_EEPROM;
byte MODEL_1_CH2_EXPO_EEPROM;
byte MODEL_1_CH3_EXPO_EEPROM;
byte MODEL_1_CH4_EXPO_EEPROM;

byte MODEL_2_CH1_RATE_EEPROM;
byte MODEL_2_CH2_RATE_EEPROM;
byte MODEL_2_CH3_RATE_EEPROM;
byte MODEL_2_CH4_RATE_EEPROM;
 
byte MODEL_2_CH1_EXPO_EEPROM;
byte MODEL_2_CH2_EXPO_EEPROM;
byte MODEL_2_CH3_EXPO_EEPROM;
byte MODEL_2_CH4_EXPO_EEPROM;

byte MODEL_3_CH1_RATE_EEPROM;
byte MODEL_3_CH2_RATE_EEPROM;
byte MODEL_3_CH3_RATE_EEPROM;
byte MODEL_3_CH4_RATE_EEPROM;

byte MODEL_3_CH1_EXPO_EEPROM;
byte MODEL_3_CH2_EXPO_EEPROM;
byte MODEL_3_CH3_EXPO_EEPROM;
byte MODEL_3_CH4_EXPO_EEPROM;

byte MODEL_4_CH1_RATE_EEPROM;
byte MODEL_4_CH2_RATE_EEPROM;
byte MODEL_4_CH3_RATE_EEPROM;
byte MODEL_4_CH4_RATE_EEPROM;
 
byte MODEL_4_CH1_EXPO_EEPROM;
byte MODEL_4_CH2_EXPO_EEPROM;
byte MODEL_4_CH3_EXPO_EEPROM;
byte MODEL_4_CH4_EXPO_EEPROM;

byte MODEL_5_CH1_RATE_EEPROM;
byte MODEL_5_CH2_RATE_EEPROM;
byte MODEL_5_CH3_RATE_EEPROM;
byte MODEL_5_CH4_RATE_EEPROM;
 
byte MODEL_5_CH1_EXPO_EEPROM;
byte MODEL_5_CH2_EXPO_EEPROM;
byte MODEL_5_CH3_EXPO_EEPROM;
byte MODEL_5_CH4_EXPO_EEPROM;


void rateHeader()
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(32,0);  display.print("RATE/EXPO");
  display.drawLine (0,9,128,9, WHITE);
}

void rateLine1()
{
  rateHeader();
  display.setCursor(0,11);  display.print ("CH1>Rate:" + String(CH1_RATE) + " " + "Exp:" + String(CH1_EXPO));
  display.setCursor(0,20);  display.print ("CH2 Rate:" + String(CH2_RATE) + " " + "Exp:" + String(CH2_EXPO));
  display.setCursor(0,29);  display.print ("CH3 Rate:" + String(CH3_RATE) + " " + "Exp:" + String(CH3_EXPO));
  display.setCursor(0,38);  display.print ("CH4 Rate:" + String(CH4_RATE) + " " + "Exp:" + String(CH4_EXPO));
  refresh();
}

void rateLine1_2()
{
  rateHeader();
  display.setCursor(0,11);  display.print ("CH1 Rate:" + String(CH1_RATE) + ">" + "Exp:" + String(CH1_EXPO));
  display.setCursor(0,20);  display.print ("CH2 Rate:" + String(CH2_RATE) + " " + "Exp:" + String(CH2_EXPO));
  display.setCursor(0,29);  display.print ("CH3 Rate:" + String(CH3_RATE) + " " + "Exp:" + String(CH3_EXPO));
  display.setCursor(0,38);  display.print ("CH4 Rate:" + String(CH4_RATE) + " " + "Exp:" + String(CH4_EXPO));
  refresh();
}

void rateLine2()
{
  rateHeader();
  display.setCursor(0,11);  display.print ("CH1 Rate:" + String(CH1_RATE) + " " + "Exp:" + String(CH1_EXPO));
  display.setCursor(0,20);  display.print ("CH2>Rate:" + String(CH2_RATE) + " " + "Exp:" + String(CH2_EXPO));
  display.setCursor(0,29);  display.print ("CH3 Rate:" + String(CH3_RATE) + " " + "Exp:" + String(CH3_EXPO));
  display.setCursor(0,38);  display.print ("CH4 Rate:" + String(CH4_RATE) + " " + "Exp:" + String(CH4_EXPO));
  refresh();
}

void rateLine2_2()
{
  rateHeader();
  display.setCursor(0,11);  display.print ("CH1 Rate:" + String(CH1_RATE) + " " + "Exp:" + String(CH1_EXPO));
  display.setCursor(0,20);  display.print ("CH2 Rate:" + String(CH2_RATE) + ">" + "Exp:" + String(CH2_EXPO));
  display.setCursor(0,29);  display.print ("CH3 Rate:" + String(CH3_RATE) + " " + "Exp:" + String(CH3_EXPO));
  display.setCursor(0,38);  display.print ("CH4 Rate:" + String(CH4_RATE) + " " + "Exp:" + String(CH4_EXPO));
  refresh();
}


void rateLine3()
{
  rateHeader();
  display.setCursor(0,11);  display.print ("CH1 Rate:" + String(CH1_RATE) + " " + "Exp:" + String(CH1_EXPO));
  display.setCursor(0,20);  display.print ("CH2 Rate:" + String(CH2_RATE) + " " + "Exp:" + String(CH2_EXPO));
  display.setCursor(0,29);  display.print ("CH3>Rate:" + String(CH3_RATE) + " " + "Exp:" + String(CH3_EXPO));
  display.setCursor(0,38);  display.print ("CH4 Rate:" + String(CH4_RATE) + " " + "Exp:" + String(CH4_EXPO));
  refresh();
}

void rateLine3_2()
{
  rateHeader();
  display.setCursor(0,11);  display.print ("CH1 Rate:" + String(CH1_RATE) + " " + "Exp:" + String(CH1_EXPO));
  display.setCursor(0,20);  display.print ("CH2 Rate:" + String(CH2_RATE) + " " + "Exp:" + String(CH2_EXPO));
  display.setCursor(0,29);  display.print ("CH3 Rate:" + String(CH3_RATE) + ">" + "Exp:" + String(CH3_EXPO));
  display.setCursor(0,38);  display.print ("CH4 Rate:" + String(CH4_RATE) + " " + "Exp:" + String(CH4_EXPO));
  refresh();
}

void rateLine4()
{
  rateHeader();
  display.setCursor(0,11);  display.print ("CH1 Rate:" + String(CH1_RATE) + " " + "Exp:" + String(CH1_EXPO));
  display.setCursor(0,20);  display.print ("CH2 Rate:" + String(CH2_RATE) + " " + "Exp:" + String(CH2_EXPO));
  display.setCursor(0,29);  display.print ("CH3 Rate:" + String(CH3_RATE) + " " + "Exp:" + String(CH3_EXPO));
  display.setCursor(0,38);  display.print ("CH4>Rate:" + String(CH4_RATE) + " " + "Exp:" + String(CH4_EXPO));
  refresh();
}

void rateLine4_2()
{
  rateHeader();
  display.setCursor(0,11);  display.print ("CH1 Rate:" + String(CH1_RATE) + " " + "Exp:" + String(CH1_EXPO));
  display.setCursor(0,20);  display.print ("CH2 Rate:" + String(CH2_RATE) + " " + "Exp:" + String(CH2_EXPO));
  display.setCursor(0,29);  display.print ("CH3 Rate:" + String(CH3_RATE) + " " + "Exp:" + String(CH3_EXPO));
  display.setCursor(0,38);  display.print ("CH4 Rate:" + String(CH4_RATE) + ">" + "Exp:" + String(CH4_EXPO));
  refresh();
}




void updateRate(int x)
{
  switch(x)
  {
    case -1:
    rateLine4_2();
    line = 7;
    break;

    case 0:
    rateLine1();
    break;

    case 1:
    rateLine1_2();
    break;

    case 2:
    rateLine2();
    break;

    case 3:
    rateLine2_2();
    break;

    case 4:
    rateLine3();
    break;

    case 5:
    rateLine3_2();
    break;

    case 6:
    rateLine4();
    break;

    case 7:
    rateLine4_2();
    break;

    case 8:
    rateLine1();
    line = 0;

  }
}

void navigateRateMenu()
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
      setRate();
    }
      
    if (downPressed)
    {
      delay(buttonDelay);

      line++;
      movementBuzz();
      updateRate(line);
    }
      
    if (upPressed)
    {
      delay(buttonDelay);

      line--;
      movementBuzz();
      updateRate(line);
    }
      
    if (cancelPressed)
    {
      delay(buttonDelay);
      
      cancelBuzz();
      saveRate();
      break;
    }
  }

  line = 4;
  updateFunctionMenu(line);

}



void setRate()
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
        movementBuzz();
        if (CH1_RATE < 100)
        {
          CH1_RATE++;
        }
        updateRate(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (CH1_RATE > 0)
        {
          CH1_RATE--; 
        }
        updateRate(line);
      }

      if (cancelPressed)
      {
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
        if (CH1_EXPO < 100)
        {
          CH1_EXPO++;
        }
        updateRate(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (CH1_EXPO > -100)
        {
          CH1_EXPO--; 
        }
        updateRate(line);
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
        if (CH2_RATE < 100)
        {
          CH2_RATE++;
        }
        updateRate(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (CH2_RATE > 0)
        {
          CH2_RATE--; 
        }
        updateRate(line);
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
        if (CH2_EXPO < 100)
        {
          CH2_EXPO++;
        }
        updateRate(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (CH2_EXPO > -100)
        {
          CH2_EXPO--; 
        }
        updateRate(line);
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
        if (CH2_RATE < 100)
        {
          CH2_RATE++;
        }
        updateRate(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (CH2_RATE > 0)
        {
          CH2_RATE--; 
        }
        updateRate(line);
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
        if (CH2_EXPO < 100)
        {
          CH2_EXPO++;
        }
        updateRate(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (CH2_EXPO > -100)
        {
          CH2_EXPO--; 
        }
        updateRate(line);
      }

      if (cancelPressed)
      {
        cancelBuzz;
        break;
      }
    }
  }

    if (line == 4)
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
        if (CH3_RATE < 100)
        {
          CH3_RATE++;
        }
        updateRate(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (CH3_RATE > 0)
        {
          CH3_RATE--; 
        }
        updateRate(line);
      }

      if (cancelPressed)
      {
        cancelBuzz;
        break;
      }
    }

  }

  if (line == 5)
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
        if (CH3_EXPO < 100)
        {
          CH3_EXPO++;
        }
        updateRate(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (CH3_EXPO > -100)
        {
          CH3_EXPO--; 
        }
        updateRate(line);
      }

      if (cancelPressed)
      {
        cancelBuzz;
        break;
      }
    }
  }

  if (line == 6)
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
        if (CH4_RATE < 100)
        {
          CH4_RATE++;
        }
        updateRate(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (CH4_RATE > 0)
        {
          CH4_RATE--; 
        }
        updateRate(line);
      }

      if (cancelPressed)
      {
        cancelBuzz;
        break;
      }
    }

  }

  if (line == 7)
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
        if (CH4_EXPO < 100)
        {
          CH4_EXPO++;
        }
        updateRate(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (CH4_EXPO > -100)
        {
          CH4_EXPO--; 
        }
        updateRate(line);
      }

      if (cancelPressed)
      {
        cancelBuzz;
        break;
      }
    }
  }

  cancelBuzz();
  updateRate(line);


}

void saveRate()
{
  if (Model1_Sel == "(*)")
  {
    MODEL_1_CH1_RATE_EEPROM = EEPROM.put(41,CH1_RATE);
    MODEL_1_CH2_RATE_EEPROM = EEPROM.put(42,CH2_RATE);
    MODEL_1_CH3_RATE_EEPROM = EEPROM.put(43,CH3_RATE);
    MODEL_1_CH4_RATE_EEPROM = EEPROM.put(44,CH4_RATE);
 
    MODEL_1_CH1_EXPO_EEPROM = EEPROM.put(51,CH1_EXPO);
    MODEL_1_CH2_EXPO_EEPROM = EEPROM.put(52,CH2_EXPO);
    MODEL_1_CH3_EXPO_EEPROM = EEPROM.put(53,CH3_EXPO);
    MODEL_1_CH4_EXPO_EEPROM = EEPROM.put(54,CH4_EXPO);
  }

  else if (Model2_Sel == "(*)")
  {
    MODEL_2_CH1_RATE_EEPROM = EEPROM.put(161,CH1_RATE);
    MODEL_2_CH2_RATE_EEPROM = EEPROM.put(162,CH2_RATE);
    MODEL_2_CH3_RATE_EEPROM = EEPROM.put(163,CH3_RATE);
    MODEL_2_CH4_RATE_EEPROM = EEPROM.put(164,CH4_RATE);
 
    MODEL_2_CH1_EXPO_EEPROM = EEPROM.put(171,CH1_EXPO);
    MODEL_2_CH2_EXPO_EEPROM = EEPROM.put(172,CH2_EXPO);
    MODEL_2_CH3_EXPO_EEPROM = EEPROM.put(173,CH3_EXPO);
    MODEL_2_CH4_EXPO_EEPROM = EEPROM.put(174,CH4_EXPO);
  }

  else if (Model3_Sel == "(*)")
  {
    MODEL_3_CH1_RATE_EEPROM = EEPROM.put(281,CH1_RATE);
    MODEL_3_CH2_RATE_EEPROM = EEPROM.put(282,CH2_RATE);
    MODEL_3_CH3_RATE_EEPROM = EEPROM.put(283,CH3_RATE);
    MODEL_3_CH4_RATE_EEPROM = EEPROM.put(284,CH4_RATE);

    MODEL_3_CH1_EXPO_EEPROM = EEPROM.put(291,CH1_EXPO);
    MODEL_3_CH2_EXPO_EEPROM = EEPROM.put(292,CH2_EXPO);
    MODEL_3_CH3_EXPO_EEPROM = EEPROM.put(293,CH3_EXPO);
    MODEL_3_CH4_EXPO_EEPROM = EEPROM.put(294,CH4_EXPO);
  }

  else if (Model4_Sel == "(*)")
  {
    MODEL_4_CH1_RATE_EEPROM = EEPROM.put(401,CH1_RATE);
    MODEL_4_CH2_RATE_EEPROM = EEPROM.put(402,CH2_RATE);
    MODEL_4_CH3_RATE_EEPROM = EEPROM.put(403,CH3_RATE);
    MODEL_4_CH4_RATE_EEPROM = EEPROM.put(404,CH4_RATE);

    MODEL_4_CH1_EXPO_EEPROM = EEPROM.put(411,CH1_EXPO);
    MODEL_4_CH2_EXPO_EEPROM = EEPROM.put(412,CH2_EXPO);
    MODEL_4_CH3_EXPO_EEPROM = EEPROM.put(413,CH3_EXPO);
    MODEL_4_CH4_EXPO_EEPROM = EEPROM.put(414,CH4_EXPO);
  }

  else if (Model5_Sel == "(*)")
  {
    MODEL_5_CH1_RATE_EEPROM = EEPROM.put(521,CH1_RATE);
    MODEL_5_CH2_RATE_EEPROM = EEPROM.put(522,CH2_RATE);
    MODEL_5_CH3_RATE_EEPROM = EEPROM.put(523,CH3_RATE);
    MODEL_5_CH4_RATE_EEPROM = EEPROM.put(524,CH4_RATE);

    MODEL_5_CH1_EXPO_EEPROM = EEPROM.put(531,CH1_EXPO);
    MODEL_5_CH2_EXPO_EEPROM = EEPROM.put(532,CH2_EXPO);
    MODEL_5_CH3_EXPO_EEPROM = EEPROM.put(533,CH3_EXPO);
    MODEL_5_CH4_EXPO_EEPROM = EEPROM.put(534,CH4_EXPO);
  }


}

void loadRate()
{
  if (Model1_Sel == "(*)")
  {
    CH1_RATE = EEPROM.read(41);
    CH2_RATE = EEPROM.read(42);
    CH3_RATE = EEPROM.read(43);
    CH4_RATE = EEPROM.read(44);
    
    CH1_EXPO = EEPROM.read(51);
    CH2_EXPO = EEPROM.read(52);
    CH3_EXPO = EEPROM.read(53);
    CH4_EXPO = EEPROM.read(54);
  }

  else if (Model2_Sel == "(*)")
  {
    CH1_RATE = EEPROM.read(161);
    CH2_RATE = EEPROM.read(162);
    CH3_RATE = EEPROM.read(163);
    CH4_RATE = EEPROM.read(164);
    
    CH1_EXPO = EEPROM.read(171);
    CH2_EXPO = EEPROM.read(172);
    CH3_EXPO = EEPROM.read(173);
    CH4_EXPO = EEPROM.read(174);
  }

  else if (Model3_Sel == "(*)")
  {
    CH1_RATE = EEPROM.read(281);
    CH2_RATE = EEPROM.read(282);
    CH3_RATE = EEPROM.read(283);
    CH4_RATE = EEPROM.read(284);
    
    CH1_EXPO = EEPROM.read(291);
    CH2_EXPO = EEPROM.read(292);
    CH3_EXPO = EEPROM.read(293);
    CH4_EXPO = EEPROM.read(294);
  }

  else if (Model4_Sel == "(*)")
  {
    CH1_RATE = EEPROM.read(401);
    CH2_RATE = EEPROM.read(402);
    CH3_RATE = EEPROM.read(403);
    CH4_RATE = EEPROM.read(404);
    
    CH1_EXPO = EEPROM.read(411);
    CH2_EXPO = EEPROM.read(412);
    CH3_EXPO = EEPROM.read(413);
    CH4_EXPO = EEPROM.read(414);
  }

  else if (Model5_Sel == "(*)")
  {
    CH1_RATE = EEPROM.read(521);
    CH2_RATE = EEPROM.read(522);
    CH3_RATE = EEPROM.read(523);
    CH4_RATE = EEPROM.read(524);
    
    CH1_EXPO = EEPROM.read(531);
    CH2_EXPO = EEPROM.read(532);
    CH3_EXPO = EEPROM.read(533);
    CH4_EXPO = EEPROM.read(534);
  }
}
