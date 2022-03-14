String reset;


void trimsHeader()
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(32,0);  display.print("TRIMS");
  display.drawLine (0,9,128,9, WHITE);
}


void trimsLine1()
{
  trimsHeader();
  display.setCursor(0,11);  display.print (" [ON] | OFF");
  refresh();
}

void trimsLine2()
{
  trimsHeader();
  display.setCursor(0,11);  display.print (" ON | [OFF]");
  refresh();
}




void updateTrims(int x)
{
  switch(x)
  {
    case -1:
    trimsLine2();
    line = 1;
    break;

    case 0:
    trimsLine1();
    break;

    case 1:
    trimsLine2();
    break;

    case 2:
    trimsLine1();
    line = 0;
    }
  }

void navigateTrimsMenu()
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
    }
  
      
    if (downPressed)
    {
      delay(buttonDelay);

      line++;
      movementBuzz();
      updateTrims(line);
    }
      
    if (upPressed)
    {
      delay(buttonDelay);

      line--;
      movementBuzz();
      updateTrims(line);
    }
      
    if (cancelPressed)
    {
      delay(buttonDelay);
      
      cancelBuzz();
      break;
    }
  }

  line = 3;
  updateFunctionMenu(line);

}




