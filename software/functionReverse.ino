String CH1_REV = "[NORMAL]";
String CH2_REV = "[NORMAL]";
String CH3_REV = "[NORMAL]";
String CH4_REV = "[NORMAL]";
String CH5_REV = "[NORMAL]";
String CH6_REV = "[NORMAL]";

int CH1_REV_SAVE = 1;  //1 is normal by default, 0 is reverse
int CH2_REV_SAVE = 1;
int CH3_REV_SAVE = 1;
int CH4_REV_SAVE = 1;
int CH5_REV_SAVE = 1;
int CH6_REV_SAVE = 1;

//Function Reverse EEPROM
byte MODEL_1_CH1_REV_EEPROM;
byte MODEL_1_CH2_REV_EEPROM;
byte MODEL_1_CH3_REV_EEPROM;
byte MODEL_1_CH4_REV_EEPROM;
byte MODEL_1_CH5_REV_EEPROM;
byte MODEL_1_CH6_REV_EEPROM;

byte MODEL_2_CH1_REV_EEPROM;
byte MODEL_2_CH2_REV_EEPROM;
byte MODEL_2_CH3_REV_EEPROM;
byte MODEL_2_CH4_REV_EEPROM;
byte MODEL_2_CH5_REV_EEPROM;
byte MODEL_2_CH6_REV_EEPROM;

byte MODEL_3_CH1_REV_EEPROM;
byte MODEL_3_CH2_REV_EEPROM;
byte MODEL_3_CH3_REV_EEPROM;
byte MODEL_3_CH4_REV_EEPROM;
byte MODEL_3_CH5_REV_EEPROM;
byte MODEL_3_CH6_REV_EEPROM;

byte MODEL_4_CH1_REV_EEPROM;
byte MODEL_4_CH2_REV_EEPROM;
byte MODEL_4_CH3_REV_EEPROM;
byte MODEL_4_CH4_REV_EEPROM;
byte MODEL_4_CH5_REV_EEPROM;
byte MODEL_4_CH6_REV_EEPROM;

byte MODEL_5_CH1_REV_EEPROM;
byte MODEL_5_CH2_REV_EEPROM;
byte MODEL_5_CH3_REV_EEPROM;
byte MODEL_5_CH4_REV_EEPROM;
byte MODEL_5_CH5_REV_EEPROM;
byte MODEL_5_CH6_REV_EEPROM;




void reverseHeader()
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(40,0);  display.print("REVERSE");
  display.drawLine (0,9,128,9, WHITE);
}


void reverseLine1()
{
  reverseHeader();
  display.setCursor(0,11);  display.print (">CH1->" + CH1_REV);
  display.setCursor(0,20);  display.print (" CH2->" + CH2_REV);
  display.setCursor(0,29);  display.print (" CH3->" + CH3_REV);
  display.setCursor(0,38);  display.print (" CH4->" + CH4_REV);
  display.setCursor(0,47);  display.print (" CH5->" + CH5_REV);
  refresh();
}

void reverseLine2()
{
  reverseHeader();
  display.setCursor(0,11);  display.print (" CH1->" + CH1_REV);
  display.setCursor(0,20);  display.print (">CH2->" + CH2_REV);
  display.setCursor(0,29);  display.print (" CH3->" + CH3_REV);
  display.setCursor(0,38);  display.print (" CH4->" + CH4_REV);
  display.setCursor(0,47);  display.print (" CH5->" + CH5_REV);
  refresh();
}

void reverseLine3()
{
  reverseHeader();
  display.setCursor(0,11);  display.print (" CH1->" + CH1_REV);
  display.setCursor(0,20);  display.print (" CH2->" + CH2_REV);
  display.setCursor(0,29);  display.print (">CH3->" + CH3_REV);
  display.setCursor(0,38);  display.print (" CH4->" + CH4_REV);
  display.setCursor(0,47);  display.print (" CH5->" + CH5_REV);
  refresh();
}

