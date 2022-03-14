String CH5_AUX = "NULL";
String CH6_AUX = "NULL";

int CH5_AUX_SAVE = 0;  //String, 0 null, 1 SWA, 2 SWB, 3 SWC, 4 SWD, 5 VRA, 6, VRB
int CH6_AUX_SAVE = 0;


//Function Aux Channels EEPROM
byte MODEL_1_CH5_AUX_EEPROM;
byte MODEL_1_CH6_AUX_EEPROM;

byte MODEL_2_CH5_AUX_EEPROM;
byte MODEL_2_CH6_AUX_EEPROM;

byte MODEL_3_CH5_AUX_EEPROM;
byte MODEL_3_CH6_AUX_EEPROM;

byte MODEL_4_CH5_AUX_EEPROM;
byte MODEL_4_CH6_AUX_EEPROM;

byte MODEL_5_CH5_AUX_EEPROM;
byte MODEL_5_CH6_AUX_EEPROM;




void auxHeader()
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(28,0);  display.print("AUX CHANNELS");
  display.drawLine (0,9,128,9, WHITE);
}

void auxLine1()
{
  auxHeader();
  display.setCursor(0,11);  display.print (">CH5 " + CH5_AUX);
  display.setCursor(0,20);  display.print (" CH6 " + CH6_AUX);
  refresh();
}

void auxLine2()
{
  auxHeader();
  display.setCursor(0,11);  display.print (" CH5 " + CH5_AUX);
  display.setCursor(0,20);  display.print (">CH6 " + CH6_AUX);
  refresh();
}


void updateAux(int x)
{
  switch(x)
  {
    case -1:
    auxLine2();
    line = 1;
    break;

    case 0:
    auxLine1();
    break;

    case 1:
    auxLine2();
    break;

    case 2:
    auxLine1();
    line = 0;

  }
}

void navigateAuxMenu()
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
      setAux();
    }
      
    if (downPressed)
    {
      delay(buttonDelay);

      line++;
      movementBuzz();
      updateAux(line);
    }
      
    if (upPressed)
    {
      delay(buttonDelay);

      line--;
      movementBuzz();
      updateAux(line);
    }
      
    if (cancelPressed)
    {
      delay(buttonDelay);

      cancelBuzz();
      saveAux();
      break;
    }
  }

  line = 6;
  updateFunctionMenu(line);

}


