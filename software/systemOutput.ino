void outputHeader()
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(32,0);  display.print("OUTPUT MODE");
  display.drawLine (0,9,128,9, WHITE);
}

void outputLine1()
{
  outputHeader();
  display.setCursor(0,11);  display.print ("Currently in");
  display.setCursor(0,20);  display.print ("Development!");
  refresh();
}

void updateOutput(int x)
{
  switch(x)
  {
    case -1:
    outputLine1();
    line = 1;
    break;

    case 0:
    outputLine1();
    break;

    case 1:
    outputLine1();
    break;

    case 2:
    outputLine1();
    line = 0;

  }
}

void navigateOutputMenu()
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
      
    if (downPressed)
    {
      delay(buttonDelay);

      line++;
      movementBuzz();
      updateOutput(line);
    }
      
    if (upPressed)
    {
      delay(buttonDelay);

      line--;
      movementBuzz();
      updateOutput(line);
    }
      
    if (cancelPressed)
    {
      delay(buttonDelay);
      
      cancelBuzz();
      break;
    }
  }

  line = 2;
  updateSystemMenu(line);

}