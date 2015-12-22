#include "LCD_Thermometer.h"
#include "LCD_Thermometer_Resource.h"

//*********************** ----------------- *******************************//
//*********************** LCD_Thermometer.cpp *****************************//
//*********************** ----------------- *******************************//
/**
 * This file provides the implementation of LCD_Thermometer class
 * Used to display a thermometer on a 16 X 2 LCD
 */
 
//Declaring the static member variable to degree Celsius
const char LCD_Thermometer::DEG_CEL[DEG_CEL_LEN] = DEG_CELSIUS;


/** @name   : LCD_Thermometer() 
 *  @notes  : constructor that initializes base class and members
 *  @param  : uint8_t rs     - RS pin of 16 X 2 LCD
 *	@param  : uint8_t enable - E  pin of 16 X 2 LCD( enable )
 *	@param  : uint8_t d0     - D0 pin of 16 X 2 LCD  --|
 *	@param  : uint8_t d1     - D1 pin of 16 X 2 LCD    |
 *	@param  : uint8_t d2     - D2 pin of 16 X 2 LCD    |
 *	@param  : uint8_t d3     - D3 pin of 16 X 2 LCD  Data Bus
 *	@param  : uint8_t d4     - D4 pin of 16 X 2 LCD    |
 *  @param  : uint8_t d5     - D5 pin of 16 X 2 LCD    |
 *  @param  : uint8_t d6     - D6 pin of 16 X 2 LCD    |
 *	@param  : uint8_t d7     - D7 pin of 16 X 2 LCD  --|
 *	@param  : int16_t iMin   - Minimum temperature represented by LCD_Thermometer
 *  @param  : int16_t iMax   - Minimum temperature represented by LCD_Thermometer
 *  @return : Nil
 */
LCD_Thermometer::LCD_Thermometer(uint8_t rs, uint8_t enable,
				   				 uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3,
								 uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7,
								 int16_t iMin, int16_t iMax)
				: LiquidCrystal( rs, enable, d0, d1, d2, d3, d4, d5, d6, d7 ),
				  m_iMax( iMax ), m_iMin( iMin ), m_iCurTemp( iMin ), m_iCurMsgPos( 0 ), 
				  m_boolNativeMode( true ), m_boolNativeTempSensor( false )
 {
	 
 }

 
/** @name   : LCD_Thermometer() 
 *  @notes  : constructor that initializes base class and members
 *  @param  : uint8_t rs     - RS pin of 16 X 2 LCD
 *	@param  : uint8_t rw     - RW pin of 16 X 2 LCD( read/write )
 *	@param  : uint8_t enable - E  pin of 16 X 2 LCD( enable )
 *	@param  : uint8_t d0     - D0 pin of 16 X 2 LCD  --|
 *	@param  : uint8_t d1     - D1 pin of 16 X 2 LCD    |
 *	@param  : uint8_t d2     - D2 pin of 16 X 2 LCD    |
 *	@param  : uint8_t d3     - D3 pin of 16 X 2 LCD  Data Bus
 *	@param  : uint8_t d4     - D4 pin of 16 X 2 LCD    |
 *  @param  : uint8_t d5     - D5 pin of 16 X 2 LCD    |
 *  @param  : uint8_t d6     - D6 pin of 16 X 2 LCD    |
 *	@param  : uint8_t d7     - D7 pin of 16 X 2 LCD  --|
 *	@param  : int16_t iMin   - Minimum temperature represented by LCD_Thermometer
 *  @param  : int16_t iMax   - Minimum temperature represented by LCD_Thermometer
 *  @return : Nil
 */
LCD_Thermometer::LCD_Thermometer(uint8_t rs, uint8_t rw, uint8_t enable,
								 uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3,
								 uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, 
								 int16_t iMin, int16_t iMax)
				: LiquidCrystal( rs, rw, enable, d0, d1, d2, d3, d4, d5, d6, d7 ),
				  m_iMax( iMax ), m_iMin( iMin ), m_iCurTemp( iMin ), m_iCurMsgPos( 0 ), 
				  m_boolNativeMode( true ), m_boolNativeTempSensor( false )
 {
	 
 }