void setAux()
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

      if (okPressed)
      {
        if (CH5_AUX.equals("NULL"))
        {
          CH5_AUX = "SwA";
          CH5_AUX_SAVE = 1;
          CH5_value = SWA_value;

          updateAux(line);
        }
        
        else if (CH5_AUX.equals("SwA"))
        {
          CH5_AUX = "SwB";
          CH5_AUX_SAVE = 2;
          CH5_value = SWB_value;

          updateAux(line);
        }
      
        else if (CH5_AUX.equals("SwB"))
        {
          CH5_AUX = "SwC";
          CH5_AUX_SAVE = 3;
          CH5_value = SWC_value;

          updateAux(line);
        }
        
        else if (CH5_AUX.equals("SwC"))
        {
          CH5_AUX = "SwD";
          CH5_AUX_SAVE = 4;
          CH5_value = SWD_value;

          updateAux(line);
        }
        
        else if (CH5_AUX.equals("SwD"))
        {
          CH5_AUX = "VrA";
          CH5_AUX_SAVE = 5;
          CH5_value = VRA_value;

          updateAux(line);
        }

        else if (CH5_AUX.equals("VrA"))
        {
          CH5_AUX = "VrB";
          CH5_AUX_SAVE = 6;
          CH5_value = VRB_value;

          updateAux(line);
        }

        else if (CH5_AUX.equals("VrB"))
        {
          CH5_AUX = "NULL";
          CH5_AUX_SAVE = 0;
          CH5_value = 0;

          updateAux(line);
        }
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

      if (okPressed)
      {
        if (CH6_AUX.equals("NULL"))
        {
          CH6_AUX = "SwA";
          CH6_AUX_SAVE = 1;
          CH6_value = SWA_value;

          updateAux(line);
        }
        
        else if (CH6_AUX.equals("SwA"))
        {
          CH6_AUX = "SwB";
          CH6_AUX_SAVE = 2;
          CH6_value = SWB_value;

          updateAux(line);
        }
        
        else if (CH6_AUX.equals("SwB"))
        {
          CH6_AUX = "SwC";
          CH6_AUX_SAVE = 3;
          CH6_value = SWC_value;

          updateAux(line);
        }
        
        else if (CH6_AUX.equals("SwC"))
        {
          CH6_AUX = "SwD";
          CH6_AUX_SAVE = 4;
          CH6_value = SWD_value;

          updateAux(line);
        }

        else if (CH6_AUX.equals("SwD"))
        {
          CH6_AUX = "VrA";
          CH6_AUX_SAVE = 5;
          CH6_value = VRA_value;

          updateAux(line);
        }

        else if (CH6_AUX.equals("VrA"))
        {
          CH6_AUX = "VrB";
          CH6_AUX_SAVE = 6;
          CH6_value = VRB_value;

          updateAux(line);
        }

        else if (CH6_AUX.equals("VrB"))
        {
          CH6_AUX = "NULL";
          CH6_AUX_SAVE = 0;
          CH6_value = 0;

          updateAux(line);
        }
      }

      if(cancelPressed)
      {
        cancelBuzz();
        break;
      }
    }
  }
    cancelBuzz();
    updateAux(line);
}

void saveAux()
{
  if (Model1_Sel == "(*)")
  {
    MODEL_1_CH5_AUX_EEPROM = EEPROM.put(71,CH5_AUX_SAVE); 
    MODEL_1_CH6_AUX_EEPROM = EEPROM.put(72,CH6_AUX_SAVE);
  }

  else if (Model2_Sel == "(*)")
  {
    MODEL_2_CH5_AUX_EEPROM = EEPROM.put(191,CH5_AUX_SAVE); 
    MODEL_2_CH6_AUX_EEPROM = EEPROM.put(192,CH6_AUX_SAVE);
  }

  else if (Model3_Sel == "(*)")
  {
    MODEL_3_CH5_AUX_EEPROM = EEPROM.put(311,CH5_AUX_SAVE); 
    MODEL_3_CH6_AUX_EEPROM = EEPROM.put(312,CH6_AUX_SAVE);
  }

  else if (Model4_Sel == "(*)")
  {
    MODEL_4_CH5_AUX_EEPROM = EEPROM.put(431,CH5_AUX_SAVE); 
    MODEL_4_CH6_AUX_EEPROM = EEPROM.put(432,CH6_AUX_SAVE);
  }

  else if (Model5_Sel == "(*)")
  {
    MODEL_5_CH5_AUX_EEPROM = EEPROM.put(551,CH5_AUX_SAVE); 
    MODEL_5_CH6_AUX_EEPROM = EEPROM.put(552,CH6_AUX_SAVE);
  }
}

