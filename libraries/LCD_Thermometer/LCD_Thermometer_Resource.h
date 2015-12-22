#ifndef THERMOMETER_LCD_RESOURCE_H_
#define THERMOMETER_LCD_RESOURCE_H_

//*********************** ----------------- *******************************//
//*********************** LCD_Thermometer_Resource.h **********************//
//*********************** ----------------- *******************************//
/**
 * This file contains definitions for thermometer styles
 * in the following order
 * a. STYLE_DEFAULT 	    
 * b. STYLE_INVERTED 	    
 * c. STYLE_NOFRAME 	    
 * d. STYLE_SOLID 	    
 * e. STYLE_SLIM 
 */	    

#define THERMOMETER_TOP \
{                 \
  0b00000,		  \
  0b00011,        \
  0b00110,        \
  0b01100,        \
  0b01100,        \
  0b00110,        \
  0b00011,        \
  0b00000         \
}                 

#define THERMOMETER_BOTTOM_LHALF \
{                 \
  0b00011,		  \
  0b11100,        \
  0b00011,        \
  0b11111,        \
  0b11111,        \
  0b00011,        \
  0b11100,        \
  0b00011         \
}                 

#define THERMOMETER_BOTTOM_RHALF \
{                 \
  0b11000,		  \
  0b00110,        \
  0b11011,        \
  0b11101,        \
  0b11101,        \
  0b11011,        \
  0b00110,        \
  0b11000         \
}                 


#define THERMOMETER_ZERO \
{                 \
  0b00000,		  \
  0b11111,        \
  0b00000,        \
  0b00000,        \
  0b00000,        \
  0b00000,        \
  0b11111,        \
  0b00000         \
}                 

#define THERMOMETER_FIVE \
{                 \
  0b00000,		  \
  0b11111,        \
  0b00000,        \
  0b11111,        \
  0b11111,        \
  0b00000,        \
  0b11111,        \
  0b00000         \
}                 

#define THERMOMETER_ONE \
{                 \
  0b00000,		  \
  0b11111,        \
  0b00000,        \
  0b00001,        \
  0b00001,        \
  0b00000,        \
  0b11111,        \
  0b00000         \
}                 

#define THERMOMETER_TWO \
{                 \
  0b00000,		  \
  0b11111,        \
  0b00000,        \
  0b00011,        \
  0b00011,        \
  0b00000,        \
  0b11111,        \
  0b00000         \
}                 

#define THERMOMETER_FOUR \
{                 \
  0b00000,		  \
  0b11111,        \
  0b00000,        \
  0b01111,        \
  0b01111,        \
  0b00000,        \
  0b11111,        \
  0b00000         \
}                 \

#define THERMOMETER_TOP_INV \
{                 \
  0b11111,		  \
  0b11100,        \
  0b11001,        \
  0b10011,        \
  0b10011,        \
  0b11001,        \
  0b11100,        \
  0b11111         \
}                 

#define THERMOMETER_BOTTOM_LHALF_INV \
{                 \
  0b11111,		  \
  0b11111,        \
  0b11100,        \
  0b00000,        \
  0b00000,        \
  0b11100,        \
  0b11111,        \
  0b11111         \
}                 

#define THERMOMETER_BOTTOM_RHALF_INV \
{                 \
  0b11111,		  \
  0b11111,        \
  0b00111,        \
  0b00011,        \
  0b00011,        \
  0b00111,        \
  0b11111,        \
  0b11111         \
}                 


#define THERMOMETER_ZERO_INV \
{                 \
  0b11111,		  \
  0b00000,        \
  0b11111,        \
  0b11111,        \
  0b11111,        \
  0b11111,        \
  0b00000,        \
  0b11111         \
}                 

#define THERMOMETER_FIVE_INV \
{                 \
  0b11111,		  \
  0b00000,        \
  0b11111,        \
  0b00000,        \
  0b00000,        \
  0b11111,        \
  0b00000,        \
  0b11111         \
}                 

#define THERMOMETER_ONE_INV \
{                 \
  0b11111,		  \
  0b00000,        \
  0b11111,        \
  0b11110,        \
  0b11110,        \
  0b11111,        \
  0b00000,        \
  0b11111         \
}                 

#define THERMOMETER_TWO_INV \
{                 \
  0b11111,		  \
  0b00000,        \
  0b11111,        \
  0b11100,        \
  0b11100,        \
  0b11111,        \
  0b00000,        \
  0b11111         \
}                 

#define THERMOMETER_FOUR_INV \
{                 \
  0b11111,		  \
  0b00000,        \
  0b11111,        \
  0b10000,        \
  0b10000,        \
  0b11111,        \
  0b00000,        \
  0b11111         \
}  

#define THERMOMETER_TOP_NOFRAME \
{                 \
  0b00000,		  \
  0b00000,        \
  0b00001,        \
  0b00011,        \
  0b00011,        \
  0b00001,        \
  0b00000,        \
  0b00000         \
}                 

#define THERMOMETER_BOTTOM_LHALF_NOFRAME \
{                 \
  0b11111,		  \
  0b11111,        \
  0b11100,        \
  0b00000,        \
  0b00000,        \
  0b11100,        \
  0b11111,        \
  0b11111         \
}                 

#define THERMOMETER_BOTTOM_RHALF_NOFRAME \
{                 \
  0b11111,		  \
  0b11111,        \
  0b00111,        \
  0b00011,        \
  0b00011,        \
  0b00111,        \
  0b11111,        \
  0b11111         \
}                 