/** @name   : LCD_Thermometer() 
 *  @notes  : constructor that initializes base class and members
 *  @param  : uint8_t rs     - RS pin of 16 X 2 LCD
 *	@param  : uint8_t rw     - RW pin of 16 X 2 LCD( read/write )
 *	@param  : uint8_t enable - E  pin of 16 X 2 LCD( enable )
 *	@param  : uint8_t d0     - D0 pin of 16 X 2 LCD  --|
 *	@param  : uint8_t d1     - D1 pin of 16 X 2 LCD   Data Bus
 *	@param  : uint8_t d2     - D2 pin of 16 X 2 LCD    |
 *	@param  : uint8_t d3     - D3 pin of 16 X 2 LCD  --|
 *	@param  : int16_t iMin   - Minimum temperature represented by LCD_Thermometer
 *  @param  : int16_t iMax   - Minimum temperature represented by LCD_Thermometer
 *  @return : Nil
 */
LCD_Thermometer::LCD_Thermometer(uint8_t rs, uint8_t rw, uint8_t enable,
								 uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, 
								 int16_t iMin, int16_t iMax)
				: LiquidCrystal( rs, rw, enable, d0, d1, d2, d3 ),
				  m_iMax( iMax ), m_iMin( iMin ), m_iCurTemp( iMin ), m_iCurMsgPos( 0 ), 
				  m_boolNativeMode( true ), m_boolNativeTempSensor( false )
{
}

/** @name   : LCD_Thermometer() 
 *  @notes  : constructor that initializes base class and members
 *  @param  : uint8_t rs     - RS pin of 16 X 2 LCD
 *	@param  : uint8_t enable - E  pin of 16 X 2 LCD( enable )
 *	@param  : uint8_t d0     - D0 pin of 16 X 2 LCD  --|
 *	@param  : uint8_t d1     - D1 pin of 16 X 2 LCD   Data Bus
 *	@param  : uint8_t d2     - D2 pin of 16 X 2 LCD    |
 *	@param  : uint8_t d3     - D3 pin of 16 X 2 LCD  --|
 *	@param  : int16_t iMin   - Minimum temperature represented by LCD_Thermometer
 *  @param  : int16_t iMax   - Minimum temperature represented by LCD_Thermometer
 *  @return : Nil
 */
LCD_Thermometer::LCD_Thermometer(uint8_t rs, uint8_t enable,
								 uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3,
								 int16_t iMin, int16_t iMax)
				: LiquidCrystal( rs, enable, d0, d1, d2, d3 ),
				  m_iMax( iMax ), m_iMin( iMin ), m_iCurTemp( iMin ), m_iCurMsgPos( 0 ), 
				  m_boolNativeMode( true ), m_boolNativeTempSensor( false )
{
	
}


void LCD_Thermometer::InitMessage()
{
	char* pchMsg  = LCD_THERMOMETER_DEFAULT_MSG;
	char pchTemp[LCD_THERMOMETER_DIGTS_MAX];
	itoa ( m_iCurTemp, pchTemp, BASE );
	const int iLen    = strlen( pchMsg ) + LCD_THERMOMETER_DIGTS_MAX + DEG_CEL_LEN;
	m_pchCurMsg       = (char*)malloc( sizeof ( char ) * ( iLen + 1 ));
	m_iCurMsgPos      = 0;
	strcpy( m_pchCurMsg, pchMsg );
 	strcat( m_pchCurMsg, pchTemp );
	strcat( m_pchCurMsg, LCD_Thermometer::DEG_CEL );
	m_iCurMsgLength   = strlen( m_pchCurMsg );
}

void LCD_Thermometer::UpdateDefaultMessage()
{
	free( m_pchCurMsg );
	char* pchMsg  = LCD_THERMOMETER_DEFAULT_MSG;
	char pchTemp[LCD_THERMOMETER_DIGTS_MAX];
	itoa ( m_iCurTemp, pchTemp, BASE );
	const int iLen    = strlen( pchMsg ) + LCD_THERMOMETER_DIGTS_MAX + DEG_CEL_LEN;
	m_pchCurMsg       = (char*)malloc( sizeof ( char ) * ( iLen + 1 ));
	strcpy( m_pchCurMsg, pchMsg );
 	strcat( m_pchCurMsg, pchTemp );
	strcat( m_pchCurMsg, LCD_Thermometer::DEG_CEL );
	m_iCurMsgLength   = strlen( m_pchCurMsg );
}


void LCD_Thermometer::ScrollMsg()
{
	if( m_boolNativeMode )
	{
		UpdateDefaultMessage();
	}
	setCursor( 0, 0 );
	int iStart = m_iCurMsgPos, iEnd = ( m_iCurMsgPos + MAX_LCD_LENGTH );
	if( iEnd > m_iCurMsgLength)
	{
		print( LCD_THERMOMETER_CLEAR_STR );
		setCursor( 0, 0 ); 
		print( m_pchCurMsg );
	}
	else
	{
		for( int i = iStart; i < iEnd; i++ )
		{
			print( m_pchCurMsg[i] );   
		}
		++m_iCurMsgPos;
	}
	if( iEnd >= m_iCurMsgLength )
	{
		m_iCurMsgPos = 0;
	}
}

