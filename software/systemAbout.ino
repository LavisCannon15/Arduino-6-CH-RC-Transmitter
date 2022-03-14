void aboutHeader()
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(32,0);  display.print("ABOUT");
  display.drawLine (0,9,128,9, WHITE);
}

void updateAbout()
{
  aboutHeader();
  display.setCursor(0,11);  display.print ("RC Transmitter");
  display.setCursor(0,20);  display.print ("By LavisCannon");
  display.setCursor(0,29);  display.print ("");
  display.setCursor(0,38);  display.print ("v1.00   10/21/2021");
  refresh();
}

void navigateAboutMenu()
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
      
    if (cancelPressed)
    {
      delay(buttonDelay);
      
      cancelBuzz();
      break;
    }
  }

  line = 9;
  updateSystemMenu(line);

}



