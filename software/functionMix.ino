//MIX 1

int mix_1 = 1;
String mix1_en = "[OFF]";
String mix1_master = "CH2";
String mix1_slave = "CH1";
int mix1_pos = 100;
int mix1_neg = 100;
int mix1_offset = 0;

int MIX1_EN_SAVE = 0; // 0 is OFF, 1 is ON
int MIX1_MASTER_SAVE = 2; // 2 is CH2, 
int MIX1_SLAVE_SAVE = 1; // 1 is CH1, 


//MIX 2

int mix_2 = 2;
String mix2_en = "[OFF]";
String mix2_master = "CH2";
String mix2_slave = "CH1";
int mix2_pos = 100;
int mix2_neg = 100;
int mix2_offset = 0;

int MIX2_EN_SAVE = 0; // 0 is OFF, 1 is ON
int MIX2_MASTER_SAVE = 2; // 2 is CH2, 
int MIX2_SLAVE_SAVE = 1; // 1 is CH1, 

//MIX 3

int mix_3 = 3;
String mix3_en = "[OFF]";
String mix3_master = "CH2";
String mix3_slave = "CH1";
int mix3_pos = 100;
int mix3_neg = 100;
int mix3_offset = 0;

int MIX3_EN_SAVE = 0; // 0 is OFF, 1 is ON
int MIX3_MASTER_SAVE = 2; // 2 is CH2, 
int MIX3_SLAVE_SAVE = 1; // 1 is CH1, 

//MIX 4

int mix_4 = 4;
String mix4_en = "[OFF]";
String mix4_master = "CH2";
String mix4_slave = "CH1";
int mix4_pos = 100;
int mix4_neg = 100;
int mix4_offset = 0;

int MIX4_EN_SAVE = 0; // 0 is OFF, 1 is ON
int MIX4_MASTER_SAVE = 2; // 2 is CH2, 
int MIX4_SLAVE_SAVE = 1; // 1 is CH1, 

//Change Mix
int mix = mix_1;
String mix_en = mix1_en;
String mix_master = mix1_master;
String mix_slave = mix1_slave;
int mix_pos = mix1_pos;
int mix_neg = mix1_neg;
int mix_offset = mix1_offset;



//Function Mix EEPROM
byte MODEL_1_MIX_1_EEPROM;
byte MODEL_1_MIX1_EN_EEPROM; //String
byte MODEL_1_MIX1_MASTER_EEPROM; //String
byte MODEL_1_MIX1_SLAVE_EEPROM ; //String
byte MODEL_1_MIX1_POS_EEPROM;
byte MODEL_1_MIX1_NEG_EEPROM;
byte MODEL_1_MIX1_OFFSET_EEPROM;

byte MODEL_1_MIX_2_EEPROM;
byte MODEL_1_MIX2_EN_EEPROM; //String
byte MODEL_1_MIX2_MASTER_EEPROM; //String
byte MODEL_1_MIX2_SLAVE_EEPROM; //String
byte MODEL_1_MIX2_POS_EEPROM;
byte MODEL_1_MIX2_NEG_EEPROM;
byte MODEL_1_MIX2_OFFSET_EEPROM;

byte MODEL_1_MIX_3_EEPROM;
byte MODEL_1_MIX3_EN_EEPROM; //String
byte MODEL_1_MIX3_MASTER_EEPROM; //String
byte MODEL_1_MIX3_SLAVE_EEPROM; //String
byte MODEL_1_MIX3_POS_EEPROM;
byte MODEL_1_MIX3_NEG_EEPROM;
byte MODEL_1_MIX3_OFFSET_EEPROM;

byte MODEL_1_MIX_4_EEPROM;
byte MODEL_1_MIX4_EN_EEPROM; //String
byte MODEL_1_MIX4_MASTER_EEPROM; //String
byte MODEL_1_MIX4_SLAVE_EEPROM; //String
byte MODEL_1_MIX4_POS_EEPROM;
byte MODEL_1_MIX4_NEG_EEPROM;
byte MODEL_1_MIX4_OFFSET_EEPROM;




byte MODEL_2_MIX_1_EEPROM;
byte MODEL_2_MIX1_EN_EEPROM; //String
byte MODEL_2_MIX1_MASTER_EEPROM; //String
byte MODEL_2_MIX1_SLAVE_EEPROM; //String
byte MODEL_2_MIX1_POS_EEPROM;
byte MODEL_2_MIX1_NEG_EEPROM;
byte MODEL_2_MIX1_OFFSET_EEPROM;

byte MODEL_2_MIX_2_EEPROM;
byte MODEL_2_MIX2_EN_EEPROM; //String
byte MODEL_2_MIX2_MASTER_EEPROM; //String
byte MODEL_2_MIX2_SLAVE_EEPROM; //String
byte MODEL_2_MIX2_POS_EEPROM;
byte MODEL_2_MIX2_NEG_EEPROM;
byte MODEL_2_MIX2_OFFSET_EEPROM;

byte MODEL_2_MIX_3_EEPROM;
byte MODEL_2_MIX3_EN_EEPROM; //String
byte MODEL_2_MIX3_MASTER_EEPROM; //String
byte MODEL_2_MIX3_SLAVE_EEPROM; //String
byte MODEL_2_MIX3_POS_EEPROM;
byte MODEL_2_MIX3_NEG_EEPROM;
byte MODEL_2_MIX3_OFFSET_EEPROM;

byte MODEL_2_MIX_4_EEPROM;
byte MODEL_2_MIX4_EN_EEPROM; //String
byte MODEL_2_MIX4_MASTER_EEPROM; //String
byte MODEL_2_MIX4_SLAVE_EEPROM; //String
byte MODEL_2_MIX4_POS_EEPROM;
byte MODEL_2_MIX4_NEG_EEPROM;
byte MODEL_2_MIX4_OFFSET_EEPROM;



byte MODEL_3_MIX_1_EEPROM;
byte MODEL_3_MIX1_EN_EEPROM; //String
byte MODEL_3_MIX1_MASTER_EEPROM; //String
byte MODEL_3_MIX1_SLAVE_EEPROM; //String
byte MODEL_3_MIX1_POS_EEPROM;
byte MODEL_3_MIX1_NEG_EEPROM;
byte MODEL_3_MIX1_OFFSET_EEPROM;

byte MODEL_3_MIX_2_EEPROM;
byte MODEL_3_MIX2_EN_EEPROM; //String
byte MODEL_3_MIX2_MASTER_EEPROM; //String
byte MODEL_3_MIX2_SLAVE_EEPROM; //String
byte MODEL_3_MIX2_POS_EEPROM;
byte MODEL_3_MIX2_NEG_EEPROM;
byte MODEL_3_MIX2_OFFSET_EEPROM;

byte MODEL_3_MIX_3_EEPROM;
byte MODEL_3_MIX3_EN_EEPROM; //String
byte MODEL_3_MIX3_MASTER_EEPROM; //String
byte MODEL_3_MIX3_SLAVE_EEPROM;//String
byte MODEL_3_MIX3_POS_EEPROM;
byte MODEL_3_MIX3_NEG_EEPROM;
byte MODEL_3_MIX3_OFFSET_EEPROM;

byte MODEL_3_MIX_4_EEPROM;
byte MODEL_3_MIX4_EN_EEPROM; //String
byte MODEL_3_MIX4_MASTER_EEPROM; //String
byte MODEL_3_MIX4_SLAVE_EEPROM; //String
byte MODEL_3_MIX4_POS_EEPROM;
byte MODEL_3_MIX4_NEG_EEPROM;
byte MODEL_3_MIX4_OFFSET_EEPROM;



byte MODEL_4_MIX_1_EEPROM;
byte MODEL_4_MIX1_EN_EEPROM; //String
byte MODEL_4_MIX1_MASTER_EEPROM; //String
byte MODEL_4_MIX1_SLAVE_EEPROM; //String
byte MODEL_4_MIX1_POS_EEPROM;
byte MODEL_4_MIX1_NEG_EEPROM;
byte MODEL_4_MIX1_OFFSET_EEPROM;

byte MODEL_4_MIX_2_EEPROM;
byte MODEL_4_MIX2_EN_EEPROM; //String
byte MODEL_4_MIX2_MASTER_EEPROM; //String
byte MODEL_4_MIX2_SLAVE_EEPROM;//String
byte MODEL_4_MIX2_POS_EEPROM;
byte MODEL_4_MIX2_NEG_EEPROM;
byte MODEL_4_MIX2_OFFSET_EEPROM;

byte MODEL_4_MIX_3_EEPROM;
byte MODEL_4_MIX3_EN_EEPROM; //String
byte MODEL_4_MIX3_MASTER_EEPROM; //String
byte MODEL_4_MIX3_SLAVE_EEPROM; //String
byte MODEL_4_MIX3_POS_EEPROM;
byte MODEL_4_MIX3_NEG_EEPROM;
byte MODEL_4_MIX3_OFFSET_EEPROM;

byte MODEL_4_MIX_4_EEPROM;
byte MODEL_4_MIX4_EN_EEPROM; //String
byte MODEL_4_MIX4_MASTER_EEPROM; //String
byte MODEL_4_MIX4_SLAVE_EEPROM;//String
byte MODEL_4_MIX4_POS_EEPROM;
byte MODEL_4_MIX4_NEG_EEPROM;
byte MODEL_4_MIX4_OFFSET_EEPROM;



byte MODEL_5_MIX_1_EEPROM;
byte MODEL_5_MIX1_EN_EEPROM; //String
byte MODEL_5_MIX1_MASTER_EEPROM; //String
byte MODEL_5_MIX1_SLAVE_EEPROM; //String
byte MODEL_5_MIX1_POS_EEPROM;
byte MODEL_5_MIX1_NEG_EEPROM;
byte MODEL_5_MIX1_OFFSET_EEPROM;

byte MODEL_5_MIX_2_EEPROM;
byte MODEL_5_MIX2_EN_EEPROM; //String
byte MODEL_5_MIX2_MASTER_EEPROM; //String
byte MODEL_5_MIX2_SLAVE_EEPROM; //String
byte MODEL_5_MIX2_POS_EEPROM;
byte MODEL_5_MIX2_NEG_EEPROM;
byte MODEL_5_MIX2_OFFSET_EEPROM;

byte MODEL_5_MIX_3_EEPROM;
byte MODEL_5_MIX3_EN_EEPROM; //String
byte MODEL_5_MIX3_MASTER_EEPROM; //String
byte MODEL_5_MIX3_SLAVE_EEPROM; //String
byte MODEL_5_MIX3_POS_EEPROM;
byte MODEL_5_MIX3_NEG_EEPROM;
byte MODEL_5_MIX3_OFFSET_EEPROM;

byte MODEL_5_MIX_4_EEPROM;
byte MODEL_5_MIX4_EN_EEPROM; //String
byte MODEL_5_MIX4_MASTER_EEPROM; //String
byte MODEL_5_MIX4_SLAVE_EEPROM;//String
byte MODEL_5_MIX4_POS_EEPROM;
byte MODEL_5_MIX4_NEG_EEPROM;
byte MODEL_5_MIX4_OFFSET_EEPROM;








void mixHeader()
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(55,0);  display.print("MIX");
  display.drawLine (0,9,128,9, WHITE);
}

void mixLine1()
{
  mixHeader();
  display.setCursor(0,11);  display.print (">Mix: " + String(mix) + " " + mix_en);
  display.setCursor(0,20);  display.print (" Master: " + mix_master);
  display.setCursor(0,29);  display.print (" Slave: " + mix_slave);
  display.setCursor(0,38);  display.print (" Offset: " + String(mix_offset) + " %");
  display.setCursor(0,47);  display.print (" Neg: " + String(mix_neg) + "%" + " Pos: " + String(mix_pos) + "%");
  refresh();
}

void mixLine2()
{
  mixHeader();
  display.setCursor(0,11);  display.print (" Mix: " + String(mix) + ">" + mix_en);
  display.setCursor(0,20);  display.print (" Master: " + mix_master);
  display.setCursor(0,29);  display.print (" Slave: " + mix_slave);
  display.setCursor(0,38);  display.print (" Offset: " + String(mix_offset) + " %");
  display.setCursor(0,47);  display.print (" Neg: " + String(mix_neg) + "%" + " Pos: " + String(mix_pos) + "%");
  refresh();
}

void mixLine3()
{
  mixHeader();
  display.setCursor(0,11);  display.print (" Mix: " + String(mix) + " " + mix_en);
  display.setCursor(0,20);  display.print (">Master: " + mix_master);
  display.setCursor(0,29);  display.print (" Slave: " + mix_slave);
  display.setCursor(0,38);  display.print (" Offset: " + String(mix_offset) + " %");
  display.setCursor(0,47);  display.print (" Neg: " + String(mix_neg) + "%" + " Pos: " + String(mix_pos) + "%");
  refresh();
}

void mixLine4()
{
  mixHeader();
  display.setCursor(0,11);  display.print (" Mix: " + String(mix) + " " + mix_en);
  display.setCursor(0,20);  display.print (" Master: " + mix_master);
  display.setCursor(0,29);  display.print (">Slave: " + mix_slave);
  display.setCursor(0,38);  display.print (" Offset: " + String(mix_offset) + " %");
  display.setCursor(0,47);  display.print (" Neg: " + String(mix_neg) + "%" + " Pos: " + String(mix_pos) + "%");
  refresh();
}