void LCD_Thermometer::Create( bool boolEnableTempSensor )
{
	SetStyle( STYLE_DEFAULT );
	UpdateMemory();
	InitialUpdate();
	InitMessage();
	#ifndef __LM4F120H5QR__
	if( boolEnableTempSensor )
	{
		ADC10CTL1 = INCH_10 + ADC10DIV_3;         // Temp Sensor ADC10CLK/4
		ADC10CTL0 = SREF_1 + ADC10SHT_3 + REFON + ADC10ON;
		m_boolNativeTempSensor = true;
	}
	#endif
}


void LCD_Thermometer::UpdateStyle( uint8_t uiStyle )
{
	SetStyle( uiStyle );
	UpdateMemory();
}


void LCD_Thermometer::UpdateMemory()
{
	createChar( LCD_THERMOMETER_TOP, m_uiThermoTop );
	createChar( LCD_THERMOMETER_BOTTOM_LHALF, m_uiThermoBotLeft );
	createChar( LCD_THERMOMETER_BOTTOM_RHALF, m_uiThermoBotRight );
	createChar( LCD_THERMOMETER_ZERO, m_uiThermoZero );
	createChar( LCD_THERMOMETER_FIVE, m_uiThermoFive );
	createChar( LCD_THERMOMETER_ONE, m_uiThermoOne );
	createChar( LCD_THERMOMETER_TWO, m_uiThermoTwo );
	createChar( LCD_THERMOMETER_FOUR, m_uiThermoFour );
}