void loadAux()
{
  if (Model1_Sel == "(*)")
  {
    MODEL_1_CH5_AUX_EEPROM = EEPROM.read(71);
    MODEL_1_CH6_AUX_EEPROM = EEPROM.read(72);
    
    //CH5
    if (MODEL_1_CH5_AUX_EEPROM == 0)
    {
      CH5_AUX = "NULL";
      CH5_value = 0;
    }

    else if (MODEL_1_CH5_AUX_EEPROM == 1)
    {
      CH5_AUX = "SwA";
      CH5_value = SWA_value;
    }

    else if (MODEL_1_CH5_AUX_EEPROM == 2)
    {
      CH5_AUX = "SwB";
      CH5_value = SWB_value;
    }

    else if (MODEL_1_CH5_AUX_EEPROM == 3)
    {
      CH5_AUX = "SwC";
      CH5_value = SWC_value;
    }

    else if (MODEL_1_CH5_AUX_EEPROM == 4)
    {
      CH5_AUX = "SwD";
      CH5_value = SWD_value;
    }

    else if (MODEL_1_CH5_AUX_EEPROM == 5)
    {
      CH5_AUX = "VrA";
      CH5_value = VRA_value;
    }

    else if (MODEL_1_CH5_AUX_EEPROM == 6)
    {
      CH5_AUX = "VrB";
      CH5_value = VRB_value;
    }

    //CH6
    if (MODEL_1_CH6_AUX_EEPROM == 0)
    {
      CH6_AUX = "NULL";
      CH6_value = 0;
    }

    else if (MODEL_1_CH6_AUX_EEPROM == 1)
    {
      CH6_AUX = "SwA";
      CH6_value = SWA_value;
    }

    else if (MODEL_1_CH6_AUX_EEPROM == 2)
    {
      CH6_AUX = "SwB";
      CH6_value = SWB_value;
    }

    else if (MODEL_1_CH6_AUX_EEPROM == 3)
    {
      CH6_AUX = "SwC";
      CH6_value = SWC_value;
    }

    else if (MODEL_1_CH6_AUX_EEPROM == 4)
    {
      CH6_AUX = "SwD";
      CH6_value = SWD_value;
    }

    else if (MODEL_1_CH6_AUX_EEPROM == 5)
    {
      CH6_AUX = "VrA";
      CH6_value = VRA_value;
    }

    else if (MODEL_1_CH6_AUX_EEPROM == 6)
    {
      CH6_AUX = "VrB";
      CH6_value = VRA_value;
    }

  }

  else if (Model2_Sel == "(*)")
  {
    MODEL_2_CH5_AUX_EEPROM = EEPROM.read(191);
    MODEL_2_CH6_AUX_EEPROM = EEPROM.read(192);

    //CH5
    if (MODEL_2_CH5_AUX_EEPROM == 0)
    {
      CH5_AUX = "NULL";
      CH5_value = 0;
    }

    else if (MODEL_2_CH5_AUX_EEPROM == 1)
    {
      CH5_AUX = "SwA";
      CH5_value = SWA_value;
    }

    else if (MODEL_2_CH5_AUX_EEPROM == 2)
    {
      CH5_AUX = "SwB";
      CH5_value = SWB_value;
    }

    else if (MODEL_2_CH5_AUX_EEPROM == 3)
    {
      CH5_AUX = "SwC";
      CH5_value = SWC_value;
    }

    else if (MODEL_2_CH5_AUX_EEPROM == 4)
    {
      CH5_AUX = "SwD";
      CH5_value = SWD_value;
    }

    else if (MODEL_2_CH5_AUX_EEPROM == 5)
    {
      CH5_AUX = "VrA";
      CH5_value = VRA_value;
    }

    else if (MODEL_2_CH5_AUX_EEPROM == 6)
    {
      CH5_AUX = "VrB";
      CH5_value = VRB_value;
    }

    //CH6
    if (MODEL_2_CH6_AUX_EEPROM == 0)
    {
      CH6_AUX = "NULL";
      CH6_value = 0;
    }

    else if (MODEL_2_CH6_AUX_EEPROM == 1)
    {
      CH6_AUX = "SwA";
      CH6_value = SWA_value;
    }

    else if (MODEL_2_CH6_AUX_EEPROM == 2)
    {
      CH6_AUX = "SwB";
      CH6_value = SWB_value;
    }

    else if (MODEL_2_CH6_AUX_EEPROM == 3)
    {
      CH6_AUX = "SwC";
      CH6_value = SWC_value;
    }

    else if (MODEL_2_CH6_AUX_EEPROM == 4)
    {
      CH6_AUX = "SwD";
      CH6_value = SWD_value;
    }

    else if (MODEL_2_CH6_AUX_EEPROM == 5)
    {
      CH6_AUX = "VrA";
      CH6_value = VRA_value;
    }

    else if (MODEL_2_CH6_AUX_EEPROM == 6)
    {
      CH6_AUX = "VrB";
      CH6_value = VRB_value;
    }
  }

  else if (Model3_Sel == "(*)")
  {
    MODEL_3_CH5_AUX_EEPROM = EEPROM.read(311);
    MODEL_3_CH6_AUX_EEPROM = EEPROM.read(312);

    //CH5
    if (MODEL_3_CH5_AUX_EEPROM == 0)
    {
      CH5_AUX = "NULL";
      CH5_value = 0;
    }

    else if (MODEL_3_CH5_AUX_EEPROM == 1)
    {
      CH5_AUX = "SwA";
      CH5_value = SWA_value;
    }

    else if (MODEL_3_CH5_AUX_EEPROM == 2)
    {
      CH5_AUX = "SwB";
      CH5_value = SWB_value;
    }

    else if (MODEL_3_CH5_AUX_EEPROM == 3)
    {
      CH5_AUX = "SwC";
      CH5_value = SWC_value;
    }

    else if (MODEL_3_CH5_AUX_EEPROM == 4)
    {
      CH5_AUX = "SwD";
      CH5_value = SWD_value;
    }

    else if (MODEL_3_CH5_AUX_EEPROM == 5)
    {
      CH5_AUX = "VrA";
      CH5_value = VRA_value;
    }

    else if (MODEL_3_CH5_AUX_EEPROM == 6)
    {
      CH5_AUX = "VrB";
      CH5_value = VRB_value;
    }

    //CH6
    if (MODEL_3_CH6_AUX_EEPROM == 0)
    {
      CH6_AUX = "NULL";
      CH6_value = 0;
    }

    else if (MODEL_3_CH6_AUX_EEPROM == 1)
    {
      CH6_AUX = "SwA";
      CH6_value = SWA_value;
    }

    else if (MODEL_3_CH6_AUX_EEPROM == 2)
    {
      CH6_AUX = "SwB";
      CH6_value = SWB_value;
    }

    else if (MODEL_3_CH6_AUX_EEPROM == 3)
    {
      CH6_AUX = "SwC";
      CH6_value = SWC_value;
    }

    else if (MODEL_3_CH6_AUX_EEPROM == 4)
    {
      CH6_AUX = "SwD";
      CH6_value = SWD_value;
    }

    else if (MODEL_3_CH6_AUX_EEPROM == 5)
    {
      CH6_AUX = "VrA";
      CH6_value = VRA_value;
    }

    else if (MODEL_3_CH6_AUX_EEPROM == 6)
    {
      CH6_AUX = "VrB";
      CH6_value = VRB_value;
    }
  }

  else if (Model4_Sel == "(*)")
  {
    MODEL_4_CH5_AUX_EEPROM = EEPROM.read(431);
    MODEL_4_CH6_AUX_EEPROM = EEPROM.read(432);

    //-------------------------------CH5---------------------------------
    if (MODEL_4_CH5_AUX_EEPROM == 0)
    {
      CH5_AUX = "NULL";
      CH5_value = 0;
    }

    else if (MODEL_4_CH5_AUX_EEPROM == 1)
    {
      CH5_AUX = "SwA";
      CH5_value = SWA_value;
    }

    else if (MODEL_4_CH5_AUX_EEPROM == 2)
    {
      CH5_AUX = "SwB";
      CH5_value = SWB_value;
    }

    else if (MODEL_4_CH5_AUX_EEPROM == 3)
    {
      CH5_AUX = "SwC";
      CH5_value = SWC_value;
    }

    else if (MODEL_4_CH5_AUX_EEPROM == 4)
    {
      CH5_AUX = "SwD";
      CH5_value = SWD_value;
    }

    else if (MODEL_4_CH5_AUX_EEPROM == 5)
    {
      CH5_AUX = "VrA";
      CH5_value = VRA_value;
    }

    else if (MODEL_4_CH5_AUX_EEPROM == 6)
    {
      CH5_AUX = "VrB";
      CH5_value = VRB_value;
    }

    //---------------------------CH6-----------------------------
    if (MODEL_4_CH6_AUX_EEPROM == 0)
    {
      CH6_AUX = "NULL";
      CH6_value = 0;
    }

    else if (MODEL_4_CH6_AUX_EEPROM == 1)
    {
      CH6_AUX = "SwA";
      CH6_value = SWA_value;
    }

    else if (MODEL_4_CH6_AUX_EEPROM == 2)
    {
      CH6_AUX = "SwB";
      CH6_value = SWB_value;
    }

    else if (MODEL_4_CH6_AUX_EEPROM == 3)
    {
      CH6_AUX = "SwC";
      CH6_value = SWC_value;
    }

    else if (MODEL_4_CH6_AUX_EEPROM == 4)
    {
      CH6_AUX = "SwD";
      CH6_value = SWD_value;
    }

    else if (MODEL_4_CH6_AUX_EEPROM == 5)
    {
      CH6_AUX = "VrA";
      CH6_value = VRA_value;
    }

    else if (MODEL_4_CH6_AUX_EEPROM == 6)
    {
      CH6_AUX = "VrB";
      CH6_value = VRB_value;
    }
  }

  else if (Model5_Sel == "(*)")
  {
    MODEL_5_CH5_AUX_EEPROM = EEPROM.read(521);
    MODEL_5_CH6_AUX_EEPROM = EEPROM.read(522);

    //-------------------------------CH5-----------------------
    if (MODEL_5_CH5_AUX_EEPROM == 0)
    {
      CH5_AUX = "NULL";
      CH5_value = 0;
    }

    else if (MODEL_5_CH5_AUX_EEPROM == 1)
    {
      CH5_AUX = "SwA";
      CH5_value = SWA_value;
    }

    else if (MODEL_5_CH5_AUX_EEPROM == 2)
    {
      CH5_AUX = "SwB";
      CH5_value = SWB_value;
    }

    else if (MODEL_5_CH5_AUX_EEPROM == 3)
    {
      CH5_AUX = "SwC";
      CH5_value = SWC_value;
    }

    else if (MODEL_5_CH5_AUX_EEPROM == 4)
    {
      CH5_AUX = "SwD";
      CH5_value = SWD_value;
    }

    else if (MODEL_5_CH5_AUX_EEPROM == 5)
    {
      CH5_AUX = "VrA";
      CH5_value = VRA_value;
    }

    else if (MODEL_5_CH5_AUX_EEPROM == 6)
    {
      CH5_AUX = "VrB";
      CH5_value = VRB_value;
    }

    //---------------------------CH6-------------------------
    if (MODEL_5_CH6_AUX_EEPROM == 0)
    {
      CH6_AUX = "NULL";
      CH6_value = 0;
    }

    else if (MODEL_5_CH6_AUX_EEPROM == 1)
    {
      CH6_AUX = "SwA";
      CH6_value = SWA_value;
    }

    else if (MODEL_5_CH6_AUX_EEPROM == 2)
    {
      CH6_AUX = "SwB";
      CH6_value = SWB_value;
    }

    else if (MODEL_5_CH6_AUX_EEPROM == 3)
    {
      CH6_AUX = "SwC";
      CH6_value = SWC_value;
    }

    else if (MODEL_5_CH6_AUX_EEPROM == 4)
    {
      CH6_AUX = "SwD";
      CH6_value = SWD_value;
    }

    else if (MODEL_5_CH6_AUX_EEPROM == 5)
    {
      CH6_AUX = "VrA";
      CH6_value = VRA_value;
    }

    else if (MODEL_5_CH6_AUX_EEPROM == 6)
    {
      CH6_AUX = "VrB";
      CH6_value = VRB_value;
    }
  }

}
