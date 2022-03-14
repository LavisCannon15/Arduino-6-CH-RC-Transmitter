int throttle_low = 0;
int throttle_1 = 25;
int throttle_2 = 50;
int throttle_3 = 75;
int throttle_high = 100;

//Function Throttle Curve EEPROM
byte MODEL_1_THROTTLE_LOW_EEPROM;
byte MODEL_1_THROTTLE_1_EEPROM;
byte MODEL_1_THROTTLE_2_EEPROM;
byte MODEL_1_THROTTLE_3_EEPROM;
byte MODEL_1_THROTTLE_HIGH_EEPROM;

byte MODEL_2_THROTTLE_LOW_EEPROM;
byte MODEL_2_THROTTLE_1_EEPROM;
byte MODEL_2_THROTTLE_2_EEPROM;
byte MODEL_2_THROTTLE_3_EEPROM;
byte MODEL_2_THROTTLE_HIGH_EEPROM;

byte MODEL_3_THROTTLE_LOW_EEPROM;
byte MODEL_3_THROTTLE_1_EEPROM;
byte MODEL_3_THROTTLE_2_EEPROM;
byte MODEL_3_THROTTLE_3_EEPROM;
byte MODEL_3_THROTTLE_HIGH_EEPROM;

byte MODEL_4_THROTTLE_LOW_EEPROM;
byte MODEL_4_THROTTLE_1_EEPROM;
byte MODEL_4_THROTTLE_2_EEPROM;
byte MODEL_4_THROTTLE_3_EEPROM;
byte MODEL_4_THROTTLE_HIGH_EEPROM;

byte MODEL_5_THROTTLE_LOW_EEPROM;
byte MODEL_5_THROTTLE_1_EEPROM;
byte MODEL_5_THROTTLE_2_EEPROM;
byte MODEL_5_THROTTLE_3_EEPROM;
byte MODEL_5_THROTTLE_HIGH_EEPROM;





void curveHeader()
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(22,0);  display.print("THROTTLE CURVE");
  display.drawLine (0,9,128,9, WHITE);
}

void curveLine1()
{
  curveHeader();
  display.setCursor(0,11);  display.print ("L >" + String(throttle_low) + "%");
  display.setCursor(0,20);  display.print ("1  " + String(throttle_1) + "%");
  display.setCursor(0,29);  display.print ("2  " + String(throttle_2) + "%");
  display.setCursor(0,38);  display.print ("3  " + String(throttle_3) + "%");
  display.setCursor(0,49);  display.print ("H  " + String(throttle_high) + "%");
  refresh();
}

void curveLine2()
{
  curveHeader();
  display.setCursor(0,11);  display.print ("L  " + String(throttle_low) + "%");
  display.setCursor(0,20);  display.print ("1 >" + String(throttle_1) + "%");
  display.setCursor(0,29);  display.print ("2  " + String(throttle_2) + "%");
  display.setCursor(0,38);  display.print ("3  " + String(throttle_3) + "%");
  display.setCursor(0,49);  display.print ("H  " + String(throttle_high) + "%");
  refresh();
}

void curveLine3()
{
  curveHeader();
  display.setCursor(0,11);  display.print ("L  " + String(throttle_low) + "%");
  display.setCursor(0,20);  display.print ("1  " + String(throttle_1) + "%");
  display.setCursor(0,29);  display.print ("2 >" + String(throttle_2) + "%");
  display.setCursor(0,38);  display.print ("3  " + String(throttle_3) + "%");
  display.setCursor(0,49);  display.print ("H  " + String(throttle_high) + "%");
  refresh();
}

void curveLine4()
{
  curveHeader();
  display.setCursor(0,11);  display.print ("L  " + String(throttle_low) + "%");
  display.setCursor(0,20);  display.print ("1  " + String(throttle_1) + "%");
  display.setCursor(0,29);  display.print ("2  " + String(throttle_2) + "%");
  display.setCursor(0,38);  display.print ("3 >" + String(throttle_3) + "%");
  display.setCursor(0,49);  display.print ("H  " + String(throttle_high) + "%");
  refresh();
}

void curveLine5()
{
  curveHeader();
  display.setCursor(0,11);  display.print ("L  " + String(throttle_low) + "%");
  display.setCursor(0,20);  display.print ("1  " + String(throttle_1) + "%");
  display.setCursor(0,29);  display.print ("2  " + String(throttle_2) + "%");
  display.setCursor(0,38);  display.print ("3  " + String(throttle_3) + "%");
  display.setCursor(0,49);  display.print ("H >" + String(throttle_high) + "%");
  refresh();
}







void updateCurve(int x)
{
  switch(x)
  {
    case -1:
    curveLine1();
    line = 4;
    break;

    case 0:
    curveLine1();
    break;

    case 1:
    curveLine2();
    break;

    case 2:
    curveLine3();
    break;

    case 3:
    curveLine4();
    break;

    case 4:
    curveLine5();
    break;

    case 6:
    curveLine1();
    line = 0;

  }
}

void navigateCurveMenu()
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
      setCurve();
    }
      
    if (downPressed)
    {
      delay(buttonDelay);

      line++;
      movementBuzz();
      updateCurve(line);
    }
      
    if (upPressed)
    {
      delay(buttonDelay);

      line--;
      movementBuzz();
      updateCurve(line);
    }
      
    if (cancelPressed)
    {
      delay(buttonDelay);
      
      cancelBuzz();
      saveCurve();
      break;
    }
  }

  line = 5;
  updateFunctionMenu(line);

}