void LCD_Thermometer::SetStyle( uint8_t uiStyle )
{
	switch( uiStyle )
	{
	case STYLE_DEFAULT:
		{
			uint8_t uiThermoTop[LCD_THERMOMETER_SIZE]      = THERMOMETER_TOP;
			uint8_t uiThermoBotLeft[LCD_THERMOMETER_SIZE]  = THERMOMETER_BOTTOM_LHALF;
			uint8_t uiThermoBotRight[LCD_THERMOMETER_SIZE] = THERMOMETER_BOTTOM_RHALF;
			uint8_t uiThermoZero[LCD_THERMOMETER_SIZE]     = THERMOMETER_ZERO;
			uint8_t uiThermoFive[LCD_THERMOMETER_SIZE]     = THERMOMETER_FIVE;
			uint8_t uiThermoOne[LCD_THERMOMETER_SIZE]      = THERMOMETER_ONE;
			uint8_t uiThermoTwo[LCD_THERMOMETER_SIZE]      = THERMOMETER_TWO;
			uint8_t uiThermoFour[LCD_THERMOMETER_SIZE]     = THERMOMETER_FOUR;
			
			SetThermoParts( uiThermoTop, uiThermoBotLeft, uiThermoBotRight, uiThermoZero,
				uiThermoFive, uiThermoOne, uiThermoTwo, uiThermoFour );
			break;
		}
	case STYLE_INVERTED:
		{
			uint8_t uiThermoTop[LCD_THERMOMETER_SIZE]      = THERMOMETER_TOP_INV;
			uint8_t uiThermoBotLeft[LCD_THERMOMETER_SIZE]  = THERMOMETER_BOTTOM_LHALF_INV;
			uint8_t uiThermoBotRight[LCD_THERMOMETER_SIZE] = THERMOMETER_BOTTOM_RHALF_INV;
			uint8_t uiThermoZero[LCD_THERMOMETER_SIZE]     = THERMOMETER_ZERO_INV;
			uint8_t uiThermoFive[LCD_THERMOMETER_SIZE]     = THERMOMETER_FIVE_INV;
			uint8_t uiThermoOne[LCD_THERMOMETER_SIZE]      = THERMOMETER_ONE_INV;
			uint8_t uiThermoTwo[LCD_THERMOMETER_SIZE]      = THERMOMETER_TWO_INV;
			uint8_t uiThermoFour[LCD_THERMOMETER_SIZE]     = THERMOMETER_FOUR_INV;
			
			SetThermoParts( uiThermoTop, uiThermoBotLeft, uiThermoBotRight, uiThermoZero,
				uiThermoFive, uiThermoOne, uiThermoTwo, uiThermoFour );
			break;
		}
	case STYLE_NOFRAME:
		{
			uint8_t uiThermoTop[LCD_THERMOMETER_SIZE]      = THERMOMETER_TOP_NOFRAME;
			uint8_t uiThermoBotLeft[LCD_THERMOMETER_SIZE]  = THERMOMETER_BOTTOM_LHALF_NOFRAME;
			uint8_t uiThermoBotRight[LCD_THERMOMETER_SIZE] = THERMOMETER_BOTTOM_RHALF_NOFRAME;
			uint8_t uiThermoZero[LCD_THERMOMETER_SIZE]     = THERMOMETER_ZERO_NOFRAME;
			uint8_t uiThermoFive[LCD_THERMOMETER_SIZE]     = THERMOMETER_FIVE_NOFRAME;
			uint8_t uiThermoOne[LCD_THERMOMETER_SIZE]      = THERMOMETER_ONE_NOFRAME;
			uint8_t uiThermoTwo[LCD_THERMOMETER_SIZE]      = THERMOMETER_TWO_NOFRAME;
			uint8_t uiThermoFour[LCD_THERMOMETER_SIZE]     = THERMOMETER_FOUR_NOFRAME;
			
			SetThermoParts( uiThermoTop, uiThermoBotLeft, uiThermoBotRight, uiThermoZero,
				uiThermoFive, uiThermoOne, uiThermoTwo, uiThermoFour );
			break;
		}
	case STYLE_SOLID:
		{
			uint8_t uiThermoTop[LCD_THERMOMETER_SIZE]      = THERMOMETER_TOP_SOLID;
			uint8_t uiThermoBotLeft[LCD_THERMOMETER_SIZE]  = THERMOMETER_BOTTOM_LHALF_SOLID;
			uint8_t uiThermoBotRight[LCD_THERMOMETER_SIZE] = THERMOMETER_BOTTOM_RHALF_SOLID;
			uint8_t uiThermoZero[LCD_THERMOMETER_SIZE]     = THERMOMETER_ZERO_SOLID;
			uint8_t uiThermoFive[LCD_THERMOMETER_SIZE]     = THERMOMETER_FIVE_SOLID;
			uint8_t uiThermoOne[LCD_THERMOMETER_SIZE]      = THERMOMETER_ONE_SOLID;
			uint8_t uiThermoTwo[LCD_THERMOMETER_SIZE]      = THERMOMETER_TWO_SOLID;
			uint8_t uiThermoFour[LCD_THERMOMETER_SIZE]     = THERMOMETER_FOUR_SOLID;
			
			SetThermoParts( uiThermoTop, uiThermoBotLeft, uiThermoBotRight, uiThermoZero,
				uiThermoFive, uiThermoOne, uiThermoTwo, uiThermoFour );
			break;
		}
	case STYLE_SLIM:
		{
			uint8_t uiThermoTop[LCD_THERMOMETER_SIZE]      = THERMOMETER_TOP_SLIM;
			uint8_t uiThermoBotLeft[LCD_THERMOMETER_SIZE]  = THERMOMETER_BOTTOM_LHALF_SLIM;
			uint8_t uiThermoBotRight[LCD_THERMOMETER_SIZE] = THERMOMETER_BOTTOM_RHALF_SLIM;
			uint8_t uiThermoZero[LCD_THERMOMETER_SIZE]     = THERMOMETER_ZERO_SLIM;
			uint8_t uiThermoFive[LCD_THERMOMETER_SIZE]     = THERMOMETER_FIVE_SLIM;
			uint8_t uiThermoOne[LCD_THERMOMETER_SIZE]      = THERMOMETER_ONE_SLIM;
			uint8_t uiThermoTwo[LCD_THERMOMETER_SIZE]      = THERMOMETER_TWO_SLIM;
			uint8_t uiThermoFour[LCD_THERMOMETER_SIZE]     = THERMOMETER_FOUR_SLIM;
			
			SetThermoParts( uiThermoTop, uiThermoBotLeft, uiThermoBotRight, uiThermoZero,
				uiThermoFive, uiThermoOne, uiThermoTwo, uiThermoFour );
			break;
		}
	default:
		break;
	}
}


