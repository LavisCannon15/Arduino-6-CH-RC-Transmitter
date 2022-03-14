String CH1_failsafe = "OFF";
String CH2_failsafe = "OFF";
String CH3_failsafe = "OFF";
String CH4_failsafe = "OFF";
String CH5_failsafe = "OFF";
String CH6_failsafe = "OFF";



void failsafeHeader()
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(40,0);  display.print("FAILSAFE");
  display.drawLine (0,9,128,9, WHITE);
}

void failsafeLine1()
{
  failsafeHeader();
  display.setCursor(0,11);  display.print ("CH1>" + CH1_failsafe);
  display.setCursor(0,20);  display.print ("CH2 " + CH2_failsafe);
  display.setCursor(0,29);  display.print ("CH3 " + CH3_failsafe);
  display.setCursor(0,38);  display.print ("CH4 " + CH4_failsafe);
  display.setCursor(0,47);  display.print ("CH5 " + CH5_failsafe);
  refresh();
}

void failsafeLine2()
{
  failsafeHeader();
  display.setCursor(0,11);  display.print ("CH1 " + CH1_failsafe);
  display.setCursor(0,20);  display.print ("CH2>" + CH2_failsafe);
  display.setCursor(0,29);  display.print ("CH3 " + CH3_failsafe);
  display.setCursor(0,38);  display.print ("CH4 " + CH4_failsafe);
  display.setCursor(0,47);  display.print ("CH5 " + CH5_failsafe);
  refresh();
}

void failsafeLine3()
{
  failsafeHeader();
  display.setCursor(0,11);  display.print ("CH1 " + CH1_failsafe);
  display.setCursor(0,20);  display.print ("CH2 " + CH2_failsafe);
  display.setCursor(0,29);  display.print ("CH3>" + CH3_failsafe);
  display.setCursor(0,38);  display.print ("CH4 " + CH4_failsafe);
  display.setCursor(0,47);  display.print ("CH5 " + CH5_failsafe);
  refresh();
}


void failsafeLine4()
{
  failsafeHeader();
  display.setCursor(0,11);  display.print ("CH1 " + CH1_failsafe);
  display.setCursor(0,20);  display.print ("CH2 " + CH2_failsafe);
  display.setCursor(0,29);  display.print ("CH3 " + CH3_failsafe);
  display.setCursor(0,38);  display.print ("CH4>" + CH4_failsafe);
  display.setCursor(0,47);  display.print ("CH5 " + CH5_failsafe);
  refresh();
}

void failsafeLine5()
{
  failsafeHeader();
  display.setCursor(0,11);  display.print ("CH1 " + CH1_failsafe);
  display.setCursor(0,20);  display.print ("CH2 " + CH2_failsafe);
  display.setCursor(0,29);  display.print ("CH3 " + CH3_failsafe);
  display.setCursor(0,38);  display.print ("CH4 " + CH4_failsafe);
  display.setCursor(0,47);  display.print ("CH5>" + CH5_failsafe);
  refresh();
}

void failsafeLine6()
{
  failsafeHeader();
  display.setCursor(0,11);  display.print ("CH6>" + CH6_failsafe);
  refresh();
}



void updateFailsafe(int x)
{
  switch(x)
  {
    case -1:
    failsafeLine4();
    line = 3;
    break;

    case 0:
    failsafeLine1();
    break;

    case 1:
    failsafeLine2();
    break;

    case 2:
    failsafeLine3();
    break;

    case 3:
    failsafeLine4();
    break;

    case 4:
    failsafeLine5();
    break;

    case 5:
    failsafeLine6();
    break;

    case 6:
    failsafeLine1();
    line = 0;
  }
}

void navigateFailsafeMenu()
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
      setFailsafe();
    }

    if (downPressed)
    {
      delay(buttonDelay);

      line++;
      movementBuzz();
      updateFailsafe(line);
    }
      
    if (upPressed)
    {
      delay(buttonDelay);

      line--;
      movementBuzz();
      updateFailsafe(line);
    }
      
    if (cancelPressed)
    {
      delay(buttonDelay);
      
      cancelBuzz();
      break;
    }
  }

  line = 8;
  updateFunctionMenu(line);

}