void mixLine5()
{
  mixHeader();
  display.setCursor(0,11);  display.print (" Mix: " + String(mix) + " " + mix_en);
  display.setCursor(0,20);  display.print (" Master: " + mix_master);
  display.setCursor(0,29);  display.print (" Slave: " + mix_slave);
  display.setCursor(0,38);  display.print (">Offset: " + String(mix_offset) + " %");
  display.setCursor(0,47);  display.print (" Neg: " + String(mix_neg) + "%" + " Pos: " + String(mix_pos) + "%");
  refresh();
}

void mixLine6()
{
  mixHeader();
  display.setCursor(0,11);  display.print (" Mix: " + String(mix) + " " + mix_en);
  display.setCursor(0,20);  display.print (" Master: " + mix_master);
  display.setCursor(0,29);  display.print (" Slave: " + mix_slave);
  display.setCursor(0,38);  display.print (" Offset: " + String(mix_offset) + " %");
  display.setCursor(0,47);  display.print (">Neg: " + String(mix_neg) + "%" + " Pos: " + String(mix_pos) + "%");
  refresh();
}

void mixLine7()
{
  mixHeader();
  display.setCursor(0,11);  display.print (" Mix: " + String(mix) + " " + mix_en);
  display.setCursor(0,20);  display.print (" Master: " + mix_master);
  display.setCursor(0,29);  display.print (" Slave: " + mix_slave);
  display.setCursor(0,38);  display.print (" Offset: " + String(mix_offset) + " %");
  display.setCursor(0,47);  display.print (" Neg: " + String(mix_neg) + "%" + ">Pos: " + String(mix_pos) + "%");
  refresh();
}




void updateMix(int x)
{
  switch(x)
  {
    case -1:
    mixLine7();
    line = 6;
    break;

    case 0:
    mixLine1();
    break;

    case 1:
    mixLine2();
    break;

    case 2:
    mixLine3();
    break;

    case 3:
    mixLine4();
    break;

    case 4:
    mixLine5();
    break;

    case 5:
    mixLine6();
    break;

    case 6:
    mixLine7();
    break;

    case 7:
    mixLine1();
    line = 0;

  }
}

void navigateMixMenu()
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
      setMix();
    }
      
    if (downPressed)
    {
      delay(buttonDelay);

      line++;
      movementBuzz();
      updateMix(line);
    }
      
    if (upPressed)
    {
      delay(buttonDelay);

      line--;
      movementBuzz();
      updateMix(line);
    }
      
    if (cancelPressed)
    {
      delay(buttonDelay);
      
      cancelBuzz();
      saveMix();
      break;
    }
  }

  line = 7;
  updateFunctionMenu(line);

}


void setMix()
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
        delay(buttonDelay);

        movementBuzz();
        if (mix == mix_1)
        {
          mix = mix_4;
          mix_en = mix4_en;
          mix_master = mix4_master;
          mix_slave = mix4_slave;
          mix_neg = mix4_neg;
          mix_pos =  mix4_pos;
          mix_offset = mix4_offset;

          updateMix(line);
        }

        else if (mix == mix_2)
        {
          mix = mix_1;
          mix_en = mix1_en;
          mix_master = mix1_master;
          mix_slave = mix1_slave;
          mix_neg = mix1_neg;
          mix_pos =  mix1_pos;
          mix_offset = mix1_offset;

          updateMix(line);
        }

        else if (mix == mix_3)
        {
          mix = mix_2;
          mix_en = mix2_en;
          mix_master = mix2_master;
          mix_slave = mix2_slave;
          mix_neg = mix2_neg;
          mix_pos =  mix2_pos;
          mix_offset = mix2_offset;

          updateMix(line);
        }

        else if (mix == mix_4)
        {
          mix = mix_3;
          mix_en = mix3_en;
          mix_master = mix3_master;
          mix_slave = mix3_slave;
          mix_neg = mix3_neg;
          mix_pos =  mix3_pos;
          mix_offset = mix3_offset;

          updateMix(line);
        }

      }
      
      if (downPressed)
      {
        delay(buttonDelay);

        movementBuzz();
        if (mix == mix_1)
        {
          mix = mix_2;
          mix_en = mix2_en;
          mix_master = mix2_master;
          mix_slave = mix2_slave;
          mix_neg = mix2_neg;
          mix_pos =  mix2_pos;
          mix_offset = mix2_offset;

          updateMix(line);
        } 

        else if (mix == mix_2)
        {
          mix = mix_3;
          mix_en = mix3_en;
          mix_master = mix3_master;
          mix_slave = mix3_slave;
          mix_neg = mix3_neg;
          mix_pos =  mix3_pos;
          mix_offset = mix3_offset;

          updateMix(line);
        }
        
        else if (mix == mix_3)
        {
          mix = mix_4;
          mix_en = mix4_en;
          mix_master = mix4_master;
          mix_slave = mix4_slave;
          mix_neg = mix4_neg;
          mix_pos =  mix4_pos;
          mix_offset = mix4_offset;

          updateMix(line);
        }
        
        else if (mix == mix_4)
        {
          mix = mix_1;
          mix_en = mix1_en;
          mix_master = mix1_master;
          mix_slave = mix1_slave;
          mix_neg = mix1_neg;
          mix_pos =  mix1_pos;
          mix_offset = mix1_offset;

          updateMix(line);
        }
      }
      
      if (cancelPressed)
      {
        cancelBuzz();
        break;
      }

    }

  }
//-----------------------en--------------------------
  if (line == 1)
  {
    movementBuzz();

    if (mix == mix_1)
    {
      if (mix1_en.equals("[OFF]"))
      {
        mix1_en = "[ON]";
        mix_en = mix1_en;
        MIX1_EN_SAVE = 1;

        updateMix(line);
      }

      else if (mix1_en.equals("[ON]"))
      {
        mix1_en = "[OFF]";
        mix_en = mix1_en;
        MIX1_EN_SAVE = 0;

        updateMix(line);
      }
    }

    if (mix == mix_2)
    {
      if (mix2_en.equals("[OFF]"))
      {
        mix2_en = "[ON]";
        mix_en = mix2_en;
        MIX2_EN_SAVE = 1;

        updateMix(line);
      }

      else if (mix1_en.equals("[ON]"))
      {
        mix2_en = "[OFF]";
        mix_en = mix2_en;
        MIX2_EN_SAVE = 0;

        updateMix(line);
      }
    }

    if (mix == mix_3)
    {
      if (mix3_en.equals("[OFF]"))
      {
        mix3_en = "[ON]";
        mix_en = mix3_en;
        MIX3_EN_SAVE = 1;

        updateMix(line);
      }

      else if (mix3_en.equals("[ON]"))
      {
        mix3_en = "[OFF]";
        mix_en = mix3_en;
        MIX3_EN_SAVE = 0;

        updateMix(line);
      }
    }

    if (mix == mix_4)
    {
      if (mix4_en.equals("[OFF]"))
      {
        mix4_en = "[ON]";
        mix_en = mix4_en;
        MIX4_EN_SAVE = 1;

        updateMix(line);
      }

      else if (mix3_en.equals("[ON]"))
      {
        mix4_en = "[OFF]";
        mix_en = mix4_en;
        MIX4_EN_SAVE = 0;

        updateMix(line);
      }
    }

  }