void reverseLine4()
{
  reverseHeader();
  display.setCursor(0,11);  display.print (" CH1->" + CH1_REV);
  display.setCursor(0,20);  display.print (" CH2->" + CH2_REV);
  display.setCursor(0,29);  display.print (" CH3->" + CH3_REV);
  display.setCursor(0,38);  display.print (">CH4->" + CH4_REV);
  display.setCursor(0,47);  display.print (" CH5->" + CH5_REV);
  refresh();
}

void reverseLine5()
{
  reverseHeader();
  display.setCursor(0,11);  display.print (" CH1->" + CH1_REV);
  display.setCursor(0,20);  display.print (" CH2->" + CH2_REV);
  display.setCursor(0,29);  display.print (" CH3->" + CH3_REV);
  display.setCursor(0,38);  display.print (" CH4->" + CH4_REV);
  display.setCursor(0,47);  display.print (">CH5->" + CH5_REV);
  refresh();
}

void reverseLine6()
{
  reverseHeader();
  display.setCursor(0,11); display.print(">CH6->" + CH6_REV);
  refresh();
}


void updateReverse(int x)
{
  switch(x)
  {
    case -1:
    reverseLine6();
    line = 6;
    break;

    case 0:
    reverseLine1();
    break;

    case 1:
    reverseLine2();
    break;

    case 2:
    reverseLine3();
    break;

    case 3:
    reverseLine4();
    break;

    case 4:
    reverseLine5();
    break;

    case 5:
    reverseLine6();
    break;

    case 6:
    reverseLine1();
    line = 0;
  }
}

void navigateReverseMenu()
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
      setReverse();
    }
    
    if (downPressed)
    {
      delay(buttonDelay);

      line++;
      movementBuzz();
      updateReverse(line);
    }
      
    if (upPressed)
    {
      delay(buttonDelay);

      line--;
      movementBuzz();
      updateReverse(line);
    }
      
    if (cancelPressed)
    {
      delay(buttonDelay);
      
      cancelBuzz();
      saveReverse();
      break;
    }
  }

  line = 0;
  updateFunctionMenu(line);

}


void setReverse()
{
  if (line == 0)
  {
    if (CH1_REV.equals("[NORMAL]"))
    {
      CH1_REV = "[REVERSE]";
      CH1_REV_SAVE = 0;
      
      CH1_MIN = 255;
      CH1_MAX = 0;

      updateReverse(line);
    }
  
    else if (CH1_REV.equals("[REVERSE]"))
    {
      CH1_REV = "[NORMAL]";
      CH1_REV_SAVE = 1;

      CH1_MIN = 0;
      CH1_MAX = 255;

      updateReverse(line);
    }
  }

  if (line == 1)
  {
    if (CH2_REV == "[NORMAL]")
    {
      CH2_REV = "[REVERSE]";
      CH2_REV_SAVE = 0;
      
      CH2_MIN = 255;
      CH2_MAX = 0;
      
      updateReverse(line);
    }
    else if (CH2_REV == "[REVERSE]")
    {
      CH2_REV = "[NORMAL]";
      CH2_REV_SAVE = 1;

      CH2_MIN = 0;
      CH2_MAX = 255;

      updateReverse(line);
    }
  }
      
  if (line == 2)
  {
    if (CH3_REV == "[NORMAL]")
    {
      CH3_REV = "[REVERSE]";
      CH3_REV_SAVE = 0;

      CH3_MIN = 255;
      CH3_MAX = 0;

      updateReverse(line);
    }
    else if (CH3_REV == "[REVERSE]")
    {
      CH3_REV = "[NORMAL]";
      CH3_REV_SAVE = 1;

      CH3_MIN = 0;
      CH3_MAX = 255;

      updateReverse(line);
    }
  }

  if (line == 3)
  {
    if (CH4_REV == "[NORMAL]")
    {
      CH4_REV = "[REVERSE]";
      CH4_REV_SAVE = 0;

      CH4_MIN = 255;
      CH4_MAX = 0;

      updateReverse(line);
    }
    else if (CH4_REV == "[REVERSE]")
    {
      CH4_REV = "[NORMAL]";
      CH4_REV_SAVE = 1;

      CH4_MIN = 0;
      CH4_MAX = 255;
      
      updateReverse(line);
    }
  }

  if (line == 4)
  {
    if (CH5_REV == "[NORMAL]")
    {
      CH5_REV = "[REVERSE]";
      CH5_REV_SAVE = 0;

      CH5_MIN = 255;
      CH5_MAX = 0;

      updateReverse(line);
    }
    else if (CH5_REV == "[REVERSE]")
    {
      CH5_REV = "[NORMAL]";
      CH5_REV_SAVE = 1;

      CH5_MIN = 0;
      CH5_MAX = 255;

      
      updateReverse(line);
    }
  }

  if (line == 5)
  {
    if (CH6_REV == "[NORMAL]")
    {
      CH6_REV = "[REVERSE]";
      CH6_REV_SAVE = 0;

      CH6_MIN = 255;
      CH6_MAX = 0;

      updateReverse(line);
    }

    else if (CH6_REV == "[REVERSE]")
    {
      CH6_REV = "[NORMAL]";
      CH6_REV_SAVE = 1;

      CH6_MIN = 0;
      CH6_MAX = 255;

      updateReverse(line);
    }
  }

}


