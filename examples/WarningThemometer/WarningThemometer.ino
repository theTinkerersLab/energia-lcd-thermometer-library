/* The circuit:
 For Stellaris Launchpad
 =================================
 LCD pin              Connect to
 ---------------------------------
 01 - GND             GND, pot
 02 - VCC             +5V, pot
 03 - Contrast        Pot wiper
 04 - RS              PE_3
 05 - R/W             GND
 06 - EN              PE_1
 07 - DB0             GND
 08 - DB1             GND
 09 - DB2             GND
 10 - DB3             GND
 11 - DB4             PD_3
 12 - DB5             PD_2
 13 - DB6             PD_1
 14 - DB7             PD_0
 15 - BL+             +5V
 16 - BL-             GND
 =================================*/

#include <LCD_Thermometer.h>
const int iMinTemp      = -100;
const int iMaxTemp      = 100;
const int iInitialTemp  = -50;
const int iCritialTemp1 = -40, iCritialTemp2 = -10, iCritialTemp3 = 20, iCritialTemp4 = 50;
int iCurTemp            = iInitialTemp;

LCD_Thermometer thermometerLCD( PE_3, PE_2, PE_1, PD_3, PD_2, PD_1, PD_0, iMinTemp, iMaxTemp );
void setup() {
  // set up the LCD's number of columns and rows: 
  thermometerLCD.begin(16, 2);
  // Print a message to the LCD.
  thermometerLCD.Create();
  thermometerLCD.UpdateTemp( iInitialTemp );
}

void loop() {
    thermometerLCD.ScrollMsg();
    thermometerLCD.UpdateTemp( iCurTemp++ );
    switch( iCurTemp )
    {
      case iCritialTemp1:
      {
        Warning( "Warning! Critical temperature 1" );
        break;
      }
      case iCritialTemp2:
      {
        Warning( "Warning! Critical temperature 2" );
        break;
      }
      case iCritialTemp3:
      {
        Warning( "Warning! Critical temperature 3" );        
        break;
      }
      case iCritialTemp4:
      {
        Warning( "Warning! Critical temperature 4" );        
        break;
      }
      case iMaxTemp:
      {
        iCurTemp = iInitialTemp;
      }
      default:
      {
        delay( 500 );   
      }
    }
}

void Warning( char* pchWarningMsg )
{
  const int iMsgLen = strlen( pchWarningMsg ), iMaxFlicker = 3;
  thermometerLCD.UpdateMessage( pchWarningMsg );
  for( int idx = 0; idx <= iMsgLen - MAX_LCD_LENGTH; idx++ )
  {
    thermometerLCD.ScrollMsg();
    delay( 500 );
  }
  
  for( int idx = 0; idx < iMaxFlicker; idx++ )
  {
    thermometerLCD.UpdateStyle( STYLE_INVERTED );
    delay( 250 );
    thermometerLCD.UpdateStyle( STYLE_DEFAULT );
    delay( 250 );
  }
  thermometerLCD.ResetMode();
}