//----------------------------master--------------------------
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
        delay(buttonDelay);

        movementBuzz();
        if (mix == mix_1)
        {
          if (mix1_master.equals("CH2"))
          {
            mix1_master = "CH1";
            mix_master = mix1_master;
            MIX1_MASTER_SAVE = 1;

            updateMix(line);
          }

          else if (mix1_master.equals("CH1"))
          {
            mix1_master = "CH6";
            mix_master = mix1_master;
            MIX1_MASTER_SAVE = 6;

            updateMix(line);
          }

          else if (mix1_master.equals("CH6"))
          {
            mix1_master = "CH5";
            mix_master = mix1_master;
            MIX1_MASTER_SAVE = 5;

            updateMix(line);
          }

          else if (mix1_master.equals("CH5"))
          {
            mix1_master = "CH4";
            mix_master = mix1_master;
            MIX1_MASTER_SAVE = 4;

            updateMix(line);
          }

          else if (mix1_master.equals("CH4"))
          {
            mix1_master = "CH3";
            mix_master = mix1_master;
            MIX1_MASTER_SAVE = 3;

            updateMix(line);
          }

          else if (mix1_master.equals("CH3"))
          {
            mix1_master = "CH2";
            mix_master = mix1_master;
            MIX1_MASTER_SAVE = 2;

            updateMix(line);
          }
        }

        if (mix == mix_2)
        {
          if (mix2_master.equals("CH2"))
          {
            mix2_master = "CH1";
            mix_master = mix2_master;
            MIX2_MASTER_SAVE = 1;

            updateMix(line);
          }

          else if (mix2_master.equals("CH1"))
          {
            mix2_master = "CH6";
            mix_master = mix2_master;
            MIX2_MASTER_SAVE = 6;

            updateMix(line);
          }

          else if (mix2_master.equals("CH6"))
          {
            mix2_master = "CH5";
            mix_master = mix2_master;
            MIX2_MASTER_SAVE = 5;

            updateMix(line);
          }

          else if (mix2_master.equals("CH5"))
          {
            mix2_master = "CH4";
            mix_master = mix2_master;
            MIX2_MASTER_SAVE = 4;

            updateMix(line);
          }

          else if (mix2_master.equals("CH4"))
          {
            mix2_master = "CH3";
            mix_master = mix2_master;
            MIX2_MASTER_SAVE = 3;

            updateMix(line);
          }

          else if (mix2_master.equals("CH3"))
          {
            mix2_master = "CH2";
            mix_master = mix2_master;
            MIX2_MASTER_SAVE = 2;

            updateMix(line);
          }
        }

        if (mix == mix_3)
        {
          if (mix3_master.equals("CH2"))
          {
            mix3_master = "CH1";
            mix_master = mix3_master;
            MIX3_MASTER_SAVE = 1;

            updateMix(line);
          }

          else if (mix3_master.equals("CH1"))
          {
            mix3_master = "CH6";
            mix_master = mix3_master;
            MIX3_MASTER_SAVE = 6;

            updateMix(line);
          }

          else if (mix3_master.equals("CH6"))
          {
            mix3_master = "CH5";
            mix_master = mix3_master;
            MIX3_MASTER_SAVE = 5;

            updateMix(line);
          }

          else if (mix3_master.equals("CH5"))
          {
            mix3_master = "CH4";
            mix_master = mix3_master;
            MIX3_MASTER_SAVE = 4;

            updateMix(line);
          }

          else if (mix3_master.equals("CH4"))
          {
            mix3_master = "CH3";
            mix_master = mix3_master;
            MIX3_MASTER_SAVE = 3;

            updateMix(line);
          }

          else if (mix3_master.equals("CH3"))
          {
            mix3_master = "CH2";
            mix_master = mix3_master;
            MIX3_MASTER_SAVE = 2;

            updateMix(line);
          }

        }

        if (mix == mix_4)
        {
          if (mix4_master.equals("CH2"))
          {
            mix4_master = "CH1";
            mix_master = mix4_master;
            MIX4_MASTER_SAVE = 1;

            updateMix(line);
          }

          else if (mix4_master.equals("CH1"))
          {
            mix4_master = "CH6";
            mix_master = mix4_master;
            MIX4_MASTER_SAVE = 6;

            updateMix(line);
          }

          else if (mix4_master.equals("CH6"))
          {
            mix4_master = "CH5";
            mix_master = mix4_master;
            MIX4_MASTER_SAVE = 5;

            updateMix(line);
          }

          else if (mix4_master.equals("CH5"))
          {
            mix4_master = "CH4";
            mix_master = mix4_master;
            MIX4_MASTER_SAVE = 4;

            updateMix(line);
          }

          else if (mix4_master.equals("CH4"))
          {
            mix4_master = "CH3";
            mix_master = mix4_master;
            MIX4_MASTER_SAVE = 3;

            updateMix(line);
          }

          else if (mix4_master.equals("CH3"))
          {
            mix4_master = "CH2";
            mix_master = mix4_master;
            MIX4_MASTER_SAVE = 2;

            updateMix(line);
          }
        }
      }

      if (downPressed)
      {
        delay(buttonDelay);

        movementBuzz();
        if (mix == mix_1)
        {
          if (mix1_master.equals("CH2"))
          {
            mix1_master = "CH1";
            mix_master = mix1_master;
            MIX1_MASTER_SAVE = 1;

            updateMix(line);
          }

          else if (mix1_master.equals("CH1"))
          {
            mix1_master = "CH6";
            mix_master = mix1_master;
            MIX1_MASTER_SAVE = 6;

            updateMix(line);
          }

          else if (mix1_master.equals("CH6"))
          {
            mix1_master = "CH5";
            mix_master = mix1_master;
            MIX1_MASTER_SAVE = 5;

            updateMix(line);
          }

          else if (mix1_master.equals("CH5"))
          {
            mix1_master = "CH4";
            mix_master = mix1_master;
            MIX1_MASTER_SAVE = 4;

            updateMix(line);
          }

          else if (mix1_master.equals("CH4"))
          {
            mix1_master = "CH3";
            mix_master = mix1_master;
            MIX1_MASTER_SAVE = 3;

            updateMix(line);
          }

          else if (mix1_master.equals("CH3"))
          {
            mix1_master = "CH2";
            mix_master = mix1_master;
            MIX1_MASTER_SAVE = 2;

            updateMix(line);
          }

        }

        if (mix == mix_2)
        {
          if (mix2_master.equals("CH2"))
          {
            mix2_master = "CH1";
            mix_master = mix2_master;
            MIX2_MASTER_SAVE = 1;

            updateMix(line);
          }

          else if (mix2_master.equals("CH1"))
          {
            mix2_master = "CH6";
            mix_master = mix2_master;
            MIX2_MASTER_SAVE = 6;

            updateMix(line);
          }

          else if (mix2_master.equals("CH6"))
          {
            mix2_master = "CH5";
            mix_master = mix2_master;
            MIX2_MASTER_SAVE = 5;

            updateMix(line);
          }

          else if (mix2_master.equals("CH5"))
          {
            mix2_master = "CH4";
            mix_master = mix2_master;
            MIX2_MASTER_SAVE = 4;

            updateMix(line);
          }

          else if (mix2_master.equals("CH4"))
          {
            mix2_master = "CH3";
            mix_master = mix2_master;
            MIX2_MASTER_SAVE = 3;

            updateMix(line);
          }

          else if (mix2_master.equals("CH3"))
          {
            mix2_master = "CH2";
            mix_master = mix2_master;
            MIX2_MASTER_SAVE = 2;

            updateMix(line);
          }

        }

        if (mix == mix_3)
        {
          if (mix3_master.equals("CH2"))
          {
            mix3_master = "CH1";
            mix_master = mix3_master;
            MIX3_MASTER_SAVE = 1;

            updateMix(line);
          }

          else if (mix3_master.equals("CH1"))
          {
            mix3_master = "CH6";
            mix_master = mix3_master;
            MIX3_MASTER_SAVE = 6;

            updateMix(line);
          }

          else if (mix3_master.equals("CH6"))
          {
            mix3_master = "CH5";
            mix_master = mix3_master;
            MIX3_MASTER_SAVE = 5;

            updateMix(line);
          }

          else if (mix3_master.equals("CH5"))
          {
            mix3_master = "CH4";
            mix_master = mix3_master;
            MIX3_MASTER_SAVE = 4;

            updateMix(line);
          }

          else if (mix3_master.equals("CH4"))
          {
            mix3_master = "CH3";
            mix_master = mix3_master;
            MIX3_MASTER_SAVE = 3;

            updateMix(line);
          }

          else if (mix3_master.equals("CH3"))
          {
            mix3_master = "CH2";
            mix_master = mix3_master;
            MIX3_MASTER_SAVE = 2;

            updateMix(line);
          }

        }

        
        if (mix == mix_4)
        {
          if (mix4_master.equals("CH2"))
          {
            mix4_master = "CH1";
            mix_master = mix4_master;
            MIX4_MASTER_SAVE = 1;

            updateMix(line);
          }

          else if (mix4_master.equals("CH1"))
          {
            mix4_master = "CH6";
            mix_master = mix4_master;
            MIX4_MASTER_SAVE = 6;

            updateMix(line);
          }

          else if (mix4_master.equals("CH6"))
          {
            mix4_master = "CH5";
            mix_master = mix4_master;
            MIX4_MASTER_SAVE = 5;

            updateMix(line);
          }

          else if (mix4_master.equals("CH5"))
          {
            mix4_master = "CH4";
            mix_master = mix4_master;
            MIX4_MASTER_SAVE = 4;

            updateMix(line);
          }

          else if (mix4_master.equals("CH4"))
          {
            mix4_master = "CH3";
            mix_master = mix4_master;
            MIX4_MASTER_SAVE = 3;

            updateMix(line);
          }

          else if (mix4_master.equals("CH3"))
          {
            mix4_master = "CH2";
            mix_master = mix4_master;
            MIX4_MASTER_SAVE = 2;

            updateMix(line);
          }
          
        }

      }

      if (cancelPressed)
      {
        cancelBuzz();
        break;
      }

    }

  }

  //------------------------slave--------------------------
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
        delay(buttonDelay);

        movementBuzz();
        if (mix == mix_1)
        {
          if (mix1_slave.equals("CH1"))
          {
            mix1_slave = "CH6";
            mix_slave = mix1_slave;
            MIX1_SLAVE_SAVE = 6;

            updateMix(line);
          }

          else if (mix1_slave.equals("CH6"))
          {
            mix1_slave = "CH5";
            mix_slave = mix1_slave;
            MIX1_SLAVE_SAVE = 5;

            updateMix(line);
          }

          else if (mix1_slave.equals("CH5"))
          {
            mix1_slave = "CH4";
            mix_slave = mix1_slave;
            MIX1_SLAVE_SAVE = 4;

            updateMix(line);
          }

          else if (mix1_slave.equals("CH4"))
          {
            mix1_slave = "CH3";
            mix_slave = mix1_slave;
            MIX1_SLAVE_SAVE = 3;

            updateMix(line);
          }

          else if (mix1_slave.equals("CH3"))
          {
            mix1_slave = "CH2";
            mix_slave = mix1_slave;
            MIX1_SLAVE_SAVE = 2;

            updateMix(line);
          }

          else if (mix1_slave.equals("CH2"))
          {
            mix1_slave = "CH1";
            mix_slave = mix1_slave;
            MIX1_SLAVE_SAVE = 1;

            updateMix(line);
          }

        }

        if (mix == mix_2)
        {
          if (mix2_slave.equals("CH1"))
          {
            mix2_slave = "CH6";
            mix_slave = mix2_slave;
            MIX2_SLAVE_SAVE = 6;

            updateMix(line);
          }

          else if (mix2_slave.equals("CH6"))
          {
            mix2_slave = "CH5";
            mix_slave = mix2_slave;
            MIX2_SLAVE_SAVE = 5;

            updateMix(line);
          }

          else if (mix2_slave.equals("CH5"))
          {
            mix2_slave = "CH4";
            mix_slave = mix2_slave;
            MIX2_SLAVE_SAVE = 4;

            updateMix(line);
          }

          else if (mix2_slave.equals("CH4"))
          {
            mix2_slave = "CH3";
            mix_slave = mix2_slave;
            MIX2_SLAVE_SAVE = 3;

            updateMix(line);
          }

          else if (mix2_slave.equals("CH3"))
          {
            mix2_slave = "CH2";
            mix_slave = mix2_slave;
            MIX2_SLAVE_SAVE = 2;

            updateMix(line);
          }

          else if (mix2_slave.equals("CH2"))
          {
            mix2_slave = "CH1";
            mix_slave = mix2_slave;
            MIX2_SLAVE_SAVE = 1;

            updateMix(line);
          }
          
        }

        if (mix == mix_3)
        {
          if (mix3_slave.equals("CH1"))
          {
            mix3_slave = "CH6";
            mix_slave = mix3_slave;
            MIX3_SLAVE_SAVE = 6;

            updateMix(line);
          }

          else if (mix3_slave.equals("CH6"))
          {
            mix3_slave = "CH5";
            mix_slave = mix3_slave;
            MIX3_SLAVE_SAVE = 5;

            updateMix(line);
          }

          else if (mix3_slave.equals("CH5"))
          {
            mix3_slave = "CH4";
            mix_slave = mix3_slave;
            MIX3_SLAVE_SAVE = 4;

            updateMix(line);
          }

          else if (mix3_slave.equals("CH4"))
          {
            mix3_slave = "CH3";
            mix_slave = mix3_slave;
            MIX3_SLAVE_SAVE = 3;

            updateMix(line);
          }

          else if (mix3_slave.equals("CH3"))
          {
            mix3_slave = "CH2";
            mix_slave = mix3_slave;
            MIX3_SLAVE_SAVE = 2;

            updateMix(line);
          }

          else if (mix3_slave.equals("CH2"))
          {
            mix3_slave = "CH1";
            mix_slave = mix3_slave;
            MIX3_SLAVE_SAVE = 1;

            updateMix(line);
          }

        }

        if (mix == mix_4)
        {
          if (mix4_slave.equals("CH1"))
          {
            mix4_slave = "CH6";
            mix_slave = mix4_slave;
            MIX4_SLAVE_SAVE = 6;

            updateMix(line);
          }

          else if (mix4_slave.equals("CH6"))
          {
            mix4_slave = "CH5";
            mix_slave = mix4_slave;
            MIX4_SLAVE_SAVE = 5;

            updateMix(line);
          }

          else if (mix4_slave.equals("CH5"))
          {
            mix4_slave = "CH4";
            mix_slave = mix4_slave;
            MIX4_SLAVE_SAVE = 4;

            updateMix(line);
          }

          else if (mix4_slave.equals("CH4"))
          {
            mix4_slave = "CH3";
            mix_slave = mix4_slave;
            MIX4_SLAVE_SAVE = 3;

            updateMix(line);
          }

          else if (mix4_slave.equals("CH3"))
          {
            mix4_slave = "CH2";
            mix_slave = mix4_slave;
            MIX4_SLAVE_SAVE = 2;

            updateMix(line);
          }

          else if (mix4_slave.equals("CH2"))
          {
            mix4_slave = "CH1";
            mix_slave = mix4_slave;
            MIX4_SLAVE_SAVE = 1;

            updateMix(line);
          }
          
        }

      }

      if (downPressed)
      {
        delay(buttonDelay);

        movementBuzz();
        if (mix == mix_1)
        {
          if (mix1_slave.equals("CH1"))
          {
            mix1_slave = "CH2";
            mix_slave = mix1_slave;
            MIX1_SLAVE_SAVE = 2;

            updateMix(line);
          }

          else if (mix1_slave.equals("CH2"))
          {
            mix1_slave = "CH3";
            mix_slave = mix1_slave;
            MIX1_SLAVE_SAVE = 3;

            updateMix(line);
          }

          else if (mix1_slave.equals("CH3"))
          {
            mix1_slave = "CH4";
            mix_slave = mix1_slave;
            MIX1_SLAVE_SAVE = 4;

            updateMix(line);
          }

          else if (mix1_slave.equals("CH4"))
          {
            mix1_slave = "CH5";
            mix_slave = mix1_slave;
            MIX1_SLAVE_SAVE = 5;

            updateMix(line);
          }

          else if (mix1_slave.equals("CH5"))
          {
            mix1_slave = "CH6";
            mix_slave = mix1_slave;
            MIX1_SLAVE_SAVE = 6;

            updateMix(line);
          }

          else if (mix1_slave.equals("CH6"))
          {
            mix1_slave = "CH1";
            mix_slave = mix1_slave;
            MIX1_SLAVE_SAVE = 1;

            updateMix(line);
          }

        }

        if (mix == mix_2)
        {
          if (mix2_slave.equals("CH1"))
          {
            mix2_slave = "CH2";
            mix_slave = mix2_slave;
            MIX2_SLAVE_SAVE = 2;

            updateMix(line);
          }

          else if (mix2_slave.equals("CH2"))
          {
            mix2_slave = "CH3";
            mix_slave = mix2_slave;
            MIX2_SLAVE_SAVE = 3;

            updateMix(line);
          }

          else if (mix2_slave.equals("CH3"))
          {
            mix2_slave = "CH4";
            mix_slave = mix2_slave;
            MIX2_SLAVE_SAVE = 4;

            updateMix(line);
          }

          else if (mix2_slave.equals("CH4"))
          {
            mix2_slave = "CH5";
            mix_slave = mix2_slave;
            MIX2_SLAVE_SAVE = 5;

            updateMix(line);
          }

          else if (mix2_slave.equals("CH5"))
          {
            mix2_slave = "CH6";
            mix_slave = mix2_slave;
            MIX2_SLAVE_SAVE = 6;

            updateMix(line);
          }

          else if (mix2_slave.equals("CH6"))
          {
            mix2_slave = "CH1";
            mix_slave = mix2_slave;
            MIX2_SLAVE_SAVE = 1;

            updateMix(line);
          }

          
        }

        if (mix == mix_3)
        {
          if (mix3_slave.equals("CH1"))
          {
            mix3_slave = "CH2";
            mix_slave = mix3_slave;
            MIX3_SLAVE_SAVE = 2;

            updateMix(line);
          }

          else if (mix3_slave.equals("CH2"))
          {
            mix3_slave = "CH3";
            mix_slave = mix3_slave;
            MIX3_SLAVE_SAVE = 3;

            updateMix(line);
          }

          else if (mix3_slave.equals("CH3"))
          {
            mix3_slave = "CH4";
            mix_slave = mix3_slave;
            MIX3_SLAVE_SAVE = 4;

            updateMix(line);
          }

          else if (mix3_slave.equals("CH4"))
          {
            mix3_slave = "CH5";
            mix_slave = mix3_slave;
            MIX3_SLAVE_SAVE = 5;

            updateMix(line);
          }

          else if (mix3_slave.equals("CH5"))
          {
            mix3_slave = "CH6";
            mix_slave = mix3_slave;
            MIX3_SLAVE_SAVE = 6;

            updateMix(line);
          }

          else if (mix3_slave.equals("CH6"))
          {
            mix3_slave = "CH1";
            mix_slave = mix3_slave;
            MIX3_SLAVE_SAVE = 1;

            updateMix(line);
          }

        }

        if (mix == mix_4)
        {
          if (mix4_slave.equals("CH1"))
          {
            mix4_slave = "CH2";
            mix_slave = mix4_slave;
            MIX4_SLAVE_SAVE = 2;

            updateMix(line);
          }

          else if (mix4_slave.equals("CH2"))
          {
            mix4_slave = "CH3";
            mix_slave = mix4_slave;
            MIX4_SLAVE_SAVE = 3;

            updateMix(line);
          }

          else if (mix4_slave.equals("CH3"))
          {
            mix4_slave = "CH4";
            mix_slave = mix4_slave;
            MIX4_SLAVE_SAVE = 4;

            updateMix(line);
          }

          else if (mix4_slave.equals("CH4"))
          {
            mix4_slave = "CH5";
            mix_slave = mix4_slave;
            MIX4_SLAVE_SAVE = 5;

            updateMix(line);
          }

          else if (mix4_slave.equals("CH5"))
          {
            mix4_slave = "CH6";
            mix_slave = mix4_slave;
            MIX4_SLAVE_SAVE = 6;

            updateMix(line);
          }

          else if (mix4_slave.equals("CH6"))
          {
            mix4_slave = "CH1";
            mix_slave = mix4_slave;
            MIX4_SLAVE_SAVE = 1;

            updateMix(line);
          }
          
        }
        
      }

      if (cancelPressed)
      {
        cancelBuzz();
        break;
      }
    }

  }

  //-------------------------------Offset-----------------------------
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
        delay(buttonDelay);

        movementBuzz();
        if (mix == mix_1)
        {
          if (mix1_offset < 100)
          {
            mix1_offset++;
            mix_offset = mix1_offset;
            updateMix(line);
          }
        }
        
        if (mix == mix_2)
        {
          if (mix2_offset < 100)
          {
            mix2_offset++;
            mix_offset = mix2_offset;
            updateMix(line);
          }
        }
        
        if (mix == mix_3)
        {
          if (mix3_offset < 100)
          {
            mix3_offset++;
            mix_offset = mix3_offset;
            updateMix(line);
          }
        }
        
        if (mix == mix_4)
        {
          if (mix4_offset < 100)
          {
            mix4_offset++;
            mix_offset = mix4_offset;
            updateMix(line);
          }
        }
      }
      
      if (downPressed)
      {
        delay(buttonDelay);

        movementBuzz();
        if (mix == mix_1)
        {
          if (mix1_offset > -100)
          {
            mix1_offset--;
            mix_offset = mix1_offset;
            updateMix(line);
          }
        }
        
        if (mix == mix_2)
        {
          if (mix2_offset > -100)
          {
            mix2_offset--;
            mix_offset = mix2_offset;
            updateMix(line);
          }
        }
        
        if (mix == mix_3)
        {
          if (mix3_offset > -100)
          {
            mix3_offset--;
            mix_offset = mix3_offset;
            updateMix(line);
          }
        }
        
        if (mix == mix_4)
        {
          if (mix4_offset > -100)
          {
            mix4_offset--;
            mix_offset = mix4_offset;
            updateMix(line);
          }
        }
      }
      
      if (cancelPressed)
      {
        cancelBuzz();
        break;
      }
    }



  }

  //--------------------------Neg-------------------------------
  if (line == 5)
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
        delay(buttonDelay);

        movementBuzz();
        if (mix == mix_1)
        {
          if (mix1_neg < 100)
          {
            mix1_neg++;
            mix_neg = mix1_neg;
            updateMix(line);
          }
        }
        
        if (mix == mix_2)
        {
          if (mix2_neg < 100)
          {
            mix2_neg++;
            mix_neg = mix2_neg;
            updateMix(line);
          }
        }
        
        if (mix == mix_3)
        {
          if (mix3_neg < 100)
          {
            mix3_neg++;
            mix_neg = mix3_neg;
            updateMix(line);
          }
        }
        
        if (mix == mix_4)
        {
          if (mix4_neg < 100)
          {
            mix4_neg++;
            mix_neg = mix4_neg;
            updateMix(line);
          } 
        }
      }
      
      
      if (downPressed)
      {
        delay(buttonDelay);

        movementBuzz();
        if (mix == mix_1)
        {
          if (mix1_neg > -100)
          {
            mix1_neg--;
            mix_neg = mix1_neg;
            updateMix(line);
          }
        }
        
        if (mix == mix_2)
        {
          if (mix2_neg > -100)
          {
            mix2_neg--;
            mix_neg = mix2_neg;
            updateMix(line);
          }
        }
        
        if (mix == mix_3)
        {
          if (mix3_neg > -100)
          {
            mix3_neg--;
            mix_neg = mix3_neg;
            updateMix(line);
          }
        }
        
        if (mix == mix_4)
        {
          if (mix4_neg > -100)
          {
            mix4_neg--;
            mix_neg = mix4_neg;
            updateMix(line);
          }
        }
      }

      if (cancelPressed)
      {
        cancelBuzz();
        break;
      }
    }

  }


    //---------------------------------Pos------------------------
  if (line == 6)
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
        delay(buttonDelay);

        movementBuzz();
        if (mix == mix_1)
        {
          if (mix1_pos < 100)
          {
            mix1_pos++;
            mix_pos = mix1_pos;
            updateMix(line);
          }
        }
        
        if (mix == mix_2)
        {
          if (mix2_pos < 100)
          {
            mix2_pos++;
            mix_pos = mix2_pos;
            updateMix(line);
          }
        }
        
        if (mix == mix_3)
        {
          if (mix3_pos < 100)
          {
            mix3_pos++;
            mix_pos = mix3_pos;
            updateMix(line);
          }
        }
        
        if (mix == mix_4)
        {
          if (mix4_pos < 100)
          {
            mix4_pos++;
            mix_pos = mix4_pos;
            updateMix(line);
          } 
        }
      }
      
      if (downPressed)
      {
        delay(buttonDelay);

        movementBuzz();
        if (mix == mix_1)
        {
          if (mix1_pos > -100)
          {
            mix1_pos--;
            mix_pos = mix1_pos;
            updateMix(line);
          }
        }
        
        if (mix == mix_2)
        {
          if (mix2_pos > -100)
          {
            mix2_pos--;
            mix_pos = mix2_pos;
            updateMix(line);
          }
        }
        
        if (mix == mix_3)
        {
          if (mix3_pos > -100)
          {
            mix3_pos--;
            mix_pos = mix3_pos;
            updateMix(line);
          }
        }
        
        if (mix == mix_4)
        {
          if (mix4_pos > -100)
          {
            mix4_pos--;
            mix_pos = mix4_pos;
            updateMix(line);
          }
        }
      }
      
      if (cancelPressed)
      {
        cancelBuzz();
        break;
      }
    }

  }
  cancelBuzz();
  updateMix(line);
}


