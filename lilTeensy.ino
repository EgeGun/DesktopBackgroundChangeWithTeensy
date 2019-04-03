const int ledPin = 6;

void setup()
{
  Serial.begin(9600);
  
  pinMode(ledPin , OUTPUT);

  //BLINK LED 3 TIMES
  for (int i=0; i < 3; i++)
    {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
    }

  //OPENING GOOGLE CHROME 
  Keyboard.press(MODIFIERKEY_GUI);
  Keyboard.release(MODIFIERKEY_GUI);
  delay(3000);

  Keyboard.print("google chrome");
  delay(2000);
  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(3000);

  //SEARCHING FOR LINK
  Keyboard.press(MODIFIERKEY_CTRL);
  Keyboard.press(KEY_L);
  Keyboard.release(KEY_L);
  Keyboard.release(MODIFIERKEY_CTRL);
  delay(2000);
  
  Keyboard.print("https://www.google.com/search?q=hotdog&source=lnms&tbm=isch&sa=X&ved=0ahUKEwj2q675s6zhAhU0TxUIHRZ4CIkQ_AUIDigB&biw=1440&bih=765%C2%A3imgrc=lqa6CQJmgoqtQM:#imgrc=lqa6CQJmgoqtQM:");
  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(8000);

  //SAVING HOTDOG FROM CHROME , YOU HAVE TO ADJUST MOUSE FOR EACH SCREEN SIZE
  for(int i = 0; i < 40; i++) {
    Mouse.move(-25, -25);
    delay(25);
  }
  
  for(int i = 0; i < 40; i++)
    {
      Mouse.move(8, 12);
      delay(25);
    }
  
  Mouse.set_buttons(0 , 0 , 1);
  Mouse.set_buttons(0 , 0 , 0);
  delay(1000);
  
  Keyboard.press(KEY_V);
  Keyboard.release(KEY_V);
  delay(3000);
  
  Keyboard.press(MODIFIERKEY_CTRL);
  Keyboard.press(KEY_A);
  Keyboard.release(KEY_A);
  Keyboard.release(MODIFIERKEY_CTRL);
  delay(500);
  
  Keyboard.press(KEY_DELETE);
  Keyboard.release(KEY_DELETE);
  Keyboard.print("dick");
  delay(1000);
  
  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(6000);

  //QUITING CHROME
  Keyboard.press(MODIFIERKEY_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.release(KEY_F4);
  Keyboard.release(MODIFIERKEY_ALT);
  delay(1500);

  //OPENING PAINT
  Keyboard.press(MODIFIERKEY_GUI);
  Keyboard.release(MODIFIERKEY_GUI);
  delay(1000);
  
  Keyboard.print("paint");
  delay(1000);

  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(3000);

  //OPENING HOTDOG PHOTO WE SAVED EARIER
  Keyboard.press(MODIFIERKEY_CTRL);
  Keyboard.press(KEY_O);
  Keyboard.release(KEY_O);
  Keyboard.release(MODIFIERKEY_CTRL); 
  delay(2000);

  Keyboard.print("dick");
  delay(1000);
  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(4000);
  
  //SETTING BACKGROUND IMAGE
  Keyboard.press(MODIFIERKEY_ALT);
  Keyboard.press(KEY_F);
  Keyboard.release(KEY_F);
  Keyboard.release(MODIFIERKEY_ALT);
  delay(500);

  Keyboard.press(KEY_DOWN);
  Keyboard.release(KEY_DOWN);
  Keyboard.press(KEY_DOWN);
  Keyboard.release(KEY_DOWN);
  Keyboard.press(KEY_DOWN);
  Keyboard.release(KEY_DOWN);
  Keyboard.press(KEY_DOWN);
  Keyboard.release(KEY_DOWN);
  Keyboard.press(KEY_DOWN);
  Keyboard.release(KEY_DOWN);
  Keyboard.press(KEY_DOWN);
  Keyboard.release(KEY_DOWN);
  Keyboard.press(KEY_DOWN);
  Keyboard.release(KEY_DOWN);
  delay(1000);
  
  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(3000);

  //ACTING LIKE NOTHING HAPPENED
  Keyboard.press(MODIFIERKEY_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.release(KEY_F4);
  Keyboard.release(MODIFIERKEY_ALT);
   
}

void loop()
{
  
}
