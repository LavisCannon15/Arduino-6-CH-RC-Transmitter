void bindHeader()
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(32,0);  display.print("RX BIND");
  display.drawLine (0,9,128,9, WHITE);
}

void updateBind()
{
  bindHeader();
  display.setCursor(0,11);  display.print ("Binding to RX...");
  refresh();
}

void navigateBindMenu()
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

  line = 0;
  updateSystemMenu(line);

}



