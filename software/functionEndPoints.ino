int CH1_leftEnd = 100;
int CH2_leftEnd = 100;
int CH3_leftEnd = 100;
int CH4_leftEnd = 100;

int CH1_rightEnd = 100;
int CH2_rightEnd = 100;
int CH3_rightEnd = 100;
int CH4_rightEnd = 100;

//Function End Points EEPROM
byte MODEL_1_CH1_LEFTEND_EEPROM;
byte MODEL_1_CH2_LEFTEND_EEPROM;
byte MODEL_1_CH3_LEFTEND_EEPROM;
byte MODEL_1_CH4_LEFTEND_EEPROM;

byte MODEL_1_CH1_RIGHTEND_EEPROM;
byte MODEL_1_CH2_RIGHTEND_EEPROM;
byte MODEL_1_CH3_RIGHTEND_EEPROM;
byte MODEL_1_CH4_RIGHTEND_EEPROM;

byte MODEL_2_CH1_LEFTEND_EEPROM;
byte MODEL_2_CH2_LEFTEND_EEPROM;
byte MODEL_2_CH3_LEFTEND_EEPROM;
byte MODEL_2_CH4_LEFTEND_EEPROM;

byte MODEL_2_CH1_RIGHTEND_EEPROM;
byte MODEL_2_CH2_RIGHTEND_EEPROM;
byte MODEL_2_CH3_RIGHTEND_EEPROM;
byte MODEL_2_CH4_RIGHTEND_EEPROM;

byte MODEL_3_CH1_LEFTEND_EEPROM;
byte MODEL_3_CH2_LEFTEND_EEPROM;
byte MODEL_3_CH3_LEFTEND_EEPROM;
byte MODEL_3_CH4_LEFTEND_EEPROM;

byte MODEL_3_CH1_RIGHTEND_EEPROM;
byte MODEL_3_CH2_RIGHTEND_EEPROM;
byte MODEL_3_CH3_RIGHTEND_EEPROM;
byte MODEL_3_CH4_RIGHTEND_EEPROM;

byte MODEL_4_CH1_LEFTEND_EEPROM;
byte MODEL_4_CH2_LEFTEND_EEPROM;
byte MODEL_4_CH3_LEFTEND_EEPROM;
byte MODEL_4_CH4_LEFTEND_EEPROM;

byte MODEL_4_CH1_RIGHTEND_EEPROM;
byte MODEL_4_CH2_RIGHTEND_EEPROM;
byte MODEL_4_CH3_RIGHTEND_EEPROM;
byte MODEL_4_CH4_RIGHTEND_EEPROM;

byte MODEL_5_CH1_LEFTEND_EEPROM;
byte MODEL_5_CH2_LEFTEND_EEPROM;
byte MODEL_5_CH3_LEFTEND_EEPROM;
byte MODEL_5_CH4_LEFTEND_EEPROM;

byte MODEL_5_CH1_RIGHTEND_EEPROM;
byte MODEL_5_CH2_RIGHTEND_EEPROM;
byte MODEL_5_CH3_RIGHTEND_EEPROM;
byte MODEL_5_CH4_RIGHTEND_EEPROM;


void endPointsHeader()
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(32,0);  display.print("END POINTS");
  display.drawLine (0,9,128,9, WHITE);
}

void endPointsLine1()
{
  endPointsHeader();
  display.setCursor(0,11);  display.print ("CH1>" + String(CH1_leftEnd) + "%" + " " + String(CH1_rightEnd) + "%");
  display.setCursor(0,20);  display.print ("CH2 " + String(CH2_leftEnd) + "%" + " " + String(CH2_rightEnd) + "%");
  display.setCursor(0,29);  display.print ("CH3 " + String(CH3_leftEnd) + "%" + " " + String(CH3_rightEnd) + "%");
  display.setCursor(0,38);  display.print ("CH4 " + String(CH4_leftEnd) + "%" + " " + String(CH4_rightEnd) + "%");
  refresh();
}