void LCD_Thermometer::SetThermoParts( uint8_t* uiThermoTop, uint8_t* uiThermoBotLeft, 
									  uint8_t* uiThermoBotRight, uint8_t* uiThermoZero,
									  uint8_t* uiThermoFive, uint8_t* uiThermoOne, 
									  uint8_t* uiThermoTwo, uint8_t* uiThermoFour )
 {
	for( int idx = 0; idx < LCD_THERMOMETER_SIZE; idx++ )
	{
		m_uiThermoTop[idx]      = uiThermoTop[idx];
		m_uiThermoBotLeft[idx]  = uiThermoBotLeft[idx];
		m_uiThermoBotRight[idx] = uiThermoBotRight[idx];
		m_uiThermoZero[idx]     = uiThermoZero[idx];
		m_uiThermoFive[idx]     = uiThermoFive[idx];
		m_uiThermoOne[idx]      = uiThermoOne[idx];
		m_uiThermoTwo[idx]      = uiThermoTwo[idx];
		m_uiThermoFour[idx]     = uiThermoFour[idx];
	}
 }


void LCD_Thermometer::InitialUpdate()
{
	setCursor( 0, 1 );
	write( LCD_THERMOMETER_TOP );
	setCursor( 14, 1 );
	write( LCD_THERMOMETER_BOTTOM_LHALF );
	setCursor( 15, 1 );
	write( LCD_THERMOMETER_BOTTOM_RHALF );
	UpdateTemp( 0 );
}


void LCD_Thermometer::UpdateTemp( int16_t iVal )
{
	if( iVal >= m_iMin && iVal <= m_iMax )
	{
		m_iCurTemp = iVal;
	}
	else
	{
		return;
	}
	uint8_t uiVal = map( iVal, m_iMin, m_iMax, MIN_POSSIBLE_VAL, MAX_POSSIBLE_VAL );
	if ( uiVal > MAX_POSSIBLE_VAL || uiVal < MIN_POSSIBLE_VAL )
	{
		return;
	}
	else
	{
		uint8_t uiQuotient = uiVal / 5, uiTemp, uiRem;
		int iPos;
		uiTemp = uiQuotient;
		while( uiTemp > 0 )
		{
			setCursor( 14 - uiTemp, 1 );
			write( LCD_THERMOMETER_FIVE );
			--uiTemp;
		}
		iPos = 13 - uiQuotient;
		setCursor( iPos, 1 );
		uiRem = uiVal % 5;
		switch( uiRem )
		{
			case 1:
			{
				write( LCD_THERMOMETER_ONE );
				break;
			}
			case 2:
			{
				write( LCD_THERMOMETER_TWO );
				break;
			}
			case 3: case 4:
			{
				write( LCD_THERMOMETER_FOUR );
				break;
			}
			default:
			{
				break;
			}
		}
		iPos = uiVal == 0 ? ++iPos : iPos;
		while( --iPos > 0 )
		{
			setCursor( iPos, 1 );
			write( LCD_THERMOMETER_ZERO );
		}
	}
}


void LCD_Thermometer::UpdateTemp()
{
	#ifndef __LM4F120H5QR__
   long lData = 0, lTemp = 0;
    __delay_cycles(1000);            //wait 4 ref to settle
    ADC10CTL0 |= ENC + ADC10SC;      //enable conversion and start conversion
    while(ADC10CTL1 & ADC10BUSY);         //wait..i am converting..pum..pum..
    lData = ADC10MEM;                //store val in t
    ADC10CTL0&=~ENC;                 //disable adc conv
	lTemp = ((lData * 27069L - 18169625L) >> 16);
	//lTemp = ((lData - 673) * 423) / 1024;
	m_iCurTemp = (int)lTemp;
	UpdateTemp( m_iCurTemp );
	#endif
}
	
	
void LCD_Thermometer::UpdateMessage( char* pchMsg )
{
	m_boolNativeMode = false;
	free( m_pchCurMsg );
	const int iLen = strlen( pchMsg );
	m_pchCurMsg = (char*) malloc( sizeof ( char ) * (iLen + 1 ));
	strcpy( m_pchCurMsg, pchMsg );
	m_iCurMsgLength = strlen( m_pchCurMsg );
}


/* void LCD_Thermometer::UpdateMessage( String strMsg )
{
	m_boolNativeMode = false;
	free( m_pchCurMsg );
	const int iLen = strMsg.length();
	m_pchCurMsg = (char*) malloc( sizeof ( char ) * ( iLen + 1 ));
	strMsg.toCharArray( m_pchCurMsg, iLen + 1 );
	m_iCurMsgLength = strlen( m_pchCurMsg );
} */

void LCD_Thermometer::ResetMode()
{
	if( !m_boolNativeMode )
	{
		m_boolNativeMode = true;
	}
}
