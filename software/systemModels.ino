//Models selected defined in sketch

int MODEL_SAVE = 1; //1 model 1, 2 model 2 

byte SETTINGS_MODEL_SEL_EEPROM;

void modelsHeader()
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(32,0);  display.print("MODELS");
  display.drawLine (0,9,128,9, WHITE);
}

void modelsLine1()
{
  modelsHeader();
  display.setCursor(0,11);  display.print (">Model 1 " + Model1_Sel);
  display.setCursor(0,20);  display.print (" Model 2 " + Model2_Sel);
  display.setCursor(0,29);  display.print (" Model 3 " + Model3_Sel);
  display.setCursor(0,38);  display.print (" Model 4 " + Model4_Sel);
  display.setCursor(0,47);  display.print (" Model 5 " + Model5_Sel);
  refresh();
}

void modelsLine2()
{
  modelsHeader();
  display.setCursor(0,11);  display.print (" Model 1 " + Model1_Sel);
  display.setCursor(0,20);  display.print (">Model 2 " + Model2_Sel);
  display.setCursor(0,29);  display.print (" Model 3 " + Model3_Sel);
  display.setCursor(0,38);  display.print (" Model 4 " + Model4_Sel);
  display.setCursor(0,47);  display.print (" Model 5 " + Model5_Sel);
  refresh();
}

void modelsLine3()
{
  modelsHeader();
  display.setCursor(0,11);  display.print (" Model 1 " + Model1_Sel);
  display.setCursor(0,20);  display.print (" Model 2 " + Model2_Sel);
  display.setCursor(0,29);  display.print (">Model 3 " + Model3_Sel);
  display.setCursor(0,38);  display.print (" Model 4 " + Model4_Sel);
  display.setCursor(0,47);  display.print (" Model 5 " + Model5_Sel);
  refresh();
}


void modelsLine4()
{
  modelsHeader();
  display.setCursor(0,11);  display.print (" Model 1 " + Model1_Sel);
  display.setCursor(0,20);  display.print (" Model 2 " + Model2_Sel);
  display.setCursor(0,29);  display.print (" Model 3 " + Model3_Sel);
  display.setCursor(0,38);  display.print (">Model 4 " + Model4_Sel);
  display.setCursor(0,47);  display.print (" Model 5 " + Model5_Sel);
  refresh();
}

void modelsLine5()
{
  modelsHeader();
  display.setCursor(0,11);  display.print (" Model 1 " + Model1_Sel);
  display.setCursor(0,20);  display.print (" Model 2 " + Model2_Sel);
  display.setCursor(0,29);  display.print (" Model 3 " + Model3_Sel);
  display.setCursor(0,38);  display.print (" Model 4 " + Model4_Sel);
  display.setCursor(0,47);  display.print (">Model 5 " + Model5_Sel);
  refresh();
}



void updateModels(int x)
{
  switch(x)
  {
    case -1:
    modelsLine5();
    line = 4;
    break;

    case 0:
    modelsLine1();
    break;

    case 1:
    modelsLine2();
    break;

    case 2:
    modelsLine3();
    break;

    case 3:
    modelsLine4();
    break;

    case 4:
    modelsLine5();
    break;

    case 5:
    modelsLine1();
    line = 0;
  }
}

void navigateModelsMenu()
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
      setModels();
    }
      
    if (downPressed)
    {
      delay(buttonDelay);

      line++;
      movementBuzz();
      updateModels(line);
    }
      
    if (upPressed)
    {
      delay(buttonDelay);

      line--;
      movementBuzz();
      updateModels(line);
    }
      
    if (cancelPressed)
    {
      delay(buttonDelay);
      
      cancelBuzz();
      saveModels();
      loadModels(); //Reloads models
      break;
    }
  }

  line = 1;
  updateSystemMenu(line);

}


void setModels()
{
  if (line == 0)
  {
    Model1_Sel = "(*)";
    Model2_Sel = "";
    Model3_Sel = "";
    Model4_Sel = "";
    Model5_Sel = "";

    MODEL_SAVE = 1;
    //loadModels();

    updateModels(line);
  }

  if (line == 1)
  {
    Model1_Sel = "";
    Model2_Sel = "(*)";
    Model3_Sel = "";
    Model4_Sel = "";
    Model5_Sel = "";

    MODEL_SAVE = 2;
    //loadModels();

    updateModels(line);
    
  }

  if (line == 2)
  {
    Model1_Sel = "";
    Model2_Sel = "";
    Model3_Sel = "(*)";
    Model4_Sel = "";
    Model5_Sel = "";

    MODEL_SAVE = 3;
    //loadModels();

    updateModels(line);
  }

  if (line == 3)
  {
    Model1_Sel = "";
    Model2_Sel = "";
    Model3_Sel = "";
    Model4_Sel = "(*)";
    Model5_Sel = "";

    MODEL_SAVE = 4;
    //loadModels();

    updateModels(line);
  }

  if (line == 4)
  {
    Model1_Sel = "";
    Model2_Sel = "";
    Model3_Sel = "";
    Model4_Sel = "";
    Model5_Sel = "(*)";

    MODEL_SAVE = 5;
    //loadModels();

    updateModels(line);
  }

}

void saveModels()
{
  SETTINGS_MODEL_SEL_EEPROM = EEPROM.put(601,MODEL_SAVE);
}

void loadModels()
{
  SETTINGS_MODEL_SEL_EEPROM = EEPROM.read(601);

  if (SETTINGS_MODEL_SEL_EEPROM == 1)
  {
    Model1_Sel == "(*)";
    Model2_Sel = "";
    Model3_Sel = "";
    Model4_Sel = "";
    Model5_Sel = "";
    
    //Load function settings
    loadReverse();
    loadEndpoints();
    loadSubtrim();
    loadRate();
    loadCurve();
    loadAux();
    loadMix();
  }

  else if (SETTINGS_MODEL_SEL_EEPROM == 2)
  {
    Model1_Sel = "";
    Model2_Sel = "(*)";
    Model3_Sel = "";
    Model4_Sel = "";
    Model5_Sel = "";

    //Load function settings
    loadReverse();
    loadEndpoints();
    loadSubtrim();
    loadRate();
    loadCurve();
    loadAux();
    loadMix();
  }

  else if (SETTINGS_MODEL_SEL_EEPROM == 3)
  {
    Model1_Sel = "";
    Model2_Sel = "";
    Model3_Sel = "(*)";
    Model4_Sel = "";
    Model5_Sel = "";

    //Load function settings
    loadReverse();
    loadEndpoints();
    loadSubtrim();
    loadRate();
    loadCurve();
    loadAux();
    loadMix();
  }

  else if (SETTINGS_MODEL_SEL_EEPROM == 4)
  {
    Model1_Sel = "";
    Model2_Sel = "";
    Model3_Sel = "";
    Model4_Sel = "(*)";
    Model5_Sel = "";

    //Load function settings
    loadReverse();
    loadEndpoints();
    loadSubtrim();
    loadRate();
    loadCurve();
    loadAux();
    loadMix();
  }

  else if (SETTINGS_MODEL_SEL_EEPROM == 5)
  {
    Model1_Sel = "";
    Model2_Sel = "";
    Model3_Sel = "";
    Model4_Sel = "";
    Model5_Sel = "(*)";

    //Load function settings
    loadReverse();
    loadEndpoints();
    loadSubtrim();
    loadRate();
    loadCurve();
    loadAux();
    loadMix();
  }
}