void endPointsLine1_2()
{
  endPointsHeader();
  display.setCursor(0,11);  display.print ("CH1 " + String(CH1_leftEnd) + "%" + ">" + String(CH1_rightEnd) + "%");
  display.setCursor(0,20);  display.print ("CH2 " + String(CH2_leftEnd) + "%" + " " + String(CH2_rightEnd) + "%");
  display.setCursor(0,29);  display.print ("CH3 " + String(CH3_leftEnd) + "%" + " " + String(CH3_rightEnd) + "%");
  display.setCursor(0,38);  display.print ("CH4 " + String(CH4_leftEnd) + "%" + " " + String(CH4_rightEnd) + "%");
  refresh();
}

void endPointsLine2()
{
  endPointsHeader();
  display.setCursor(0,11);  display.print ("CH1 " + String(CH1_leftEnd) + "%" + " " + String(CH1_rightEnd) + "%");
  display.setCursor(0,20);  display.print ("CH2>" + String(CH2_leftEnd) + "%" + " " + String(CH2_rightEnd) + "%");
  display.setCursor(0,29);  display.print ("CH3 " + String(CH3_leftEnd) + "%" + " " + String(CH3_rightEnd) + "%");
  display.setCursor(0,38);  display.print ("CH4 " + String(CH4_leftEnd) + "%" + " " + String(CH4_rightEnd) + "%");
  refresh();
}

void endPointsLine2_2()
{
  endPointsHeader();
  display.setCursor(0,11);  display.print ("CH1 " + String(CH1_leftEnd) + "%" + " " + String(CH1_rightEnd) + "%");
  display.setCursor(0,20);  display.print ("CH2 " + String(CH2_leftEnd) + "%" + ">" + String(CH2_rightEnd) + "%");
  display.setCursor(0,29);  display.print ("CH3 " + String(CH3_leftEnd) + "%" + " " + String(CH3_rightEnd) + "%");
  display.setCursor(0,38);  display.print ("CH4 " + String(CH4_leftEnd) + "%" + " " + String(CH4_rightEnd) + "%");
  refresh();
}

void endPointsLine3()
{
  endPointsHeader();
  display.setCursor(0,11);  display.print ("CH1 " + String(CH1_leftEnd) + "%" + " " + String(CH1_rightEnd) + "%");
  display.setCursor(0,20);  display.print ("CH2 " + String(CH2_leftEnd) + "%" + " " + String(CH2_rightEnd) + "%");
  display.setCursor(0,29);  display.print ("CH3>" + String(CH3_leftEnd) + "%" + " " + String(CH3_rightEnd) + "%");
  display.setCursor(0,38);  display.print ("CH4 " + String(CH4_leftEnd) + "%" + " " + String(CH4_rightEnd) + "%");
  refresh();
}

void endPointsLine3_2()
{
  endPointsHeader();
  display.setCursor(0,11);  display.print ("CH1 " + String(CH1_leftEnd) + "%" + " " + String(CH1_rightEnd) + "%");
  display.setCursor(0,20);  display.print ("CH2 " + String(CH2_leftEnd) + "%" + " " + String(CH2_rightEnd) + "%");
  display.setCursor(0,29);  display.print ("CH3 " + String(CH3_leftEnd) + "%" + ">" + String(CH3_rightEnd) + "%");
  display.setCursor(0,38);  display.print ("CH4 " + String(CH4_leftEnd) + "%" + " " + String(CH4_rightEnd) + "%");
  refresh();
}


void endPointsLine4()
{
  endPointsHeader();
  display.setCursor(0,11);  display.print ("CH1 " + String(CH1_leftEnd) + "%" + " " + String(CH1_rightEnd) + "%");
  display.setCursor(0,20);  display.print ("CH2 " + String(CH2_leftEnd) + "%" + " " + String(CH2_rightEnd) + "%");
  display.setCursor(0,29);  display.print ("CH3 " + String(CH3_leftEnd) + "%" + " " + String(CH3_rightEnd) + "%");
  display.setCursor(0,38);  display.print ("CH4>" + String(CH4_leftEnd) + "%" + " " + String(CH4_rightEnd) + "%");
  refresh();
}

