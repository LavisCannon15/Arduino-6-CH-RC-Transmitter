void soundHeader()
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(32,0);  display.print("SOUND");
  display.drawLine (0,9,128,9, WHITE);
}

void soundLine1()
{
  soundHeader();
  display.setCursor(0,11);  display.print ("Currently in");
  display.setCursor(0,20);  display.print ("Development!");
  refresh();
}

void updateSound(int x)
{
  switch(x)
  {
    case -1:
    soundLine1();
    line = 1;
    break;

    case 0:
    soundLine1();
    break;

    case 1:
    soundLine1();
    break;

    case 2:
    soundLine1();
    line = 0;

  }
}

void navigateSoundMenu()
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
      updateSound(line);
    }
      
    if (upPressed)
    {
      delay(buttonDelay);

      line--;
      movementBuzz();
      updateSound(line);
    }
      
    if (cancelPressed)
    {
      delay(buttonDelay);
      
      cancelBuzz();
      break;
    }
  }

  line = 6;
  updateSystemMenu(line);

}