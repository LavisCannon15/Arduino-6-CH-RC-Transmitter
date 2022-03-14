void factoryHeader()
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(32,0);  display.print("FACTORY RESET");
  display.drawLine (0,9,128,9, WHITE);
}


void factoryLine1()
{
  factoryHeader();
  display.setCursor(0,11);  display.print ("Are you sure?");
  display.setCursor(0,20);  display.print (" [YES] | NO");
  refresh();
}

void factoryLine2()
{
  factoryHeader();
  display.setCursor(0,11);  display.print ("Are you sure?");
  display.setCursor(0,20);  display.print (" YES | [NO]");
  refresh();
}




void updateFactory(int x)
{
  switch(x)
  {
    case -1:
    factoryLine2();
    line = 1;
    break;

    case 0:
    factoryLine1();
    break;

    case 1:
    factoryLine2();
    break;

    case 2:
    factoryLine1();
    line = 0;
    }
  }

void navigateFactoryMenu()
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
      updateFactory(line);
    }
      
    if (upPressed)
    {
      delay(buttonDelay);

      line--;
      movementBuzz();
      updateFactory(line);
    }
      
    if (cancelPressed)
    {
      delay(buttonDelay);
      
      cancelBuzz();
      break;
    }
  }

  line = 7;
  updateSystemMenu(line);

}