void endPointsLine4_2()
{
  endPointsHeader();
  display.setCursor(0,11);  display.print ("CH1 " + String(CH1_leftEnd) + "%" + " " + String(CH1_rightEnd) + "%");
  display.setCursor(0,20);  display.print ("CH2 " + String(CH2_leftEnd) + "%" + " " + String(CH2_rightEnd) + "%");
  display.setCursor(0,29);  display.print ("CH3 " + String(CH3_leftEnd) + "%" + " " + String(CH3_rightEnd) + "%");
  display.setCursor(0,38);  display.print ("CH4 " + String(CH4_leftEnd) + "%" + ">" + String(CH4_rightEnd) + "%");
  refresh();
}




void updateEndPoints(int x)
{
  switch(x)
  {
    case -1:
    endPointsLine4_2();
    line = 7;
    break;

    case 0:
    endPointsLine1();
    break;

    case 1:
    endPointsLine1_2();
    break;

    case 2:
    endPointsLine2();
    break;

    case 3:
    endPointsLine2_2();
    break;

    case 4:
    endPointsLine3();
    break;

    case 5:
    endPointsLine3_2();
    break;

    case 6:
    endPointsLine4();
    break;

    case 7:
    endPointsLine4_2();
    break;

    case 8:
    endPointsLine1();
    line = 0;
  }
}

void navigateEndPointsMenu()
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
      setEndpoints();
    }
      
    if (downPressed)
    {
      delay(buttonDelay);

      line++;
      movementBuzz();
      updateEndPoints(line);
    }
      
    if (upPressed)
    {
      delay(buttonDelay);

      line--;
      movementBuzz();
      updateEndPoints(line);
    }
      
    if (cancelPressed)
    {
      delay(buttonDelay);

      cancelBuzz();
      saveEndpoints();
      break;
    }
  }

  line = 1;
  updateFunctionMenu(line);

}