void saveMix()
{
  if (Model1_Sel == "(*)")
  {
    MODEL_1_MIX_1_EEPROM = EEPROM.put(81,mix_1); 
    MODEL_1_MIX1_EN_EEPROM = EEPROM.put(82,MIX1_EN_SAVE); //String
    MODEL_1_MIX1_MASTER_EEPROM = EEPROM.put(83,MIX1_MASTER_SAVE); //String
    MODEL_1_MIX1_SLAVE_EEPROM = EEPROM.put(84,MIX1_SLAVE_SAVE); //String
    MODEL_1_MIX1_POS_EEPROM = EEPROM.put(85,mix1_pos);
    MODEL_1_MIX1_NEG_EEPROM = EEPROM.put(86,mix1_neg);
    MODEL_1_MIX1_OFFSET_EEPROM = EEPROM.put(87,mix1_offset);

    MODEL_1_MIX_2_EEPROM = EEPROM.put(91,mix_2);
    MODEL_1_MIX2_EN_EEPROM = EEPROM.put(92,MIX2_EN_SAVE); //String
    MODEL_1_MIX2_MASTER_EEPROM = EEPROM.put(93,MIX2_MASTER_SAVE); //String
    MODEL_1_MIX2_SLAVE_EEPROM = EEPROM.put(94,MIX2_SLAVE_SAVE); //String
    MODEL_1_MIX2_POS_EEPROM = EEPROM.put(95,mix2_pos);
    MODEL_1_MIX2_NEG_EEPROM = EEPROM.put(96,mix2_neg);
    MODEL_1_MIX2_OFFSET_EEPROM = EEPROM.put(97,mix2_offset);

    MODEL_1_MIX_3_EEPROM = EEPROM.put(101,mix_3);
    MODEL_1_MIX3_EN_EEPROM = EEPROM.put(102,MIX3_EN_SAVE); //String
    MODEL_1_MIX3_MASTER_EEPROM = EEPROM.put(103,MIX3_MASTER_SAVE); //String
    MODEL_1_MIX3_SLAVE_EEPROM = EEPROM.put(104,MIX3_SLAVE_SAVE); //String
    MODEL_1_MIX3_POS_EEPROM = EEPROM.put(105,mix3_pos);
    MODEL_1_MIX3_NEG_EEPROM = EEPROM.put(106,mix3_neg);
    MODEL_1_MIX3_OFFSET_EEPROM = EEPROM.put(107,mix3_offset);
    
    MODEL_1_MIX_4_EEPROM = EEPROM.put(111,mix_4);
    MODEL_1_MIX4_EN_EEPROM = EEPROM.put(112,MIX4_EN_SAVE); //String
    MODEL_1_MIX4_MASTER_EEPROM = EEPROM.put(113,MIX4_MASTER_SAVE); //String
    MODEL_1_MIX4_SLAVE_EEPROM = EEPROM.put(114,MIX4_SLAVE_SAVE); //String
    MODEL_1_MIX4_POS_EEPROM = EEPROM.put(115,mix4_pos);
    MODEL_1_MIX4_NEG_EEPROM = EEPROM.put(116,mix4_neg);
    MODEL_1_MIX4_OFFSET_EEPROM = EEPROM.put(117,mix4_offset);
  }

  else if (Model2_Sel == "(*)")
  {
    MODEL_2_MIX_1_EEPROM = EEPROM.put(201,mix_1); 
    MODEL_2_MIX1_EN_EEPROM = EEPROM.put(202,MIX1_EN_SAVE); //String
    MODEL_2_MIX1_MASTER_EEPROM = EEPROM.put(203,MIX1_MASTER_SAVE); //String
    MODEL_2_MIX1_SLAVE_EEPROM = EEPROM.put(204,MIX1_SLAVE_SAVE); //String
    MODEL_2_MIX1_POS_EEPROM = EEPROM.put(205,mix1_pos);
    MODEL_2_MIX1_NEG_EEPROM = EEPROM.put(206,mix1_neg);
    MODEL_2_MIX1_OFFSET_EEPROM = EEPROM.put(207,mix1_offset);

    MODEL_2_MIX_2_EEPROM = EEPROM.put(211,mix_2);
    MODEL_2_MIX2_EN_EEPROM = EEPROM.put(212,MIX2_EN_SAVE); //String
    MODEL_2_MIX2_MASTER_EEPROM = EEPROM.put(213,MIX2_MASTER_SAVE); //String
    MODEL_2_MIX2_SLAVE_EEPROM = EEPROM.put(214,MIX2_SLAVE_SAVE); //String
    MODEL_2_MIX2_POS_EEPROM = EEPROM.put(215,mix2_pos);
    MODEL_2_MIX2_NEG_EEPROM = EEPROM.put(216,mix2_neg);
    MODEL_2_MIX2_OFFSET_EEPROM = EEPROM.put(217,mix2_offset);

    MODEL_2_MIX_3_EEPROM = EEPROM.put(221,mix_3);
    MODEL_2_MIX3_EN_EEPROM = EEPROM.put(222,MIX3_EN_SAVE); //String
    MODEL_2_MIX3_MASTER_EEPROM = EEPROM.put(223,MIX3_MASTER_SAVE); //String
    MODEL_2_MIX3_SLAVE_EEPROM = EEPROM.put(224,MIX3_SLAVE_SAVE); //String
    MODEL_2_MIX3_POS_EEPROM = EEPROM.put(225,mix3_pos);
    MODEL_2_MIX3_NEG_EEPROM = EEPROM.put(226,mix3_neg);
    MODEL_2_MIX3_OFFSET_EEPROM = EEPROM.put(227,mix3_offset);
    
    MODEL_2_MIX_4_EEPROM = EEPROM.put(231,mix_4);
    MODEL_2_MIX4_EN_EEPROM = EEPROM.put(232,MIX4_EN_SAVE); //String
    MODEL_2_MIX4_MASTER_EEPROM = EEPROM.put(233,MIX4_MASTER_SAVE); //String
    MODEL_2_MIX4_SLAVE_EEPROM = EEPROM.put(234,MIX4_SLAVE_SAVE); //String
    MODEL_2_MIX4_POS_EEPROM = EEPROM.put(235,mix4_pos);
    MODEL_2_MIX4_NEG_EEPROM = EEPROM.put(236,mix4_neg);
    MODEL_2_MIX4_OFFSET_EEPROM = EEPROM.put(237,mix4_offset);
  }

  else if (Model3_Sel == "(*)")
  {
    MODEL_3_MIX_1_EEPROM = EEPROM.put(321,mix_1); 
    MODEL_3_MIX1_EN_EEPROM = EEPROM.put(322,MIX1_EN_SAVE); //String
    MODEL_3_MIX1_MASTER_EEPROM = EEPROM.put(323,MIX1_MASTER_SAVE); //String
    MODEL_3_MIX1_SLAVE_EEPROM = EEPROM.put(324,MIX1_SLAVE_SAVE); //String
    MODEL_3_MIX1_POS_EEPROM = EEPROM.put(325,mix1_pos);
    MODEL_3_MIX1_NEG_EEPROM = EEPROM.put(326,mix1_neg);
    MODEL_3_MIX1_OFFSET_EEPROM = EEPROM.put(327,mix1_offset);

    MODEL_3_MIX_2_EEPROM = EEPROM.put(331,mix_2);
    MODEL_3_MIX2_EN_EEPROM = EEPROM.put(332,MIX2_EN_SAVE); //String
    MODEL_3_MIX2_MASTER_EEPROM = EEPROM.put(333,MIX2_MASTER_SAVE); //String
    MODEL_3_MIX2_SLAVE_EEPROM = EEPROM.put(334,MIX2_SLAVE_SAVE); //String
    MODEL_3_MIX2_POS_EEPROM = EEPROM.put(335,mix2_pos);
    MODEL_3_MIX2_NEG_EEPROM = EEPROM.put(336,mix2_neg);
    MODEL_3_MIX2_OFFSET_EEPROM = EEPROM.put(337,mix2_offset);

    MODEL_3_MIX_3_EEPROM = EEPROM.put(341,mix_3);
    MODEL_3_MIX3_EN_EEPROM = EEPROM.put(342,MIX3_EN_SAVE); //String
    MODEL_3_MIX3_MASTER_EEPROM = EEPROM.put(343,MIX3_MASTER_SAVE); //String
    MODEL_3_MIX3_SLAVE_EEPROM = EEPROM.put(344,MIX3_SLAVE_SAVE); //String
    MODEL_3_MIX3_POS_EEPROM = EEPROM.put(345,mix3_pos);
    MODEL_3_MIX3_NEG_EEPROM = EEPROM.put(346,mix3_neg);
    MODEL_3_MIX3_OFFSET_EEPROM = EEPROM.put(347,mix3_offset);
    
    MODEL_3_MIX_4_EEPROM = EEPROM.put(351,mix_4);
    MODEL_3_MIX4_EN_EEPROM = EEPROM.put(352,MIX4_EN_SAVE); //String
    MODEL_3_MIX4_MASTER_EEPROM = EEPROM.put(353,MIX4_MASTER_SAVE); //String
    MODEL_3_MIX4_SLAVE_EEPROM = EEPROM.put(354,MIX4_SLAVE_SAVE); //String
    MODEL_3_MIX4_POS_EEPROM = EEPROM.put(355,mix4_pos);
    MODEL_3_MIX4_NEG_EEPROM = EEPROM.put(356,mix4_neg);
    MODEL_3_MIX4_OFFSET_EEPROM = EEPROM.put(357,mix4_offset);
  }

  else if (Model4_Sel == "(*)")
  {
    MODEL_4_MIX_1_EEPROM = EEPROM.put(441,mix_1); 
    MODEL_4_MIX1_EN_EEPROM = EEPROM.put(442,MIX1_EN_SAVE); //String
    MODEL_4_MIX1_MASTER_EEPROM = EEPROM.put(443,MIX1_MASTER_SAVE); //String
    MODEL_4_MIX1_SLAVE_EEPROM = EEPROM.put(444,MIX1_SLAVE_SAVE); //String
    MODEL_4_MIX1_POS_EEPROM = EEPROM.put(445,mix1_pos);
    MODEL_4_MIX1_NEG_EEPROM = EEPROM.put(446,mix1_neg);
    MODEL_4_MIX1_OFFSET_EEPROM = EEPROM.put(447,mix1_offset);

    MODEL_4_MIX_2_EEPROM = EEPROM.put(451,mix_2);
    MODEL_4_MIX2_EN_EEPROM = EEPROM.put(452,MIX2_EN_SAVE); //String
    MODEL_4_MIX2_MASTER_EEPROM = EEPROM.put(453,MIX2_MASTER_SAVE); //String
    MODEL_4_MIX2_SLAVE_EEPROM = EEPROM.put(454,MIX2_SLAVE_SAVE); //String
    MODEL_4_MIX2_POS_EEPROM = EEPROM.put(455,mix2_pos);
    MODEL_4_MIX2_NEG_EEPROM = EEPROM.put(456,mix2_neg);
    MODEL_4_MIX2_OFFSET_EEPROM = EEPROM.put(457,mix2_offset);

    MODEL_4_MIX_3_EEPROM = EEPROM.put(461,mix_3);
    MODEL_4_MIX3_EN_EEPROM = EEPROM.put(462,MIX3_EN_SAVE); //String
    MODEL_4_MIX3_MASTER_EEPROM = EEPROM.put(463,MIX3_MASTER_SAVE); //String
    MODEL_4_MIX3_SLAVE_EEPROM = EEPROM.put(464,MIX3_SLAVE_SAVE); //String
    MODEL_4_MIX3_POS_EEPROM = EEPROM.put(465,mix3_pos);
    MODEL_4_MIX3_NEG_EEPROM = EEPROM.put(466,mix3_neg);
    MODEL_4_MIX3_OFFSET_EEPROM = EEPROM.put(467,mix3_offset);
    
    MODEL_4_MIX_4_EEPROM = EEPROM.put(41,mix_4);
    MODEL_4_MIX4_EN_EEPROM = EEPROM.put(472,MIX4_EN_SAVE); //String
    MODEL_4_MIX4_MASTER_EEPROM = EEPROM.put(473,MIX4_MASTER_SAVE); //String
    MODEL_4_MIX4_SLAVE_EEPROM = EEPROM.put(474,MIX4_SLAVE_SAVE); //String
    MODEL_4_MIX4_POS_EEPROM = EEPROM.put(475,mix4_pos);
    MODEL_4_MIX4_NEG_EEPROM = EEPROM.put(476,mix4_neg);
    MODEL_4_MIX4_OFFSET_EEPROM = EEPROM.put(477,mix4_offset);
  }

  else if (Model5_Sel == "(*)")
  {
    MODEL_5_MIX_1_EEPROM = EEPROM.put(561,mix_1); 
    MODEL_5_MIX1_EN_EEPROM = EEPROM.put(562,MIX1_EN_SAVE); //String
    MODEL_5_MIX1_MASTER_EEPROM = EEPROM.put(563,MIX1_MASTER_SAVE); //String
    MODEL_5_MIX1_SLAVE_EEPROM = EEPROM.put(564,MIX1_SLAVE_SAVE); //String
    MODEL_5_MIX1_POS_EEPROM = EEPROM.put(565,mix1_pos);
    MODEL_5_MIX1_NEG_EEPROM = EEPROM.put(566,mix1_neg);
    MODEL_5_MIX1_OFFSET_EEPROM = EEPROM.put(567,mix1_offset);

    MODEL_5_MIX_2_EEPROM = EEPROM.put(571,mix_2);
    MODEL_5_MIX2_EN_EEPROM = EEPROM.put(572,MIX2_EN_SAVE); //String
    MODEL_5_MIX2_MASTER_EEPROM = EEPROM.put(573,MIX2_MASTER_SAVE); //String
    MODEL_5_MIX2_SLAVE_EEPROM = EEPROM.put(574,MIX2_SLAVE_SAVE); //String
    MODEL_5_MIX2_POS_EEPROM = EEPROM.put(575,mix2_pos);
    MODEL_5_MIX2_NEG_EEPROM = EEPROM.put(576,mix2_neg);
    MODEL_5_MIX2_OFFSET_EEPROM = EEPROM.put(577,mix2_offset);

    MODEL_5_MIX_3_EEPROM = EEPROM.put(581,mix_3);
    MODEL_5_MIX3_EN_EEPROM = EEPROM.put(582,MIX3_EN_SAVE); //String
    MODEL_5_MIX3_MASTER_EEPROM = EEPROM.put(583,MIX3_MASTER_SAVE); //String
    MODEL_5_MIX3_SLAVE_EEPROM = EEPROM.put(584,MIX3_SLAVE_SAVE); //String
    MODEL_5_MIX3_POS_EEPROM = EEPROM.put(585,mix3_pos);
    MODEL_5_MIX3_NEG_EEPROM = EEPROM.put(586,mix3_neg);
    MODEL_5_MIX3_OFFSET_EEPROM = EEPROM.put(587,mix3_offset);
    
    MODEL_5_MIX_4_EEPROM = EEPROM.put(591,mix_4);
    MODEL_5_MIX4_EN_EEPROM = EEPROM.put(592,MIX4_EN_SAVE); //String
    MODEL_5_MIX4_MASTER_EEPROM = EEPROM.put(593,MIX4_MASTER_SAVE); //String
    MODEL_5_MIX4_SLAVE_EEPROM = EEPROM.put(594,MIX4_SLAVE_SAVE); //String
    MODEL_5_MIX4_POS_EEPROM = EEPROM.put(595,mix4_pos);
    MODEL_5_MIX4_NEG_EEPROM = EEPROM.put(596,mix4_neg);
    MODEL_5_MIX4_OFFSET_EEPROM = EEPROM.put(597,mix4_offset);
  }
}