#define THERMOMETER_ZERO_NOFRAME \
{                 \
  0b00000,		  \
  0b00000,        \
  0b11111,        \
  0b11111,        \
  0b11111,        \
  0b11111,        \
  0b00000,        \
  0b00000         \
}                 

#define THERMOMETER_FIVE_NOFRAME \
{                 \
  0b00000,		  \
  0b00000,        \
  0b11111,        \
  0b00000,        \
  0b00000,        \
  0b11111,        \
  0b00000,        \
  0b00000         \
}                 

#define THERMOMETER_ONE_NOFRAME \
{                 \
  0b00000,		  \
  0b00000,        \
  0b11111,        \
  0b11110,        \
  0b11110,        \
  0b11111,        \
  0b00000,        \
  0b00000         \
}                 

#define THERMOMETER_TWO_NOFRAME \
{                 \
  0b00000,		  \
  0b00000,        \
  0b11111,        \
  0b11100,        \
  0b11100,        \
  0b11111,        \
  0b00000,        \
  0b00000         \
}                 

#define THERMOMETER_FOUR_NOFRAME \
{                 \
  0b00000,		  \
  0b00000,        \
  0b11111,        \
  0b10000,        \
  0b10000,        \
  0b11111,        \
  0b00000,        \
  0b00000         \
}                 

#define THERMOMETER_TOP_SOLID \
{                 \
  0b00000,		  \
  0b00000,        \
  0b00000,        \
  0b00000,        \
  0b00000,        \
  0b00000,        \
  0b00000,        \
  0b00000         \
}                 

#define THERMOMETER_BOTTOM_LHALF_SOLID \
{                 \
  0b00000,		  \
  0b00000,        \
  0b00011,        \
  0b11111,        \
  0b11111,        \
  0b00011,        \
  0b00000,        \
  0b00000         \
}                 

#define THERMOMETER_BOTTOM_RHALF_SOLID \
{                 \
  0b00000,		  \
  0b00000,        \
  0b11110,        \
  0b11111,        \
  0b11111,        \
  0b11110,        \
  0b00000,        \
  0b00000         \
}                 


#define THERMOMETER_ZERO_SOLID \
{                 \
  0b00000,		  \
  0b00000,        \
  0b00000,        \
  0b00000,        \
  0b00000,        \
  0b00000,        \
  0b00000,        \
  0b00000         \
}                 

#define THERMOMETER_FIVE_SOLID \
{                 \
  0b00000,		  \
  0b00000,        \
  0b00000,        \
  0b11111,        \
  0b11111,        \
  0b00000,        \
  0b00000,        \
  0b00000         \
}                 

#define THERMOMETER_ONE_SOLID \
{                 \
  0b00000,		  \
  0b00000,        \
  0b00000,        \
  0b00001,        \
  0b00001,        \
  0b00000,        \
  0b00000,        \
  0b00000         \
}                 

#define THERMOMETER_TWO_SOLID \
{                 \
  0b00000,		  \
  0b00000,        \
  0b00000,        \
  0b00011,        \
  0b00011,        \
  0b00000,        \
  0b00000,        \
  0b00000         \
}                 

#define THERMOMETER_FOUR_SOLID \
{                 \
  0b00000,		  \
  0b00000,        \
  0b00000,        \
  0b01111,        \
  0b01111,        \
  0b00000,        \
  0b00000,        \
  0b00000         \
}                 

#define THERMOMETER_TOP_SLIM \
{                 \
  0b00000,		  \
  0b00011,        \
  0b01100,        \
  0b10000,        \
  0b10000,        \
  0b01100,        \
  0b00011,        \
  0b00000         \
}                 

#define THERMOMETER_BOTTOM_LHALF_SLIM \
{                 \
  0b00000,		  \
  0b11111,        \
  0b00011,        \
  0b11111,        \
  0b11111,        \
  0b00011,        \
  0b11111,        \
  0b00000         \
}                 

#define THERMOMETER_BOTTOM_RHALF_SLIM \
{                 \
  0b00000,		  \
  0b11000,        \
  0b11110,        \
  0b11111,        \
  0b11111,        \
  0b11110,        \
  0b11000,        \
  0b00000         \
}                 


#define THERMOMETER_ZERO_SLIM \
{                 \
  0b00000,		  \
  0b11111,        \
  0b00000,        \
  0b00000,        \
  0b00000,        \
  0b00000,        \
  0b11111,        \
  0b00000         \
}                 

#define THERMOMETER_FIVE_SLIM \
{                 \
  0b00000,		  \
  0b11111,        \
  0b00000,        \
  0b11111,        \
  0b11111,        \
  0b00000,        \
  0b11111,        \
  0b00000         \
}                 

#define THERMOMETER_ONE_SLIM \
{                 \
  0b00000,		  \
  0b11111,        \
  0b00000,        \
  0b00001,        \
  0b00001,        \
  0b00000,        \
  0b11111,        \
  0b00000         \
}                 

#define THERMOMETER_TWO_SLIM \
{                 \
  0b00000,		  \
  0b11111,        \
  0b00000,        \
  0b00011,        \
  0b00011,        \
  0b00000,        \
  0b11111,        \
  0b00000         \
}                 

#define THERMOMETER_FOUR_SLIM \
{                 \
  0b00000,		  \
  0b11111,        \
  0b00000,        \
  0b01111,        \
  0b01111,        \
  0b00000,        \
  0b11111,        \
  0b00000         \
}

#endif