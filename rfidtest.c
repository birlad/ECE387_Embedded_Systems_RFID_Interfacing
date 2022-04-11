#include <stdint.h>
#include "libLCD/hd44780.h"
// #include libMFRC522

int main(void)
{
	//Setup
	LCD_Setup();
	LCD_Clear();
	LCD_GotoXY(0, 0);
	LCD_PrintString("Tap a card on");
	LCD_GotoXY(0, 1);
	LCD_PrintString("the MFRC522!");

	while(1)
	{
		/*

		if Card is detected
			Clear LCD
			Read Card UID - store in a string
			Print the UID to the LCD
		end if

		*/

	} // end while loop
	
	return 0;
}