void saveReverse()
{
  if (Model1_Sel == "(*)")
  {
    MODEL_1_CH1_REV_EEPROM = EEPROM.put(1,CH1_REV_SAVE); //String
    MODEL_1_CH2_REV_EEPROM = EEPROM.put(2,CH2_REV_SAVE); //String
    MODEL_1_CH3_REV_EEPROM = EEPROM.put(3,CH3_REV_SAVE); //String
    MODEL_1_CH4_REV_EEPROM = EEPROM.put(4,CH4_REV_SAVE); //String
    MODEL_1_CH5_REV_EEPROM = EEPROM.put(5,CH5_REV_SAVE); //String
    MODEL_1_CH6_REV_EEPROM = EEPROM.put(6,CH6_REV_SAVE); //String
  }

  else if (Model2_Sel == "(*)")
  {
    MODEL_2_CH1_REV_EEPROM = EEPROM.put(121,CH1_REV_SAVE); //String
    MODEL_2_CH2_REV_EEPROM = EEPROM.put(122,CH2_REV_SAVE); //String
    MODEL_2_CH3_REV_EEPROM = EEPROM.put(123,CH3_REV_SAVE); //String
    MODEL_2_CH4_REV_EEPROM = EEPROM.put(124,CH4_REV_SAVE); //String
    MODEL_2_CH5_REV_EEPROM = EEPROM.put(125,CH5_REV_SAVE); //String
    MODEL_2_CH6_REV_EEPROM = EEPROM.put(126,CH6_REV_SAVE); //String
  }

  else if (Model3_Sel == "(*)")
  {
    MODEL_3_CH1_REV_EEPROM = EEPROM.put(241,CH1_REV_SAVE); //String
    MODEL_3_CH2_REV_EEPROM = EEPROM.put(242,CH2_REV_SAVE); //String
    MODEL_3_CH3_REV_EEPROM = EEPROM.put(243,CH3_REV_SAVE); //String
    MODEL_3_CH4_REV_EEPROM = EEPROM.put(244,CH4_REV_SAVE); //String
    MODEL_3_CH5_REV_EEPROM = EEPROM.put(245,CH5_REV_SAVE); //String
    MODEL_3_CH6_REV_EEPROM = EEPROM.put(246,CH6_REV_SAVE); //String
  }

  else if (Model4_Sel == "(*)")
  {
    MODEL_4_CH1_REV_EEPROM = EEPROM.put(361,CH1_REV_SAVE); //String
    MODEL_4_CH2_REV_EEPROM = EEPROM.put(362,CH2_REV_SAVE); //String
    MODEL_4_CH3_REV_EEPROM = EEPROM.put(363,CH3_REV_SAVE); //String
    MODEL_4_CH4_REV_EEPROM = EEPROM.put(364,CH4_REV_SAVE); //String
    MODEL_4_CH5_REV_EEPROM = EEPROM.put(365,CH5_REV_SAVE); //String
    MODEL_4_CH6_REV_EEPROM = EEPROM.put(366,CH6_REV_SAVE); //String
  }

  else if (Model5_Sel == "(*)")
  {
    MODEL_5_CH1_REV_EEPROM = EEPROM.put(481,CH1_REV_SAVE); //String
    MODEL_5_CH2_REV_EEPROM = EEPROM.put(482,CH2_REV_SAVE); //String
    MODEL_5_CH3_REV_EEPROM = EEPROM.put(483,CH3_REV_SAVE); //String
    MODEL_5_CH4_REV_EEPROM = EEPROM.put(484,CH4_REV_SAVE); //String
    MODEL_5_CH5_REV_EEPROM = EEPROM.put(485,CH5_REV_SAVE); //String
    MODEL_5_CH6_REV_EEPROM = EEPROM.put(486,CH6_REV_SAVE); //String
  }
}