void setEndpoints()
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
        if (CH1_leftEnd < 120)
        {
          CH1_leftEnd++;
          CH1_MIN = 255*((100-CH1_leftEnd)/100);
        }
        updateEndPoints(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (CH1_leftEnd > 0)
        {
          CH1_leftEnd--;
          CH1_MIN = 255*((100-CH1_leftEnd)/100);
        }
        updateEndPoints(line);
      }

      if (cancelPressed)
      {
        cancelBuzz();
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
        if (CH1_rightEnd < 120)
        {
          CH1_rightEnd++;
          CH1_MAX = 255 * (CH1_rightEnd/100); 
        }
        updateEndPoints(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (CH1_rightEnd > 0)
        {
          CH1_rightEnd--;
          CH1_MAX = 255 * (CH1_rightEnd/100); 
        }
        updateEndPoints(line);
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
        if (CH2_leftEnd < 120)
        {
          CH2_leftEnd++;
          CH2_MIN = 255*((100-CH2_leftEnd)/100);
        }
        updateEndPoints(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (CH2_leftEnd > 0)
        {
          CH2_leftEnd--;
          CH2_MIN = 255*((100-CH2_leftEnd)/100);
        }
        updateEndPoints(line);
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
        if (CH2_rightEnd < 120)
        {
          CH2_rightEnd++;
          CH2_MAX = 255 * (CH2_rightEnd/100); 
        }
        updateEndPoints(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (CH2_rightEnd > 0)
        {
          CH2_rightEnd--;
          CH2_MAX = 255 * (CH2_rightEnd/100); 
        }
        updateEndPoints(line);
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
        if (CH3_leftEnd < 120)
        {
          CH3_leftEnd++;
          CH3_MIN = 255*((100-CH3_leftEnd)/100);
        }
        updateEndPoints(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (CH3_leftEnd > 0)
        {
          CH3_leftEnd--;
          CH3_MIN = 255*((100-CH3_leftEnd)/100); 
        }
        updateEndPoints(line);
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
        if (CH3_rightEnd < 120)
        {
          CH3_rightEnd++;
          CH3_MAX = 255 * (CH3_rightEnd/100); 
        }
        updateEndPoints(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (CH3_rightEnd > 0)
        {
          CH3_rightEnd--;
          CH3_MAX = 255 * (CH3_rightEnd/100);
        }
        updateEndPoints(line);
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
        if (CH4_leftEnd < 120)
        {
          CH4_leftEnd++;
          CH4_MIN = 255*((100-CH4_leftEnd)/100); 
        }
        updateEndPoints(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (CH4_leftEnd > 0)
        {
          CH4_leftEnd--; 
          CH4_MIN = 255*((100-CH4_leftEnd)/100); 
        }
        updateEndPoints(line);
      }

      if (cancelPressed)
      {
        cancelBuzz();
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
        if (CH4_rightEnd < 120)
        {
          CH4_rightEnd++;
          CH4_MAX = 255 * (CH4_rightEnd/100); 
        }
        updateEndPoints(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (CH4_rightEnd > 0)
        {
          CH4_rightEnd--;
          CH4_MAX = 255 * (CH4_rightEnd/100); 
        }
        updateEndPoints(line);
      }

      if (cancelPressed)
      {
        cancelBuzz();
        break;
      }
    }
    
  }

  cancelBuzz();
  updateEndPoints(line);


}


void saveEndpoints()
{
  if (Model1_Sel == "(*)")
  {
    MODEL_1_CH1_LEFTEND_EEPROM = EEPROM.put(11,CH1_leftEnd);
    MODEL_1_CH2_LEFTEND_EEPROM = EEPROM.put(12,CH2_leftEnd);
    MODEL_1_CH3_LEFTEND_EEPROM = EEPROM.put(13,CH3_leftEnd);
    MODEL_1_CH4_LEFTEND_EEPROM = EEPROM.put(14,CH4_leftEnd);

    MODEL_1_CH1_RIGHTEND_EEPROM = EEPROM.put(21,CH1_rightEnd);
    MODEL_1_CH2_RIGHTEND_EEPROM = EEPROM.put(22,CH2_rightEnd);
    MODEL_1_CH3_RIGHTEND_EEPROM = EEPROM.put(23,CH3_rightEnd);
    MODEL_1_CH4_RIGHTEND_EEPROM = EEPROM.put(24,CH4_rightEnd);
  }

  else if (Model2_Sel == "(*)")
  {
    MODEL_2_CH1_LEFTEND_EEPROM = EEPROM.put(131,CH1_leftEnd);
    MODEL_2_CH2_LEFTEND_EEPROM = EEPROM.put(132,CH2_leftEnd);
    MODEL_2_CH3_LEFTEND_EEPROM = EEPROM.put(133,CH3_leftEnd);
    MODEL_2_CH4_LEFTEND_EEPROM = EEPROM.put(134,CH4_leftEnd);

    MODEL_2_CH1_RIGHTEND_EEPROM = EEPROM.put(141,CH1_rightEnd);
    MODEL_2_CH2_RIGHTEND_EEPROM = EEPROM.put(142,CH2_rightEnd);
    MODEL_2_CH3_RIGHTEND_EEPROM = EEPROM.put(143,CH3_rightEnd);
    MODEL_2_CH4_RIGHTEND_EEPROM = EEPROM.put(144,CH4_rightEnd);
  }

  else if (Model3_Sel == "(*)")
  {
    MODEL_3_CH1_LEFTEND_EEPROM = EEPROM.put(251,CH1_leftEnd);
    MODEL_3_CH2_LEFTEND_EEPROM = EEPROM.put(252,CH2_leftEnd);
    MODEL_3_CH3_LEFTEND_EEPROM = EEPROM.put(253,CH3_leftEnd);
    MODEL_3_CH4_LEFTEND_EEPROM = EEPROM.put(254,CH4_leftEnd);

    MODEL_3_CH1_RIGHTEND_EEPROM = EEPROM.put(261,CH1_rightEnd);
    MODEL_3_CH2_RIGHTEND_EEPROM = EEPROM.put(262,CH2_rightEnd);
    MODEL_3_CH3_RIGHTEND_EEPROM = EEPROM.put(263,CH3_rightEnd);
    MODEL_3_CH4_RIGHTEND_EEPROM = EEPROM.put(264,CH4_rightEnd);
  }

  else if (Model4_Sel == "(*)")
  {
    MODEL_4_CH1_LEFTEND_EEPROM = EEPROM.put(371,CH1_leftEnd);
    MODEL_4_CH2_LEFTEND_EEPROM = EEPROM.put(372,CH2_leftEnd);
    MODEL_4_CH3_LEFTEND_EEPROM = EEPROM.put(373,CH3_leftEnd);
    MODEL_4_CH4_LEFTEND_EEPROM = EEPROM.put(374,CH4_leftEnd);

    MODEL_4_CH1_RIGHTEND_EEPROM = EEPROM.put(381,CH1_rightEnd);
    MODEL_4_CH2_RIGHTEND_EEPROM = EEPROM.put(382,CH2_rightEnd);
    MODEL_4_CH3_RIGHTEND_EEPROM = EEPROM.put(383,CH3_rightEnd);
    MODEL_4_CH4_RIGHTEND_EEPROM = EEPROM.put(384,CH4_rightEnd);
  }

  else if (Model5_Sel == "(*)")
  {
    MODEL_5_CH1_LEFTEND_EEPROM = EEPROM.put(491,CH1_leftEnd);
    MODEL_5_CH2_LEFTEND_EEPROM = EEPROM.put(492,CH2_leftEnd);
    MODEL_5_CH3_LEFTEND_EEPROM = EEPROM.put(493,CH3_leftEnd);
    MODEL_5_CH4_LEFTEND_EEPROM = EEPROM.put(494,CH4_leftEnd);

    MODEL_5_CH1_RIGHTEND_EEPROM = EEPROM.put(501,CH1_rightEnd);
    MODEL_5_CH2_RIGHTEND_EEPROM = EEPROM.put(502,CH2_rightEnd);
    MODEL_5_CH3_RIGHTEND_EEPROM = EEPROM.put(503,CH3_rightEnd);
    MODEL_5_CH4_RIGHTEND_EEPROM = EEPROM.put(504,CH4_rightEnd);

  }

}

void loadEndpoints()
{
  if (Model1_Sel == "(*)")
  {
    
    CH1_leftEnd = EEPROM.read(11);
    CH2_leftEnd = EEPROM.read(12);
    CH3_leftEnd = EEPROM.read(13);
    CH4_leftEnd = EEPROM.read(14);

    CH1_rightEnd = EEPROM.read(21);
    CH2_rightEnd = EEPROM.read(22);
    CH3_rightEnd = EEPROM.read(23);
    CH4_rightEnd = EEPROM.read(24);

    CH1_MIN = 255*((100-CH1_leftEnd)/100);
    CH2_MIN = 255*((100-CH2_leftEnd)/100);
    CH3_MIN = 255*((100-CH3_leftEnd)/100);
    CH4_MIN = 255*((100-CH4_leftEnd)/100);
    
    CH1_MAX = 255 * (CH1_rightEnd/100); 
    CH2_MAX = 255 * (CH2_rightEnd/100); 
    CH3_MAX = 255 * (CH3_rightEnd/100); 
    CH4_MAX = 255 * (CH4_rightEnd/100); 
  }

  else if (Model2_Sel == "(*)")
  {
    CH1_leftEnd = EEPROM.read(131);
    CH2_leftEnd = EEPROM.read(132);
    CH3_leftEnd = EEPROM.read(133);
    CH4_leftEnd = EEPROM.read(134);

    CH1_rightEnd = EEPROM.read(141);
    CH2_rightEnd = EEPROM.read(142);
    CH3_rightEnd = EEPROM.read(143);
    CH4_rightEnd = EEPROM.read(144);

    CH1_MIN = 255*((100-CH1_leftEnd)/100);
    CH2_MIN = 255*((100-CH2_leftEnd)/100);
    CH3_MIN = 255*((100-CH3_leftEnd)/100);
    CH4_MIN = 255*((100-CH4_leftEnd)/100);
    
    CH1_MAX = 255 * (CH1_rightEnd/100); 
    CH2_MAX = 255 * (CH2_rightEnd/100); 
    CH3_MAX = 255 * (CH3_rightEnd/100); 
    CH4_MAX = 255 * (CH4_rightEnd/100); 
  }

  else if (Model3_Sel == "(*)")
  {
    CH1_leftEnd = EEPROM.read(251);
    CH2_leftEnd = EEPROM.read(252);
    CH3_leftEnd = EEPROM.read(253);
    CH4_leftEnd = EEPROM.read(254);

    CH1_rightEnd = EEPROM.read(261);
    CH2_rightEnd = EEPROM.read(262);
    CH3_rightEnd = EEPROM.read(263);
    CH4_rightEnd = EEPROM.read(264);

    CH1_MIN = 255*((100-CH1_leftEnd)/100);
    CH2_MIN = 255*((100-CH2_leftEnd)/100);
    CH3_MIN = 255*((100-CH3_leftEnd)/100);
    CH4_MIN = 255*((100-CH4_leftEnd)/100);
    
    CH1_MAX = 255 * (CH1_rightEnd/100); 
    CH2_MAX = 255 * (CH2_rightEnd/100); 
    CH3_MAX = 255 * (CH3_rightEnd/100); 
    CH4_MAX = 255 * (CH4_rightEnd/100); 
  }

  else if (Model4_Sel == "(*)")
  {
    CH1_leftEnd = EEPROM.read(371);
    CH2_leftEnd = EEPROM.read(372);
    CH3_leftEnd = EEPROM.read(373);
    CH4_leftEnd = EEPROM.read(374);

    CH1_rightEnd = EEPROM.read(381);
    CH2_rightEnd = EEPROM.read(382);
    CH3_rightEnd = EEPROM.read(383);
    CH4_rightEnd = EEPROM.read(384);

    CH1_MIN = 255*((100-CH1_leftEnd)/100);
    CH2_MIN = 255*((100-CH2_leftEnd)/100);
    CH3_MIN = 255*((100-CH3_leftEnd)/100);
    CH4_MIN = 255*((100-CH4_leftEnd)/100);
    
    CH1_MAX = 255 * (CH1_rightEnd/100); 
    CH2_MAX = 255 * (CH2_rightEnd/100); 
    CH3_MAX = 255 * (CH3_rightEnd/100); 
    CH4_MAX = 255 * (CH4_rightEnd/100); 
  }

  else if (Model5_Sel == "(*)")
  {
    CH1_leftEnd = EEPROM.read(491);
    CH2_leftEnd = EEPROM.read(492);
    CH3_leftEnd = EEPROM.read(493);
    CH4_leftEnd = EEPROM.read(494);

    CH1_rightEnd = EEPROM.read(501);
    CH2_rightEnd = EEPROM.read(502);
    CH3_rightEnd = EEPROM.read(503);
    CH4_rightEnd = EEPROM.read(504);

    CH1_MIN = 255*((100-CH1_leftEnd)/100);
    CH2_MIN = 255*((100-CH2_leftEnd)/100);
    CH3_MIN = 255*((100-CH3_leftEnd)/100);
    CH4_MIN = 255*((100-CH4_leftEnd)/100);
    
    CH1_MAX = 255 * (CH1_rightEnd/100); 
    CH2_MAX = 255 * (CH2_rightEnd/100); 
    CH3_MAX = 255 * (CH3_rightEnd/100); 
    CH4_MAX = 255 * (CH4_rightEnd/100); 
  }


}