void loadMix()
{
  if (Model1_Sel == "(*)")
  {
    MODEL_1_MIX1_EN_EEPROM = EEPROM.read(82); //String
    MODEL_1_MIX1_MASTER_EEPROM = EEPROM.read(83); //String
    MODEL_1_MIX1_SLAVE_EEPROM = EEPROM.read(84); //String
    mix1_pos = EEPROM.read(85);
    mix1_neg = EEPROM.read(86);
    mix1_offset = EEPROM.read(87);

    //en
    if (MODEL_1_MIX1_EN_EEPROM == 0)
    {
      mix1_en = "[OFF]";
    }

    else if (MODEL_1_MIX1_EN_EEPROM == 1)
    {
      mix1_en = "[ON]";
    }

    //master
    if (MODEL_1_MIX1_MASTER_EEPROM == 1)
    {
      mix1_master = "CH1";
    }

    else if (MODEL_1_MIX1_MASTER_EEPROM == 2)
    {
      mix1_master = "CH2";
    }

    else if (MODEL_1_MIX1_MASTER_EEPROM == 3)
    {
      mix1_master = "CH3";
    }

    else if (MODEL_1_MIX1_MASTER_EEPROM == 4)
    {
      mix1_master = "CH4";
    }

    else if (MODEL_1_MIX1_MASTER_EEPROM == 5)
    {
      mix1_master = "CH5";
    }

    else if (MODEL_1_MIX1_MASTER_EEPROM == 6)
    {
      mix1_master = "CH6";
    }

    //slave
    if (MODEL_1_MIX1_SLAVE_EEPROM == 1)
    {
      mix1_slave = "CH1";
    }

    else if (MODEL_1_MIX1_SLAVE_EEPROM == 2)
    {
      mix1_slave = "CH2";
    }

    else if (MODEL_1_MIX1_SLAVE_EEPROM == 3)
    {
      mix1_slave = "CH3";
    }

    else if (MODEL_1_MIX1_SLAVE_EEPROM == 4)
    {
      mix1_slave = "CH4";
    }

    else if (MODEL_1_MIX1_SLAVE_EEPROM == 5)
    {
      mix1_slave = "CH5";
    }

    else if (MODEL_1_MIX1_SLAVE_EEPROM == 6)
    {
      mix1_slave = "CH6";
    }

    MODEL_1_MIX2_EN_EEPROM = EEPROM.read(92); //String
    MODEL_1_MIX2_MASTER_EEPROM = EEPROM.read(93); //String
    MODEL_1_MIX2_SLAVE_EEPROM = EEPROM.read(94); //String
    mix2_pos = EEPROM.read(95);
    mix2_neg = EEPROM.read(96);
    mix2_offset = EEPROM.read(97);

    //en
    if (MODEL_1_MIX2_EN_EEPROM == 0)
    {
      mix2_en = "[OFF]";
    }

    else if (MODEL_1_MIX2_EN_EEPROM == 1)
    {
      mix2_en = "[ON]";
    }

    //master
    if (MODEL_1_MIX2_MASTER_EEPROM == 1)
    {
      mix2_master = "CH1";
    }

    else if (MODEL_1_MIX2_MASTER_EEPROM == 2)
    {
      mix2_master = "CH2";
    }

    else if (MODEL_1_MIX2_MASTER_EEPROM == 3)
    {
      mix2_master = "CH3";
    }

    else if (MODEL_1_MIX2_MASTER_EEPROM == 4)
    {
      mix2_master = "CH4";
    }

    else if (MODEL_1_MIX2_MASTER_EEPROM == 5)
    {
      mix2_master = "CH5";
    }

    else if (MODEL_1_MIX2_MASTER_EEPROM == 6)
    {
      mix2_master = "CH6";
    }

    //slave
    if (MODEL_1_MIX2_SLAVE_EEPROM == 1)
    {
      mix2_slave = "CH1";
    }

    else if (MODEL_1_MIX2_SLAVE_EEPROM == 2)
    {
      mix2_slave = "CH2";
    }

    else if (MODEL_1_MIX2_SLAVE_EEPROM == 3)
    {
      mix2_slave = "CH3";
    }

    else if (MODEL_1_MIX2_SLAVE_EEPROM == 4)
    {
      mix2_slave = "CH4";
    }

    else if (MODEL_1_MIX2_SLAVE_EEPROM == 5)
    {
      mix2_slave = "CH5";
    }

    else if (MODEL_1_MIX2_SLAVE_EEPROM == 6)
    {
      mix2_slave = "CH6";
    }

    MODEL_1_MIX3_EN_EEPROM = EEPROM.read(102); //String
    MODEL_1_MIX3_MASTER_EEPROM = EEPROM.read(103); //String
    MODEL_1_MIX3_SLAVE_EEPROM = EEPROM.read(104); //String
    mix3_pos = EEPROM.read(105);
    mix3_neg = EEPROM.read(106);
    mix3_offset = EEPROM.read(107);

    //en
    if (MODEL_1_MIX3_EN_EEPROM == 0)
    {
      mix3_en = "[OFF]";
    }

    else if (MODEL_1_MIX3_EN_EEPROM == 1)
    {
      mix3_en = "[ON]";
    }

    //master
    if (MODEL_1_MIX3_MASTER_EEPROM == 1)
    {
      mix3_master = "CH1";
    }

    else if (MODEL_1_MIX3_MASTER_EEPROM == 2)
    {
      mix3_master = "CH2";
    }

    else if (MODEL_1_MIX3_MASTER_EEPROM == 3)
    {
      mix3_master = "CH3";
    }

    else if (MODEL_1_MIX3_MASTER_EEPROM == 4)
    {
      mix3_master = "CH4";
    }

    else if (MODEL_1_MIX3_MASTER_EEPROM == 5)
    {
      mix3_master = "CH5";
    }

    else if (MODEL_1_MIX3_MASTER_EEPROM == 6)
    {
      mix3_master = "CH6";
    }

    //slave
    if (MODEL_1_MIX3_SLAVE_EEPROM == 1)
    {
      mix3_slave = "CH1";
    }

    else if (MODEL_1_MIX3_SLAVE_EEPROM == 2)
    {
      mix3_slave = "CH2";
    }

    else if (MODEL_1_MIX3_SLAVE_EEPROM == 3)
    {
      mix3_slave = "CH3";
    }

    else if (MODEL_1_MIX3_SLAVE_EEPROM == 4)
    {
      mix3_slave = "CH4";
    }

    else if (MODEL_1_MIX3_SLAVE_EEPROM == 5)
    {
      mix3_slave = "CH5";
    }

    else if (MODEL_1_MIX3_SLAVE_EEPROM == 6)
    {
      mix3_slave = "CH6";
    }

    MODEL_1_MIX4_EN_EEPROM = EEPROM.read(112); //String
    MODEL_1_MIX4_MASTER_EEPROM = EEPROM.read(113); //String
    MODEL_1_MIX4_SLAVE_EEPROM = EEPROM.read(114); //String
    mix4_pos = EEPROM.read(115);
    mix4_neg = EEPROM.read(116);
    mix4_offset = EEPROM.read(117);

    //en
    if (MODEL_1_MIX4_EN_EEPROM == 0)
    {
      mix4_en = "[OFF]";
    }

    else if (MODEL_1_MIX4_EN_EEPROM == 1)
    {
      mix4_en = "[ON]";
    }

    //master
    if (MODEL_1_MIX4_MASTER_EEPROM == 1)
    {
      mix4_master = "CH1";
    }

    else if (MODEL_1_MIX4_MASTER_EEPROM == 2)
    {
      mix4_master = "CH2";
    }

    else if (MODEL_1_MIX4_MASTER_EEPROM == 3)
    {
      mix4_master = "CH3";
    }

    else if (MODEL_1_MIX4_MASTER_EEPROM == 4)
    {
      mix4_master = "CH4";
    }

    else if (MODEL_1_MIX4_MASTER_EEPROM == 5)
    {
      mix4_master = "CH5";
    }

    else if (MODEL_1_MIX4_MASTER_EEPROM == 6)
    {
      mix4_master = "CH6";
    }

    //slave
    if (MODEL_1_MIX4_SLAVE_EEPROM == 1)
    {
      mix4_slave = "CH1";
    }

    else if (MODEL_1_MIX4_SLAVE_EEPROM == 2)
    {
      mix4_slave = "CH2";
    }

    else if (MODEL_1_MIX4_SLAVE_EEPROM == 3)
    {
      mix4_slave = "CH3";
    }

    else if (MODEL_1_MIX4_SLAVE_EEPROM == 4)
    {
      mix4_slave = "CH4";
    }

    else if (MODEL_1_MIX4_SLAVE_EEPROM == 5)
    {
      mix4_slave = "CH5";
    }

    else if (MODEL_1_MIX4_SLAVE_EEPROM == 6)
    {
      mix4_slave = "CH6";
    }

  }

  else if (Model2_Sel == "(*)")
  {
    MODEL_2_MIX1_EN_EEPROM = EEPROM.read(202); //String
    MODEL_2_MIX1_MASTER_EEPROM = EEPROM.read(203); //String
    MODEL_2_MIX1_SLAVE_EEPROM = EEPROM.read(204); //String
    mix1_pos = EEPROM.read(205);
    mix1_neg = EEPROM.read(206);
    mix1_offset = EEPROM.read(207);


    //en
    if (MODEL_2_MIX1_EN_EEPROM == 0)
    {
      mix1_en = "[OFF]";
    }

    else if (MODEL_2_MIX1_EN_EEPROM == 1)
    {
      mix1_en = "[ON]";
    }

    //master
    if (MODEL_2_MIX1_MASTER_EEPROM == 1)
    {
      mix1_master = "CH1";
    }

    else if (MODEL_2_MIX1_MASTER_EEPROM == 2)
    {
      mix1_master = "CH2";
    }

    else if (MODEL_2_MIX1_MASTER_EEPROM == 3)
    {
      mix1_master = "CH3";
    }

    else if (MODEL_2_MIX1_MASTER_EEPROM == 4)
    {
      mix1_master = "CH4";
    }

    else if (MODEL_2_MIX1_MASTER_EEPROM == 5)
    {
      mix1_master = "CH5";
    }

    else if (MODEL_2_MIX1_MASTER_EEPROM == 6)
    {
      mix1_master = "CH6";
    }

    //slave
    if (MODEL_2_MIX1_SLAVE_EEPROM == 1)
    {
      mix1_slave = "CH1";
    }

    else if (MODEL_2_MIX1_SLAVE_EEPROM == 2)
    {
      mix1_slave = "CH2";
    }

    else if (MODEL_2_MIX1_SLAVE_EEPROM == 3)
    {
      mix1_slave = "CH3";
    }

    else if (MODEL_2_MIX1_SLAVE_EEPROM == 4)
    {
      mix1_slave = "CH4";
    }

    else if (MODEL_2_MIX1_SLAVE_EEPROM == 5)
    {
      mix1_slave = "CH5";
    }

    else if (MODEL_2_MIX1_SLAVE_EEPROM == 6)
    {
      mix1_slave = "CH6";
    }

    MODEL_2_MIX2_EN_EEPROM = EEPROM.read(212); //String
    MODEL_2_MIX2_MASTER_EEPROM = EEPROM.read(213); //String
    MODEL_2_MIX2_SLAVE_EEPROM = EEPROM.read(214); //String
    mix2_pos = EEPROM.read(215);
    mix2_neg = EEPROM.read(216);
    mix2_offset = EEPROM.read(217);

    //en
    if (MODEL_2_MIX2_EN_EEPROM == 0)
    {
      mix2_en = "[OFF]";
    }

    else if (MODEL_2_MIX1_EN_EEPROM == 1)
    {
      mix2_en = "[ON]";
    }

    //master
    if (MODEL_2_MIX2_MASTER_EEPROM == 1)
    {
      mix2_master = "CH1";
    }

    else if (MODEL_2_MIX2_MASTER_EEPROM == 2)
    {
      mix2_master = "CH2";
    }

    else if (MODEL_2_MIX2_MASTER_EEPROM == 3)
    {
      mix2_master = "CH3";
    }

    else if (MODEL_2_MIX2_MASTER_EEPROM == 4)
    {
      mix2_master = "CH4";
    }

    else if (MODEL_2_MIX2_MASTER_EEPROM == 5)
    {
      mix2_master = "CH5";
    }

    else if (MODEL_2_MIX2_MASTER_EEPROM == 6)
    {
      mix2_master = "CH6";
    }

    //slave
    if (MODEL_2_MIX2_SLAVE_EEPROM == 1)
    {
      mix2_slave = "CH1";
    }

    else if (MODEL_2_MIX2_SLAVE_EEPROM == 2)
    {
      mix2_slave = "CH2";
    }

    else if (MODEL_2_MIX2_SLAVE_EEPROM == 3)
    {
      mix2_slave = "CH3";
    }

    else if (MODEL_2_MIX2_SLAVE_EEPROM == 4)
    {
      mix2_slave = "CH4";
    }

    else if (MODEL_2_MIX2_SLAVE_EEPROM == 5)
    {
      mix2_slave = "CH5";
    }

    else if (MODEL_2_MIX2_SLAVE_EEPROM == 6)
    {
      mix2_slave = "CH6";
    }

    MODEL_2_MIX3_EN_EEPROM = EEPROM.read(222); //String
    MODEL_2_MIX3_MASTER_EEPROM = EEPROM.read(223); //String
    MODEL_2_MIX3_SLAVE_EEPROM = EEPROM.read(224); //String
    mix3_pos = EEPROM.read(225);
    mix3_neg = EEPROM.read(226);
    mix3_offset = EEPROM.read(227);

    //en
    if (MODEL_2_MIX3_EN_EEPROM == 0)
    {
      mix3_en = "[OFF]";
    }

    else if (MODEL_2_MIX3_EN_EEPROM == 1)
    {
      mix3_en = "[ON]";
    }

    //master
    if (MODEL_2_MIX3_MASTER_EEPROM == 1)
    {
      mix3_master = "CH1";
    }

    else if (MODEL_2_MIX3_MASTER_EEPROM == 2)
    {
      mix3_master = "CH2";
    }

    else if (MODEL_2_MIX3_MASTER_EEPROM == 3)
    {
      mix3_master = "CH3";
    }

    else if (MODEL_2_MIX3_MASTER_EEPROM == 4)
    {
      mix3_master = "CH4";
    }

    else if (MODEL_2_MIX3_MASTER_EEPROM == 5)
    {
      mix3_master = "CH5";
    }

    else if (MODEL_2_MIX3_MASTER_EEPROM == 6)
    {
      mix3_master = "CH6";
    }

    //slave
    if (MODEL_2_MIX3_SLAVE_EEPROM == 1)
    {
      mix3_slave = "CH1";
    }

    else if (MODEL_2_MIX3_SLAVE_EEPROM == 2)
    {
      mix3_slave = "CH2";
    }

    else if (MODEL_2_MIX3_SLAVE_EEPROM == 3)
    {
      mix3_slave = "CH3";
    }

    else if (MODEL_2_MIX3_SLAVE_EEPROM == 4)
    {
      mix3_slave = "CH4";
    }

    else if (MODEL_2_MIX3_SLAVE_EEPROM == 5)
    {
      mix3_slave = "CH5";
    }

    else if (MODEL_2_MIX3_SLAVE_EEPROM == 6)
    {
      mix3_slave = "CH6";
    }

    MODEL_2_MIX4_EN_EEPROM = EEPROM.read(232); //String
    MODEL_2_MIX4_MASTER_EEPROM = EEPROM.read(233); //String
    MODEL_2_MIX4_SLAVE_EEPROM = EEPROM.read(234); //String
    mix4_pos = EEPROM.read(235);
    mix4_neg = EEPROM.read(236);
    mix4_offset = EEPROM.read(237);

    //en
    if (MODEL_2_MIX4_EN_EEPROM == 0)
    {
      mix4_en = "[OFF]";
    }

    else if (MODEL_2_MIX4_EN_EEPROM == 1)
    {
      mix4_en = "[ON]";
    }

    //master
    if (MODEL_2_MIX4_MASTER_EEPROM == 1)
    {
      mix4_master = "CH1";
    }

    else if (MODEL_2_MIX4_MASTER_EEPROM == 2)
    {
      mix4_master = "CH2";
    }

    else if (MODEL_2_MIX4_MASTER_EEPROM == 3)
    {
      mix4_master = "CH3";
    }

    else if (MODEL_2_MIX4_MASTER_EEPROM == 4)
    {
      mix4_master = "CH4";
    }

    else if (MODEL_2_MIX4_MASTER_EEPROM == 5)
    {
      mix4_master = "CH5";
    }

    else if (MODEL_2_MIX4_MASTER_EEPROM == 6)
    {
      mix4_master = "CH6";
    }

    //slave
    if (MODEL_2_MIX4_SLAVE_EEPROM == 1)
    {
      mix4_slave = "CH1";
    }

    else if (MODEL_2_MIX4_SLAVE_EEPROM == 2)
    {
      mix4_slave = "CH2";
    }

    else if (MODEL_2_MIX4_SLAVE_EEPROM == 3)
    {
      mix4_slave = "CH3";
    }

    else if (MODEL_2_MIX4_SLAVE_EEPROM == 4)
    {
      mix4_slave = "CH4";
    }

    else if (MODEL_2_MIX4_SLAVE_EEPROM == 5)
    {
      mix4_slave = "CH5";
    }

    else if (MODEL_2_MIX4_SLAVE_EEPROM == 6)
    {
      mix4_slave = "CH6";
    }
  }

  else if (Model3_Sel == "(*)")
  {
    MODEL_3_MIX1_EN_EEPROM = EEPROM.read(322); //String
    MODEL_3_MIX1_MASTER_EEPROM = EEPROM.read(323); //String
    MODEL_3_MIX1_SLAVE_EEPROM = EEPROM.read(324); //String
    mix1_pos = EEPROM.read(325);
    mix1_neg = EEPROM.read(326);
    mix1_offset = EEPROM.read(327);

    //en
    if (MODEL_3_MIX1_EN_EEPROM == 0)
    {
      mix1_en = "[OFF]";
    }

    else if (MODEL_3_MIX1_EN_EEPROM == 1)
    {
      mix1_en = "[ON]";
    }

    //master
    if (MODEL_3_MIX1_MASTER_EEPROM == 1)
    {
      mix1_master = "CH1";
    }

    else if (MODEL_3_MIX1_MASTER_EEPROM == 2)
    {
      mix1_master = "CH2";
    }

    else if (MODEL_3_MIX1_MASTER_EEPROM == 3)
    {
      mix1_master = "CH3";
    }

    else if (MODEL_3_MIX1_MASTER_EEPROM == 4)
    {
      mix1_master = "CH4";
    }

    else if (MODEL_3_MIX1_MASTER_EEPROM == 5)
    {
      mix1_master = "CH5";
    }

    else if (MODEL_3_MIX1_MASTER_EEPROM == 6)
    {
      mix1_master = "CH6";
    }

    //slave
    if (MODEL_3_MIX1_SLAVE_EEPROM == 1)
    {
      mix1_slave = "CH1";
    }

    else if (MODEL_3_MIX1_SLAVE_EEPROM == 2)
    {
      mix1_slave = "CH2";
    }

    else if (MODEL_3_MIX1_SLAVE_EEPROM == 3)
    {
      mix1_slave = "CH3";
    }

    else if (MODEL_3_MIX1_SLAVE_EEPROM == 4)
    {
      mix1_slave = "CH4";
    }

    else if (MODEL_3_MIX1_SLAVE_EEPROM == 5)
    {
      mix1_slave = "CH5";
    }

    else if (MODEL_3_MIX1_SLAVE_EEPROM == 6)
    {
      mix1_slave = "CH6";
    }

    MODEL_3_MIX2_EN_EEPROM = EEPROM.read(332); //String
    MODEL_3_MIX2_MASTER_EEPROM = EEPROM.read(333); //String
    MODEL_3_MIX2_SLAVE_EEPROM = EEPROM.read(334); //String
    mix2_pos = EEPROM.read(335);
    mix2_neg = EEPROM.read(336);
    mix2_offset = EEPROM.read(337);

    //en
    if (MODEL_3_MIX2_EN_EEPROM == 0)
    {
      mix2_en = "[OFF]";
    }

    else if (MODEL_3_MIX2_EN_EEPROM == 1)
    {
      mix2_en = "[ON]";
    }

    //master
    if (MODEL_3_MIX2_MASTER_EEPROM == 1)
    {
      mix2_master = "CH1";
    }

    else if (MODEL_3_MIX2_MASTER_EEPROM == 2)
    {
      mix2_master = "CH2";
    }

    else if (MODEL_3_MIX2_MASTER_EEPROM == 3)
    {
      mix2_master = "CH3";
    }

    else if (MODEL_3_MIX2_MASTER_EEPROM == 4)
    {
      mix2_master = "CH4";
    }

    else if (MODEL_3_MIX2_MASTER_EEPROM == 5)
    {
      mix2_master = "CH5";
    }

    else if (MODEL_3_MIX2_MASTER_EEPROM == 6)
    {
      mix2_master = "CH6";
    }

    //slave
    if (MODEL_3_MIX2_SLAVE_EEPROM == 1)
    {
      mix2_slave = "CH1";
    }

    else if (MODEL_3_MIX2_SLAVE_EEPROM == 2)
    {
      mix2_slave = "CH2";
    }

    else if (MODEL_3_MIX2_SLAVE_EEPROM == 3)
    {
      mix2_slave = "CH3";
    }

    else if (MODEL_3_MIX2_SLAVE_EEPROM == 4)
    {
      mix2_slave = "CH4";
    }

    else if (MODEL_3_MIX2_SLAVE_EEPROM == 5)
    {
      mix2_slave = "CH5";
    }

    else if (MODEL_3_MIX2_SLAVE_EEPROM == 6)
    {
      mix2_slave = "CH6";
    }

    MODEL_3_MIX3_EN_EEPROM = EEPROM.read(342); //String
    MODEL_3_MIX3_MASTER_EEPROM = EEPROM.read(343); //String
    MODEL_3_MIX3_SLAVE_EEPROM = EEPROM.read(344); //String
    mix3_pos = EEPROM.read(345);
    mix3_neg = EEPROM.read(346);
    mix3_offset = EEPROM.read(347);

    //en
    if (MODEL_3_MIX3_EN_EEPROM == 0)
    {
      mix3_en = "[OFF]";
    }

    else if (MODEL_3_MIX3_EN_EEPROM == 1)
    {
      mix3_en = "[ON]";
    }

    //master
    if (MODEL_3_MIX3_MASTER_EEPROM == 1)
    {
      mix3_master = "CH1";
    }

    else if (MODEL_3_MIX3_MASTER_EEPROM == 2)
    {
      mix3_master = "CH2";
    }

    else if (MODEL_3_MIX3_MASTER_EEPROM == 3)
    {
      mix3_master = "CH3";
    }

    else if (MODEL_3_MIX3_MASTER_EEPROM == 4)
    {
      mix3_master = "CH4";
    }

    else if (MODEL_3_MIX3_MASTER_EEPROM == 5)
    {
      mix3_master = "CH5";
    }

    else if (MODEL_3_MIX3_MASTER_EEPROM == 6)
    {
      mix3_master = "CH6";
    }

    //slave
    if (MODEL_3_MIX3_SLAVE_EEPROM == 1)
    {
      mix3_slave = "CH1";
    }

    else if (MODEL_3_MIX3_SLAVE_EEPROM == 2)
    {
      mix3_slave = "CH2";
    }

    else if (MODEL_3_MIX3_SLAVE_EEPROM == 3)
    {
      mix3_slave = "CH3";
    }

    else if (MODEL_3_MIX3_SLAVE_EEPROM == 4)
    {
      mix3_slave = "CH4";
    }

    else if (MODEL_3_MIX3_SLAVE_EEPROM == 5)
    {
      mix3_slave = "CH5";
    }

    else if (MODEL_3_MIX3_SLAVE_EEPROM == 6)
    {
      mix3_slave = "CH6";
    }

    MODEL_3_MIX4_EN_EEPROM = EEPROM.read(352); //String
    MODEL_3_MIX4_MASTER_EEPROM = EEPROM.read(353); //String
    MODEL_3_MIX4_SLAVE_EEPROM = EEPROM.read(354); //String
    mix4_pos = EEPROM.read(355);
    mix4_neg = EEPROM.read(356);
    mix4_offset = EEPROM.read(357);

    //en
    if (MODEL_3_MIX4_EN_EEPROM == 0)
    {
      mix4_en = "[OFF]";
    }

    else if (MODEL_3_MIX4_EN_EEPROM == 1)
    {
      mix4_en = "[ON]";
    }

    //master
    if (MODEL_3_MIX4_MASTER_EEPROM == 1)
    {
      mix4_master = "CH1";
    }

    else if (MODEL_3_MIX4_MASTER_EEPROM == 2)
    {
      mix4_master = "CH2";
    }

    else if (MODEL_3_MIX4_MASTER_EEPROM == 3)
    {
      mix4_master = "CH3";
    }

    else if (MODEL_3_MIX4_MASTER_EEPROM == 4)
    {
      mix4_master = "CH4";
    }

    else if (MODEL_3_MIX4_MASTER_EEPROM == 5)
    {
      mix4_master = "CH5";
    }

    else if (MODEL_3_MIX4_MASTER_EEPROM == 6)
    {
      mix4_master = "CH6";
    }

    //slave
    if (MODEL_3_MIX4_SLAVE_EEPROM == 1)
    {
      mix4_slave = "CH1";
    }

    else if (MODEL_3_MIX4_SLAVE_EEPROM == 2)
    {
      mix4_slave = "CH2";
    }

    else if (MODEL_3_MIX4_SLAVE_EEPROM == 3)
    {
      mix4_slave = "CH3";
    }

    else if (MODEL_3_MIX4_SLAVE_EEPROM == 4)
    {
      mix4_slave = "CH4";
    }

    else if (MODEL_3_MIX4_SLAVE_EEPROM == 5)
    {
      mix4_slave = "CH5";
    }

    else if (MODEL_3_MIX4_SLAVE_EEPROM == 6)
    {
      mix4_slave = "CH6";
    }

  }

  else if (Model4_Sel == "(*)")
  {
    MODEL_4_MIX1_EN_EEPROM = EEPROM.read(442); //String
    MODEL_4_MIX1_MASTER_EEPROM = EEPROM.read(443); //String
    MODEL_4_MIX1_SLAVE_EEPROM = EEPROM.read(444); //String
    mix1_pos = EEPROM.read(445);
    mix1_neg = EEPROM.read(446);
    mix1_offset = EEPROM.read(447);

    //en
    if (MODEL_4_MIX1_EN_EEPROM == 0)
    {
      mix1_en = "[OFF]";
    }

    else if (MODEL_4_MIX1_EN_EEPROM == 1)
    {
      mix1_en = "[ON]";
    }

    //master
    if (MODEL_4_MIX1_MASTER_EEPROM == 1)
    {
      mix1_master = "CH1";
    }

    else if (MODEL_4_MIX1_MASTER_EEPROM == 2)
    {
      mix1_master = "CH2";
    }

    else if (MODEL_4_MIX1_MASTER_EEPROM == 3)
    {
      mix1_master = "CH3";
    }

    else if (MODEL_4_MIX1_MASTER_EEPROM == 4)
    {
      mix1_master = "CH4";
    }

    else if (MODEL_4_MIX1_MASTER_EEPROM == 5)
    {
      mix1_master = "CH5";
    }

    else if (MODEL_4_MIX1_MASTER_EEPROM == 6)
    {
      mix1_master = "CH6";
    }

    //slave
    if (MODEL_4_MIX1_SLAVE_EEPROM == 1)
    {
      mix1_slave = "CH1";
    }

    else if (MODEL_4_MIX1_SLAVE_EEPROM == 2)
    {
      mix1_slave = "CH2";
    }

    else if (MODEL_4_MIX1_SLAVE_EEPROM == 3)
    {
      mix1_slave = "CH3";
    }

    else if (MODEL_4_MIX1_SLAVE_EEPROM == 4)
    {
      mix1_slave = "CH4";
    }

    else if (MODEL_4_MIX1_SLAVE_EEPROM == 5)
    {
      mix1_slave = "CH5";
    }

    else if (MODEL_4_MIX1_SLAVE_EEPROM == 6)
    {
      mix1_slave = "CH6";
    }

    MODEL_4_MIX2_EN_EEPROM = EEPROM.read(452); //String
    MODEL_4_MIX2_MASTER_EEPROM = EEPROM.read(453); //String
    MODEL_4_MIX2_SLAVE_EEPROM = EEPROM.read(454); //String
    mix2_pos = EEPROM.read(455);
    mix2_neg = EEPROM.read(456);
    mix2_offset = EEPROM.read(457);

    //en
    if (MODEL_4_MIX2_EN_EEPROM == 0)
    {
      mix2_en = "[OFF]";
    }

    else if (MODEL_4_MIX2_EN_EEPROM == 1)
    {
      mix2_en = "[ON]";
    }

    //master
    if (MODEL_4_MIX2_MASTER_EEPROM == 1)
    {
      mix2_master = "CH1";
    }

    else if (MODEL_4_MIX2_MASTER_EEPROM == 2)
    {
      mix2_master = "CH2";
    }

    else if (MODEL_4_MIX2_MASTER_EEPROM == 3)
    {
      mix2_master = "CH3";
    }

    else if (MODEL_4_MIX2_MASTER_EEPROM == 4)
    {
      mix2_master = "CH4";
    }

    else if (MODEL_4_MIX2_MASTER_EEPROM == 5)
    {
      mix2_master = "CH5";
    }

    else if (MODEL_4_MIX2_MASTER_EEPROM == 6)
    {
      mix2_master = "CH6";
    }

    //slave
    if (MODEL_4_MIX2_SLAVE_EEPROM == 1)
    {
      mix2_slave = "CH1";
    }

    else if (MODEL_4_MIX2_SLAVE_EEPROM == 2)
    {
      mix2_slave = "CH2";
    }

    else if (MODEL_4_MIX2_SLAVE_EEPROM == 3)
    {
      mix2_slave = "CH3";
    }

    else if (MODEL_4_MIX2_SLAVE_EEPROM == 4)
    {
      mix2_slave = "CH4";
    }

    else if (MODEL_4_MIX2_SLAVE_EEPROM == 5)
    {
      mix2_slave = "CH5";
    }

    else if (MODEL_4_MIX2_SLAVE_EEPROM == 6)
    {
      mix2_slave = "CH6";
    }

    MODEL_4_MIX3_EN_EEPROM = EEPROM.read(462); //String
    MODEL_4_MIX3_MASTER_EEPROM = EEPROM.read(463); //String
    MODEL_4_MIX3_SLAVE_EEPROM = EEPROM.read(464); //String
    mix3_pos = EEPROM.read(465);
    mix3_neg = EEPROM.read(466);
    mix3_offset = EEPROM.read(467);

    //en
    if (MODEL_4_MIX3_EN_EEPROM == 0)
    {
      mix3_en = "[OFF]";
    }

    else if (MODEL_4_MIX3_EN_EEPROM == 1)
    {
      mix3_en = "[ON]";
    }

    //master
    if (MODEL_4_MIX3_MASTER_EEPROM == 1)
    {
      mix3_master = "CH1";
    }

    else if (MODEL_4_MIX3_MASTER_EEPROM == 2)
    {
      mix3_master = "CH2";
    }

    else if (MODEL_4_MIX3_MASTER_EEPROM == 3)
    {
      mix3_master = "CH3";
    }

    else if (MODEL_4_MIX3_MASTER_EEPROM == 4)
    {
      mix3_master = "CH4";
    }

    else if (MODEL_4_MIX3_MASTER_EEPROM == 5)
    {
      mix3_master = "CH5";
    }

    else if (MODEL_4_MIX3_MASTER_EEPROM == 6)
    {
      mix3_master = "CH6";
    }

    //slave
    if (MODEL_4_MIX3_SLAVE_EEPROM == 1)
    {
      mix3_slave = "CH1";
    }

    else if (MODEL_4_MIX3_SLAVE_EEPROM == 2)
    {
      mix3_slave = "CH2";
    }

    else if (MODEL_4_MIX3_SLAVE_EEPROM == 3)
    {
      mix3_slave = "CH3";
    }

    else if (MODEL_4_MIX3_SLAVE_EEPROM == 4)
    {
      mix3_slave = "CH4";
    }

    else if (MODEL_4_MIX3_SLAVE_EEPROM == 5)
    {
      mix3_slave = "CH5";
    }

    else if (MODEL_4_MIX3_SLAVE_EEPROM == 6)
    {
      mix3_slave = "CH6";
    }

    MODEL_4_MIX4_EN_EEPROM = EEPROM.read(472); //String
    MODEL_4_MIX4_MASTER_EEPROM = EEPROM.read(473); //String
    MODEL_4_MIX4_SLAVE_EEPROM = EEPROM.read(474); //String
    mix4_pos = EEPROM.read(475);
    mix4_neg = EEPROM.read(476);
    mix4_offset = EEPROM.read(477);

    //en
    if (MODEL_4_MIX4_EN_EEPROM == 0)
    {
      mix4_en = "[OFF]";
    }

    else if (MODEL_4_MIX4_EN_EEPROM == 1)
    {
      mix4_en = "[ON]";
    }

    //master
    if (MODEL_4_MIX4_MASTER_EEPROM == 1)
    {
      mix4_master = "CH1";
    }

    else if (MODEL_4_MIX4_MASTER_EEPROM == 2)
    {
      mix4_master = "CH2";
    }

    else if (MODEL_4_MIX4_MASTER_EEPROM == 3)
    {
      mix4_master = "CH3";
    }

    else if (MODEL_4_MIX4_MASTER_EEPROM == 4)
    {
      mix4_master = "CH4";
    }

    else if (MODEL_4_MIX4_MASTER_EEPROM == 5)
    {
      mix4_master = "CH5";
    }

    else if (MODEL_4_MIX4_MASTER_EEPROM == 6)
    {
      mix4_master = "CH6";
    }

    //slave
    if (MODEL_4_MIX4_SLAVE_EEPROM == 1)
    {
      mix4_slave = "CH1";
    }

    else if (MODEL_4_MIX4_SLAVE_EEPROM == 2)
    {
      mix4_slave = "CH2";
    }

    else if (MODEL_4_MIX4_SLAVE_EEPROM == 3)
    {
      mix4_slave = "CH3";
    }

    else if (MODEL_4_MIX4_SLAVE_EEPROM == 4)
    {
      mix4_slave = "CH4";
    }

    else if (MODEL_4_MIX4_SLAVE_EEPROM == 5)
    {
      mix4_slave = "CH5";
    }

    else if (MODEL_4_MIX4_SLAVE_EEPROM == 6)
    {
      mix4_slave = "CH6";
    }

  }

  else if (Model5_Sel == "(*)")
  {
    MODEL_5_MIX1_EN_EEPROM = EEPROM.read(562); //String
    MODEL_5_MIX1_MASTER_EEPROM = EEPROM.read(563); //String
    MODEL_5_MIX1_SLAVE_EEPROM = EEPROM.read(564); //String
    mix1_pos = EEPROM.read(565);
    mix1_neg = EEPROM.read(566);
    mix1_offset = EEPROM.read(567);

    //en
    if (MODEL_5_MIX1_EN_EEPROM == 0)
    {
      mix1_en = "[OFF]";
    }

    else if (MODEL_5_MIX1_EN_EEPROM == 1)
    {
      mix1_en = "[ON]";
    }

    //master
    if (MODEL_5_MIX1_MASTER_EEPROM == 1)
    {
      mix1_master = "CH1";
    }

    else if (MODEL_5_MIX1_MASTER_EEPROM == 2)
    {
      mix1_master = "CH2";
    }

    else if (MODEL_5_MIX1_MASTER_EEPROM == 3)
    {
      mix1_master = "CH3";
    }

    else if (MODEL_5_MIX1_MASTER_EEPROM == 4)
    {
      mix1_master = "CH4";
    }

    else if (MODEL_5_MIX1_MASTER_EEPROM == 5)
    {
      mix1_master = "CH5";
    }

    else if (MODEL_5_MIX1_MASTER_EEPROM == 6)
    {
      mix1_master = "CH6";
    }

    //slave
    if (MODEL_5_MIX1_SLAVE_EEPROM == 1)
    {
      mix1_slave = "CH1";
    }

    else if (MODEL_5_MIX1_SLAVE_EEPROM == 2)
    {
      mix1_slave = "CH2";
    }

    else if (MODEL_5_MIX1_SLAVE_EEPROM == 3)
    {
      mix1_slave = "CH3";
    }

    else if (MODEL_5_MIX1_SLAVE_EEPROM == 4)
    {
      mix1_slave = "CH4";
    }

    else if (MODEL_5_MIX1_SLAVE_EEPROM == 5)
    {
      mix1_slave = "CH5";
    }

    else if (MODEL_5_MIX1_SLAVE_EEPROM == 6)
    {
      mix1_slave = "CH6";
    }

    MODEL_5_MIX2_EN_EEPROM = EEPROM.read(572); //String
    MODEL_5_MIX2_MASTER_EEPROM = EEPROM.read(573); //String
    MODEL_5_MIX2_SLAVE_EEPROM = EEPROM.read(574); //String
    mix2_pos = EEPROM.read(575);
    mix2_neg = EEPROM.read(576);
    mix2_offset = EEPROM.read(577);

    //en
    if (MODEL_5_MIX2_EN_EEPROM == 0)
    {
      mix2_en = "[OFF]";
    }

    else if (MODEL_5_MIX2_EN_EEPROM == 1)
    {
      mix2_en = "[ON]";
    }

    //master
    if (MODEL_5_MIX2_MASTER_EEPROM == 1)
    {
      mix2_master = "CH1";
    }

    else if (MODEL_5_MIX2_MASTER_EEPROM == 2)
    {
      mix2_master = "CH2";
    }

    else if (MODEL_5_MIX2_MASTER_EEPROM == 3)
    {
      mix2_master = "CH3";
    }

    else if (MODEL_5_MIX2_MASTER_EEPROM == 4)
    {
      mix2_master = "CH4";
    }

    else if (MODEL_5_MIX2_MASTER_EEPROM == 5)
    {
      mix2_master = "CH5";
    }

    else if (MODEL_5_MIX2_MASTER_EEPROM == 6)
    {
      mix2_master = "CH6";
    }

    //slave
    if (MODEL_5_MIX2_SLAVE_EEPROM == 1)
    {
      mix2_slave = "CH1";
    }

    else if (MODEL_5_MIX2_SLAVE_EEPROM == 2)
    {
      mix2_slave = "CH2";
    }

    else if (MODEL_5_MIX2_SLAVE_EEPROM == 3)
    {
      mix2_slave = "CH3";
    }

    else if (MODEL_5_MIX2_SLAVE_EEPROM == 4)
    {
      mix2_slave = "CH4";
    }

    else if (MODEL_5_MIX2_SLAVE_EEPROM == 5)
    {
      mix2_slave = "CH5";
    }

    else if (MODEL_5_MIX2_SLAVE_EEPROM == 6)
    {
      mix2_slave = "CH6";
    }

    MODEL_5_MIX3_EN_EEPROM = EEPROM.read(582); //String
    MODEL_5_MIX3_MASTER_EEPROM = EEPROM.read(583); //String
    MODEL_5_MIX3_SLAVE_EEPROM = EEPROM.read(584); //String
    mix3_pos = EEPROM.read(585);
    mix3_neg = EEPROM.read(586);
    mix3_offset = EEPROM.read(587);

    //en
    if (MODEL_5_MIX3_EN_EEPROM == 0)
    {
      mix3_en = "[OFF]";
    }

    else if (MODEL_5_MIX3_EN_EEPROM == 1)
    {
      mix3_en = "[ON]";
    }

    //master
    if (MODEL_5_MIX3_MASTER_EEPROM == 1)
    {
      mix3_master = "CH1";
    }

    else if (MODEL_5_MIX3_MASTER_EEPROM == 2)
    {
      mix3_master = "CH2";
    }

    else if (MODEL_5_MIX3_MASTER_EEPROM == 3)
    {
      mix3_master = "CH3";
    }

    else if (MODEL_5_MIX3_MASTER_EEPROM == 4)
    {
      mix3_master = "CH4";
    }

    else if (MODEL_5_MIX3_MASTER_EEPROM == 5)
    {
      mix3_master = "CH5";
    }

    else if (MODEL_5_MIX3_MASTER_EEPROM == 6)
    {
      mix3_master = "CH6";
    }

    //slave
    if (MODEL_5_MIX3_SLAVE_EEPROM == 1)
    {
      mix3_slave = "CH1";
    }

    else if (MODEL_5_MIX3_SLAVE_EEPROM == 2)
    {
      mix3_slave = "CH2";
    }

    else if (MODEL_5_MIX3_SLAVE_EEPROM == 3)
    {
      mix3_slave = "CH3";
    }

    else if (MODEL_5_MIX3_SLAVE_EEPROM == 4)
    {
      mix3_slave = "CH4";
    }

    else if (MODEL_5_MIX3_SLAVE_EEPROM == 5)
    {
      mix3_slave = "CH5";
    }

    else if (MODEL_5_MIX3_SLAVE_EEPROM == 6)
    {
      mix3_slave = "CH6";
    }

    MODEL_5_MIX4_EN_EEPROM = EEPROM.read(592); //String
    MODEL_5_MIX4_MASTER_EEPROM = EEPROM.read(593); //String
    MODEL_5_MIX4_SLAVE_EEPROM = EEPROM.read(594); //String
    mix4_pos = EEPROM.read(595);
    mix4_neg = EEPROM.read(596);
    mix4_offset = EEPROM.read(597);

    //en
    if (MODEL_5_MIX4_EN_EEPROM == 0)
    {
      mix4_en = "[OFF]";
    }

    else if (MODEL_5_MIX4_EN_EEPROM == 1)
    {
      mix4_en = "[ON]";
    }

    //master
    if (MODEL_5_MIX4_MASTER_EEPROM == 1)
    {
      mix4_master = "CH1";
    }

    else if (MODEL_5_MIX4_MASTER_EEPROM == 2)
    {
      mix4_master = "CH2";
    }

    else if (MODEL_5_MIX4_MASTER_EEPROM == 3)
    {
      mix4_master = "CH3";
    }

    else if (MODEL_5_MIX4_MASTER_EEPROM == 4)
    {
      mix4_master = "CH4";
    }

    else if (MODEL_5_MIX4_MASTER_EEPROM == 5)
    {
      mix4_master = "CH5";
    }

    else if (MODEL_5_MIX4_MASTER_EEPROM == 6)
    {
      mix4_master = "CH6";
    }

    //slave
    if (MODEL_5_MIX4_SLAVE_EEPROM == 1)
    {
      mix4_slave = "CH1";
    }

    else if (MODEL_5_MIX4_SLAVE_EEPROM == 2)
    {
      mix4_slave = "CH2";
    }

    else if (MODEL_5_MIX4_SLAVE_EEPROM == 3)
    {
      mix4_slave = "CH3";
    }

    else if (MODEL_5_MIX4_SLAVE_EEPROM == 4)
    {
      mix4_slave = "CH4";
    }

    else if (MODEL_5_MIX4_SLAVE_EEPROM == 5)
    {
      mix4_slave = "CH5";
    }

    else if (MODEL_5_MIX4_SLAVE_EEPROM == 6)
    {
      mix4_slave = "CH6";
    }
  }
}
