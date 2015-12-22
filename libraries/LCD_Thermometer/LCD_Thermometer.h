#ifndef THERMOMETER_LCD_H_
#define THERMOMETER_LCD_H_

//*********************** ----------------- *******************************//
//*********************** LCD_Thermometer.h *******************************//
//*********************** ----------------- *******************************//
/**
 * This file provides the deceleration of LCD_Thermometer class
 * Used to display a thermometer on a 16 X 2 LCD
 */
#include "Energia.h"
#include "LiquidCrystal.h"

//*********************** NON - CUSTOMISABLE PARAMETERS *******************************//
//***********************      Please don't touch!!!    *******************************//
//Thermometer parts definition

#define LCD_THERMOMETER_SIZE         8
#define LCD_THERMOMETER_TOP          0
#define LCD_THERMOMETER_BOTTOM_LHALF 1
#define LCD_THERMOMETER_BOTTOM_RHALF 2
#define LCD_THERMOMETER_ZERO         3
#define LCD_THERMOMETER_FIVE         4
#define LCD_THERMOMETER_ONE          5
#define LCD_THERMOMETER_TWO          6
#define LCD_THERMOMETER_FOUR         7

#define MAX_LCD_LENGTH               16
#define NULL_CHARACTER               '\0'
#define BASE                         10
#define DEG_CEL_LEN                  3
#define DEG_CELSIUS                  { (char) 223, 'C', '\0' }

enum
{ STYLE_DEFAULT = 0,
  STYLE_INVERTED,
  STYLE_NOFRAME,
  STYLE_SOLID,
  STYLE_SLIM
};


#define MIN_POSSIBLE_VAL             0
#define MAX_POSSIBLE_VAL             65

//*********************** CUSTOMISABLE PARAMETERS *******************************//
//***********************    Modify at ease :)    *******************************//

#define LCD_THERMOMETER_DEFAULT_MIN  0   // Default thermometer minimum
#define LCD_THERMOMETER_DEFAULT_MAX  100 // Default thermometer maximum

#define LCD_THERMOMETER_CLEAR_STR    "                "// 16 spaces for clearing LCD Screen
#define LCD_THERMOMETER_DIGTS_MAX    4                 // Maximum number of digits in temperature value
#define LCD_THERMOMETER_DEFAULT_MSG  "Temp = "         // Default message to which temperature value is appended


/**
 * This class is used to display a graphical thermometer 
 * on a 16 X 2 LCD and modify its parameters
 */
 
class LCD_Thermometer : public LiquidCrystal
{

//Constructors

/**
 * All constructors utilize the base class constructor
 * and also initializes LCD_Thermometer members
 */
public:
	LCD_Thermometer( uint8_t rs, uint8_t enable,
					 uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3,
					 uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, 
					 int16_t iMin = LCD_THERMOMETER_DEFAULT_MIN,
					 int16_t iMax = LCD_THERMOMETER_DEFAULT_MAX );	
					 
	LCD_Thermometer( uint8_t rs, uint8_t rw, uint8_t enable,
					 uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3,
					 uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7,
 					 int16_t iMin = LCD_THERMOMETER_DEFAULT_MIN,
					 int16_t iMax = LCD_THERMOMETER_DEFAULT_MAX );
					 
	LCD_Thermometer( uint8_t rs, uint8_t rw, uint8_t enable,
					 uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, 
					 int16_t iMin = LCD_THERMOMETER_DEFAULT_MIN,
					 int16_t iMax = LCD_THERMOMETER_DEFAULT_MAX );
					 
	LCD_Thermometer( uint8_t rs, uint8_t enable,
					 uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3,
					 int16_t iMin = LCD_THERMOMETER_DEFAULT_MIN,
					 int16_t iMax = LCD_THERMOMETER_DEFAULT_MAX );
	//Public Functions
	
	void Create( bool boolEnableTempSensor = false );
	void ScrollMsg();
	void UpdateTemp( int16_t iVal );
	void UpdateTemp();
	void UpdateStyle( uint8_t uiVal );
	void UpdateMessage( char* pchMsg );
	//void UpdateMessage( String strMsg );
	void ResetMode();
	
protected:
	void InitMessage();
	void InitialUpdate();
	void UpdateDefaultMessage();
	
private:
	void SetStyle( uint8_t uiStyle );
	void SetThermoParts( uint8_t* uiThermoTop, uint8_t* uiThermoBotLeft, 
						 uint8_t* uiThermoBotRight, uint8_t* uiThermoZero,
						 uint8_t* uiThermoFive, uint8_t* uiThermoOne, 
						 uint8_t* uiThermoTwo, uint8_t* uiThermoFour );
	void UpdateMemory();
	long map(long x, long in_min, long in_max, long out_min, long out_max)
	{
	  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
	}
	
	static const char DEG_CEL[DEG_CEL_LEN]; 
	uint8_t m_uiThermoTop[LCD_THERMOMETER_SIZE];
	uint8_t m_uiThermoBotLeft[LCD_THERMOMETER_SIZE];
	uint8_t m_uiThermoBotRight[LCD_THERMOMETER_SIZE];
	uint8_t m_uiThermoZero[LCD_THERMOMETER_SIZE];
	uint8_t m_uiThermoFive[LCD_THERMOMETER_SIZE];
	uint8_t m_uiThermoOne[LCD_THERMOMETER_SIZE];
	uint8_t m_uiThermoTwo[LCD_THERMOMETER_SIZE];
	uint8_t m_uiThermoFour[LCD_THERMOMETER_SIZE];
	int16_t m_iMin;
	int16_t m_iMax;
	int16_t m_iCurTemp;
	char* m_pchCurMsg;
	int16_t m_iCurMsgLength;
	int16_t m_iCurMsgPos;
	bool    m_boolNativeMode;
	bool    m_boolNativeTempSensor;
};
#endif