void setFailsafe()
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

      int CH1_value = analogRead(CH1_PIN);

      int moveCH1_LEFT = map(CH1_value, 512, 0, 65, 20); int drawCH1_LEFT = map(CH1_value, 512, 0, 0, 43);
      int moveCH1_RIGHT = map(CH1_value, 512, 1023, 0, 44);



      failsafeHeader();
      display.setCursor(55,12);  display.print (CH1_failsafe);

      display.setCursor(40,38);  display.print ("Channel 1");
      display.drawRect(20,48,90,6,WHITE);
      display.fillRect(moveCH1_LEFT,48,drawCH1_LEFT,5,WHITE);  //LEFT
      display.fillRect(65,48,moveCH1_RIGHT,5,WHITE); //RIGHT

      if (upPressed)
      {
        delay(buttonDelay);
        movementBuzz();

        if (CH1_failsafe.equals("OFF"))
        {
          CH1_failsafe = "ON";
        }
        else if (CH1_failsafe.equals("ON"))
        {
          CH1_failsafe = "OFF";
        }
      }

      if (downPressed)
      {
        delay(buttonDelay);
        movementBuzz();

        if (CH1_failsafe.equals("OFF"))
        {
          CH1_failsafe = "ON";
        }
        else if (CH1_failsafe.equals("ON"))
        {
          CH1_failsafe = "OFF";
        }
      }

      if (cancelPressed)
      {
        delay(buttonDelay);

        cancelBuzz();
        break;
      }

      refresh();

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

      int CH2_value = analogRead(CH2_PIN);

      int moveCH2_LEFT = map(CH2_value, 512, 0, 65, 20); int drawCH2_LEFT = map(CH2_value, 512, 0, 0, 43);
      int moveCH2_RIGHT = map(CH2_value, 512, 1023, 0, 44);



      failsafeHeader();
      display.setCursor(55,12);  display.print (CH2_failsafe);

      display.setCursor(40,38);  display.print ("Channel 2");
      display.drawRect(20,48,90,6,WHITE);
      display.fillRect(moveCH2_LEFT,48,drawCH2_LEFT,5,WHITE);  //LEFT
      display.fillRect(65,48,moveCH2_RIGHT,5,WHITE); //RIGHT

      if (upPressed)
      {
        delay(buttonDelay);
        movementBuzz();

        if (CH2_failsafe.equals("OFF"))
        {
          CH2_failsafe = "ON";
        }
        else if (CH1_failsafe.equals("ON"))
        {
          CH2_failsafe = "OFF";
        }
      }

      if (downPressed)
      {
        delay(buttonDelay);
        movementBuzz();

        if (CH2_failsafe.equals("OFF"))
        {
          CH2_failsafe = "ON";
        }
        else if (CH2_failsafe.equals("ON"))
        {
          CH2_failsafe = "OFF";
        }
      }

      if (cancelPressed)
      {
        delay(buttonDelay);

        cancelBuzz();
        break;
      }

      refresh();

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

      int CH3_value = analogRead(CH3_PIN);

      int moveCH3_LEFT = map(CH3_value, 512, 0, 65, 20); int drawCH3_LEFT = map(CH3_value, 512, 0, 0, 43);
      int moveCH3_RIGHT = map(CH3_value, 512, 1023, 0, 44);



      failsafeHeader();
      display.setCursor(55,12);  display.print (CH3_failsafe);

      display.setCursor(40,38);  display.print ("Channel 3");
      display.drawRect(20,48,90,6,WHITE);
      display.fillRect(moveCH3_LEFT,48,drawCH3_LEFT,5,WHITE);  //LEFT
      display.fillRect(65,48,moveCH3_RIGHT,5,WHITE); //RIGHT

      if (upPressed)
      {
        delay(buttonDelay);
        movementBuzz();

        if (CH3_failsafe.equals("OFF"))
        {
          CH3_failsafe = "ON";
        }
        else if (CH3_failsafe.equals("ON"))
        {
          CH3_failsafe = "OFF";
        }
      }

      if (downPressed)
      {
        delay(buttonDelay);
        movementBuzz();

        if (CH3_failsafe.equals("OFF"))
        {
          CH3_failsafe = "ON";
        }
        else if (CH3_failsafe.equals("ON"))
        {
          CH3_failsafe = "OFF";
        }
      }

      if (cancelPressed)
      {
        delay(buttonDelay);

        cancelBuzz();
        break;
      }

      refresh();

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

      int CH4_value = analogRead(CH4_PIN);

      int moveCH4_LEFT = map(CH4_value, 512, 0, 65, 20); int drawCH4_LEFT = map(CH4_value, 512, 0, 0, 43);
      int moveCH4_RIGHT = map(CH4_value, 512, 1023, 0, 44);



      failsafeHeader();
      display.setCursor(55,12);  display.print (CH4_failsafe);

      display.setCursor(40,38);  display.print ("Channel 4");
      display.drawRect(20,48,90,6,WHITE);
      display.fillRect(moveCH4_LEFT,48,drawCH4_LEFT,5,WHITE);  //LEFT
      display.fillRect(65,48,moveCH4_RIGHT,5,WHITE); //RIGHT

      if (upPressed)
      {
        delay(buttonDelay);
        movementBuzz();

        if (CH4_failsafe.equals("OFF"))
        {
          CH4_failsafe = "ON";
        }
        else if (CH4_failsafe.equals("ON"))
        {
          CH4_failsafe = "OFF";
        }
      }

      if (downPressed)
      {
        delay(buttonDelay);
        movementBuzz();

        if (CH4_failsafe.equals("OFF"))
        {
          CH4_failsafe = "ON";
        }
        else if (CH4_failsafe.equals("ON"))
        {
          CH4_failsafe = "OFF";
        }
      }

      if (cancelPressed)
      {
        delay(buttonDelay);

        cancelBuzz();
        break;
      }

      refresh();

    }

  }

  if (line == 4)
  {
    if (CH5_failsafe.equals("OFF"))
    {
      CH5_failsafe = "ON";
      updateFailsafe(line);
    }
  
    else if (CH5_failsafe.equals("ON"))
    {
      CH5_failsafe = "OFF";
      updateFailsafe(line);
    }
  }
  
  if (line == 5)
  {
    if (CH6_failsafe.equals("OFF"))
    {
      CH6_failsafe = "ON";
      updateFailsafe(line);
    }
  
    else if (CH6_failsafe.equals("ON"))
    {
      CH6_failsafe = "OFF";
      updateFailsafe(line);
    }

  }
   
  cancelBuzz();
  refresh();
  updateFailsafe(line);


}