void loadReverse()
{
  if (Model1_Sel == "(*)")
  {
    MODEL_1_CH1_REV_EEPROM = EEPROM.read(1); //String
    MODEL_1_CH2_REV_EEPROM = EEPROM.read(2); //String
    MODEL_1_CH3_REV_EEPROM = EEPROM.read(3); //String
    MODEL_1_CH4_REV_EEPROM = EEPROM.read(4); //String
    MODEL_1_CH5_REV_EEPROM = EEPROM.read(5); //String
    MODEL_1_CH6_REV_EEPROM = EEPROM.read(6); //String

    if (MODEL_1_CH1_REV_EEPROM == 0)
    {
      CH1_REV = "[REVERSE]";

      CH1_MIN = 255;
      CH1_MAX = 0;
    }

    else if (MODEL_1_CH1_REV_EEPROM == 1)
    {
      CH1_REV = "[NORMAL]";

      CH1_MIN = 0;
      CH1_MAX = 255;
    }

    if (MODEL_1_CH2_REV_EEPROM == 0)
    {
      CH2_REV = "[REVERSE]";
      
      CH2_MIN = 255;
      CH2_MAX = 0;
    }

    else if (MODEL_1_CH2_REV_EEPROM == 1)
    {
      CH2_REV = "[NORMAL]";

      CH2_MIN = 0;
      CH2_MAX = 255;
    }

    if (MODEL_1_CH3_REV_EEPROM == 0)
    {
      CH3_REV = "[REVERSE]";

      CH3_MIN = 255;
      CH3_MAX = 0;
    }

    else if (MODEL_1_CH3_REV_EEPROM == 1)
    {
      CH3_REV = "[NORMAL]";

      CH3_MIN = 0;
      CH3_MAX = 255;
    }

    if (MODEL_1_CH4_REV_EEPROM == 0)
    {
      CH4_REV = "[REVERSE]";

      CH4_MIN = 255;
      CH4_MAX = 0;
    }

    else if (MODEL_1_CH4_REV_EEPROM == 1)
    {
      CH4_REV = "[NORMAL]";

      CH4_MIN = 0;
      CH4_MAX = 255;
    }

    if (MODEL_1_CH5_REV_EEPROM == 0)
    {
      CH5_REV = "[REVERSE]";

      CH5_MIN = 255;
      CH5_MAX = 0;
    }

    else if (MODEL_1_CH5_REV_EEPROM == 1)
    {
      CH5_REV = "[NORMAL]";

      CH5_MIN = 0;
      CH5_MAX = 255;
    }

    if (MODEL_1_CH6_REV_EEPROM == 0)
    {
      CH6_REV = "[REVERSE]";

      CH6_MIN = 255;
      CH6_MAX = 0;
    }

    else if (MODEL_1_CH6_REV_EEPROM == 1)
    {
      CH6_REV = "[NORMAL]";

      CH6_MIN = 0;
      CH6_MAX = 255;
    }

  }

  else if (Model2_Sel == "(*)")
  {
    MODEL_2_CH1_REV_EEPROM = EEPROM.read(121); //String
    MODEL_2_CH2_REV_EEPROM = EEPROM.read(122); //String
    MODEL_2_CH3_REV_EEPROM = EEPROM.read(123); //String
    MODEL_2_CH4_REV_EEPROM = EEPROM.read(124); //String
    MODEL_2_CH5_REV_EEPROM = EEPROM.read(125); //String
    MODEL_2_CH6_REV_EEPROM = EEPROM.read(126); //String

    if (MODEL_2_CH1_REV_EEPROM == 0)
    {
      CH1_REV = "[REVERSE]";

      CH1_MIN = 255;
      CH1_MAX = 0;
    }

    else if (MODEL_2_CH1_REV_EEPROM == 1)
    {
      CH1_REV = "[NORMAL]";

      CH1_MIN = 0;
      CH1_MAX = 255;
    }

    if (MODEL_2_CH2_REV_EEPROM == 0)
    {
      CH2_REV = "[REVERSE]";

      CH2_MIN = 255;
      CH2_MAX = 0;
    }

    else if (MODEL_2_CH2_REV_EEPROM == 1)
    {
      CH2_REV = "[NORMAL]";

      CH2_MIN = 0;
      CH2_MAX = 255;
    }

    if (MODEL_2_CH3_REV_EEPROM == 0)
    {
      CH3_REV = "[REVERSE]";

      CH3_MIN = 255;
      CH3_MAX = 0;
    }

    else if (MODEL_2_CH3_REV_EEPROM == 1)
    {
      CH3_REV = "[NORMAL]";

      CH3_MIN = 0;
      CH3_MAX = 255;
    }

    if (MODEL_2_CH4_REV_EEPROM == 0)
    {
      CH4_REV = "[REVERSE]";

      CH4_MIN = 255;
      CH4_MAX = 0;
    }

    else if (MODEL_2_CH4_REV_EEPROM == 1)
    {
      CH4_REV = "[NORMAL]";

      CH4_MIN = 0;
      CH4_MAX = 255;
    }

    if (MODEL_2_CH5_REV_EEPROM == 0)
    {
      CH5_REV = "[REVERSE]";

      CH5_MIN = 255;
      CH5_MAX = 0;
    }

    else if (MODEL_2_CH5_REV_EEPROM == 1)
    {
      CH5_REV = "[NORMAL]";

      CH5_MIN = 0;
      CH5_MAX = 255;
    }

    if (MODEL_2_CH6_REV_EEPROM == 0)
    {
      CH6_REV = "[REVERSE]";

      CH6_MIN = 255;
      CH6_MAX = 0;
    }

    else if (MODEL_2_CH6_REV_EEPROM == 1)
    {
      CH6_REV = "[NORMAL]";

      CH6_MIN = 0;
      CH6_MAX = 255;
    }

  }

  else if (Model3_Sel == "(*)")
  {
    MODEL_3_CH1_REV_EEPROM = EEPROM.read(241); //String
    MODEL_3_CH2_REV_EEPROM = EEPROM.read(242); //String
    MODEL_3_CH3_REV_EEPROM = EEPROM.read(243); //String
    MODEL_3_CH4_REV_EEPROM = EEPROM.read(244); //String
    MODEL_3_CH5_REV_EEPROM = EEPROM.read(245); //String
    MODEL_3_CH6_REV_EEPROM = EEPROM.read(246); //String

    if (MODEL_3_CH1_REV_EEPROM == 0)
    {
      CH1_REV = "[REVERSE]";

      CH1_MIN = 255;
      CH1_MAX = 0;    
    }

    else if (MODEL_3_CH1_REV_EEPROM == 1)
    {
      CH1_REV = "[NORMAL]";

      CH1_MIN = 0;
      CH1_MAX = 255;
    }

    if (MODEL_3_CH2_REV_EEPROM == 0)
    {
      CH2_REV = "[REVERSE]";

      CH2_MIN = 255;
      CH2_MAX = 0;
    }

    else if (MODEL_3_CH2_REV_EEPROM == 1)
    {
      CH2_REV = "[NORMAL]";

      CH2_MIN = 0;
      CH2_MAX = 255;      
    }

    if (MODEL_3_CH3_REV_EEPROM == 0)
    {
      CH3_REV = "[REVERSE]";

      CH3_MIN = 255;
      CH3_MAX = 0;
    }

    else if (MODEL_3_CH3_REV_EEPROM == 1)
    {
      CH3_REV = "[NORMAL]";

      CH3_MIN = 0;
      CH3_MAX = 255;      
    }

    if (MODEL_3_CH4_REV_EEPROM == 0)
    {
      CH4_REV = "[REVERSE]";

      CH4_MIN = 255;
      CH4_MAX = 0;
    }

    else if (MODEL_3_CH4_REV_EEPROM == 1)
    {
      CH4_REV = "[NORMAL]";

      CH4_MIN = 0;
      CH4_MAX = 255;      
    }

    if (MODEL_3_CH5_REV_EEPROM == 0)
    {
      CH5_REV = "[REVERSE]";

      CH5_MIN = 255;
      CH5_MAX = 0;
    }

    else if (MODEL_3_CH5_REV_EEPROM == 1)
    {
      CH5_REV = "[NORMAL]";

      CH5_MIN = 0;
      CH5_MAX = 255;      
    }

    if (MODEL_3_CH6_REV_EEPROM == 0)
    {
      CH6_REV = "[REVERSE]";

      CH6_MIN = 255;
      CH6_MAX = 0;
    }

    else if (MODEL_3_CH6_REV_EEPROM == 1)
    {
      CH6_REV = "[NORMAL]";

      CH6_MIN = 0;
      CH6_MAX = 255;      
    }
  }

  else if (Model4_Sel == "(*)")
  {
    MODEL_4_CH1_REV_EEPROM = EEPROM.read(361); //String
    MODEL_4_CH2_REV_EEPROM = EEPROM.read(362); //String
    MODEL_4_CH3_REV_EEPROM = EEPROM.read(363); //String
    MODEL_4_CH4_REV_EEPROM = EEPROM.read(364); //String
    MODEL_4_CH5_REV_EEPROM = EEPROM.read(365); //String
    MODEL_4_CH6_REV_EEPROM = EEPROM.read(366); //String

    if (MODEL_4_CH1_REV_EEPROM == 0)
    {
      CH1_REV = "[REVERSE]";

      CH1_MIN = 255;
      CH1_MAX = 0;
    }

    else if (MODEL_4_CH1_REV_EEPROM == 1)
    {
      CH1_REV = "[NORMAL]";

      CH1_MIN = 0;
      CH1_MAX = 255;
    }

    if (MODEL_4_CH2_REV_EEPROM == 0)
    {
      CH2_REV = "[REVERSE]";

      CH2_MIN = 255;
      CH2_MAX = 0;
    }

    else if (MODEL_4_CH2_REV_EEPROM == 1)
    {
      CH2_REV = "[NORMAL]";

      CH2_MIN = 0;
      CH2_MAX = 255;
    }

    if (MODEL_4_CH3_REV_EEPROM == 0)
    {
      CH3_REV = "[REVERSE]";

      CH3_MIN = 255;
      CH3_MAX = 0;
    }

    else if (MODEL_4_CH3_REV_EEPROM == 1)
    {
      CH3_REV = "[NORMAL]";

      CH3_MIN = 0;
      CH3_MAX = 255;
    }

    if (MODEL_4_CH4_REV_EEPROM == 0)
    {
      CH4_REV = "[REVERSE]";

      CH4_MIN = 255;
      CH4_MAX = 0;
    }

    else if (MODEL_4_CH4_REV_EEPROM == 1)
    {
      CH4_REV = "[NORMAL]";

      CH4_MIN = 0;
      CH4_MAX = 255;
    }

    if (MODEL_4_CH5_REV_EEPROM == 0)
    {
      CH5_REV = "[REVERSE]";

      CH5_MIN = 255;
      CH5_MAX = 0;
    }

    else if (MODEL_4_CH5_REV_EEPROM == 1)
    {
      CH5_REV = "[NORMAL]";

      CH5_MIN = 0;
      CH5_MAX = 255;
    }

    if (MODEL_4_CH6_REV_EEPROM == 0)
    {
      CH6_REV = "[REVERSE]";

      CH6_MIN = 255;
      CH6_MAX = 0;
    }

    else if (MODEL_4_CH6_REV_EEPROM == 1)
    {
      CH6_REV = "[NORMAL]";

      CH6_MIN = 0;
      CH6_MAX = 255;
    }
  }

  else if (Model5_Sel == "(*)")
  {
    MODEL_5_CH1_REV_EEPROM = EEPROM.read(481); //String
    MODEL_5_CH2_REV_EEPROM = EEPROM.read(482); //String
    MODEL_5_CH3_REV_EEPROM = EEPROM.read(483); //String
    MODEL_5_CH4_REV_EEPROM = EEPROM.read(484); //String
    MODEL_5_CH5_REV_EEPROM = EEPROM.read(485); //String
    MODEL_5_CH6_REV_EEPROM = EEPROM.read(486); //String

    if (MODEL_5_CH1_REV_EEPROM == 0)
    {
      CH1_REV = "[REVERSE]";

      CH1_MIN = 255;
      CH1_MAX = 0;
    }

    else if (MODEL_5_CH1_REV_EEPROM == 1)
    {
      CH1_REV = "[NORMAL]";

      CH1_MIN = 0;
      CH1_MAX = 255;
    }

    if (MODEL_5_CH2_REV_EEPROM == 0)
    {
      CH2_REV = "[REVERSE]";

      CH2_MIN = 255;
      CH2_MAX = 0;
    }

    else if (MODEL_5_CH2_REV_EEPROM == 1)
    {
      CH2_REV = "[NORMAL]";

      CH2_MIN = 0;
      CH2_MAX = 255;
    }

    if (MODEL_5_CH3_REV_EEPROM == 0)
    {
      CH3_REV = "[REVERSE]";

      CH3_MIN = 255;
      CH3_MAX = 0;
    }

    else if (MODEL_5_CH3_REV_EEPROM == 1)
    {
      CH3_REV = "[NORMAL]";

      CH3_MIN = 0;
      CH3_MAX = 255;
    }

    if (MODEL_5_CH4_REV_EEPROM == 0)
    {
      CH4_REV = "[REVERSE]";

      CH4_MIN = 255;
      CH4_MAX = 0;
    }

    else if (MODEL_5_CH4_REV_EEPROM == 1)
    {
      CH4_REV = "[NORMAL]";

      CH4_MIN = 0;
      CH4_MAX = 255;
    }

    if (MODEL_5_CH5_REV_EEPROM == 0)
    {
      CH5_REV = "[REVERSE]";

      CH5_MIN = 255;
      CH5_MAX = 0;
    }

    else if (MODEL_5_CH5_REV_EEPROM == 1)
    {
      CH5_REV = "[NORMAL]";

      CH5_MIN = 0;
      CH5_MAX = 255;
    }

    if (MODEL_5_CH6_REV_EEPROM == 0)
    {
      CH6_REV = "[REVERSE]";

      CH6_MIN = 255;
      CH6_MAX = 0;
    }

    else if (MODEL_5_CH6_REV_EEPROM == 1)
    {
      CH6_REV = "[NORMAL]";

      CH6_MIN = 0;
      CH6_MAX = 255;
    }
  }
  
}