void setCurve()
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
        if (throttle_low < 100)
        {
          throttle_low++;
        }
        updateCurve(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (throttle_low > 0)
        {
          throttle_low--; 
        }
        updateCurve(line);
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
        if (throttle_1 < 100)
        {
          throttle_1++;
        }
        updateCurve(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (throttle_1 > 0)
        {
          throttle_1--; 
        }
        updateCurve(line);
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
        if (throttle_2 < 100)
        {
          throttle_2++;
        }
        updateCurve(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (throttle_2 > 0)
        {
          throttle_2--; 
        }
        updateCurve(line);
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
        if (throttle_3 < 100)
        {
          throttle_3++;
        }
        updateCurve(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (throttle_3 > 0)
        {
          throttle_3--; 
        }
        updateCurve(line);
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
        if (throttle_high < 100)
        {
          throttle_high++;
        }
        updateCurve(line);
      }

      if (downPressed)
      {
        movementBuzz();
        if (throttle_high > 0)
        {
          throttle_high--; 
        }
        updateCurve(line);
      }

      if (cancelPressed)
      {
        cancelBuzz;
        break;
      }
    }
  }

  

  cancelBuzz();
  updateCurve(line);



}

void saveCurve()
{
  if (Model1_Sel == "(*)")
  {
    MODEL_1_THROTTLE_LOW_EEPROM = EEPROM.put(61,throttle_low);
    MODEL_1_THROTTLE_1_EEPROM = EEPROM.put(62,throttle_1);
    MODEL_1_THROTTLE_2_EEPROM = EEPROM.put(63,throttle_2);
    MODEL_1_THROTTLE_3_EEPROM = EEPROM.put(64,throttle_3);
    MODEL_1_THROTTLE_HIGH_EEPROM = EEPROM.put(65,throttle_high);
  }

  else if (Model2_Sel == "(*)")
  {
    MODEL_2_THROTTLE_LOW_EEPROM = EEPROM.put(181,throttle_low);
    MODEL_2_THROTTLE_1_EEPROM = EEPROM.put(182,throttle_1);
    MODEL_2_THROTTLE_2_EEPROM = EEPROM.put(183,throttle_2);
    MODEL_2_THROTTLE_3_EEPROM = EEPROM.put(184,throttle_3);
    MODEL_2_THROTTLE_HIGH_EEPROM = EEPROM.put(185,throttle_high);
  }

  else if (Model3_Sel == "(*)")
  {
    MODEL_3_THROTTLE_LOW_EEPROM = EEPROM.put(301,throttle_low);
    MODEL_3_THROTTLE_1_EEPROM = EEPROM.put(302,throttle_1);
    MODEL_3_THROTTLE_2_EEPROM = EEPROM.put(303,throttle_2);
    MODEL_3_THROTTLE_3_EEPROM = EEPROM.put(304,throttle_3);
    MODEL_3_THROTTLE_HIGH_EEPROM = EEPROM.put(305,throttle_high);    
  }

  else if (Model4_Sel == "(*)")
  {
    MODEL_4_THROTTLE_LOW_EEPROM = EEPROM.put(421,throttle_low);
    MODEL_4_THROTTLE_1_EEPROM = EEPROM.put(422,throttle_1);
    MODEL_4_THROTTLE_2_EEPROM = EEPROM.put(423,throttle_2);
    MODEL_4_THROTTLE_3_EEPROM = EEPROM.put(424,throttle_3);
    MODEL_4_THROTTLE_HIGH_EEPROM = EEPROM.put(425,throttle_high);    
  }

  else if (Model5_Sel == "(*)")
  {
    MODEL_5_THROTTLE_LOW_EEPROM = EEPROM.put(541,throttle_low);
    MODEL_5_THROTTLE_1_EEPROM = EEPROM.put(542,throttle_1);
    MODEL_5_THROTTLE_2_EEPROM = EEPROM.put(543,throttle_2);
    MODEL_5_THROTTLE_3_EEPROM = EEPROM.put(544,throttle_3);
    MODEL_5_THROTTLE_HIGH_EEPROM = EEPROM.put(545,throttle_high);       
  }
}


void loadCurve()
{
  if (Model1_Sel == "(*)")
  {
    throttle_low = EEPROM.read(61);
    throttle_1 = EEPROM.read(62);
    throttle_2 = EEPROM.read(63);
    throttle_3 = EEPROM.read(64);
    throttle_high = EEPROM.read(65);
  }

  else if (Model2_Sel == "(*)")
  {
    throttle_low = EEPROM.read(181);
    throttle_1 = EEPROM.read(182);
    throttle_2 = EEPROM.read(183);
    throttle_3 = EEPROM.read(184);
    throttle_high = EEPROM.read(185);
  }

  else if (Model3_Sel == "(*)")
  {
    throttle_low = EEPROM.read(301);
    throttle_1 = EEPROM.read(302);
    throttle_2 = EEPROM.read(303);
    throttle_3 = EEPROM.read(304);
    throttle_high = EEPROM.read(305);
  }

  else if (Model4_Sel == "(*)")
  {
    throttle_low = EEPROM.read(421);
    throttle_1 = EEPROM.read(422);
    throttle_2 = EEPROM.read(423);
    throttle_3 = EEPROM.read(424);
    throttle_high = EEPROM.read(425);
  }

  else if (Model5_Sel == "(*)")
  {
     throttle_low = EEPROM.read(541);
    throttle_1 = EEPROM.read(542);
    throttle_2 = EEPROM.read(543);
    throttle_3 = EEPROM.read(544);
    throttle_high = EEPROM.read(545);   
  }
}
