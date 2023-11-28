
/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  LCD_Core.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef LCD_CORE_H_
#define LCD_CORE_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "DIO_Core.h"
#include "LCD_CFG.h"

#define F_CPU 16000000U
#include <util/delay.h>


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/
extern const uint8 LCD_CUSTOM_CHARACTERS_g[8][8];
 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void LCD_Init(void);
void LCD_WriteCommand(uint8 cmd);
void LCD_WriteChar(uint8 Data);
void LCD_WriteString(uint8* str);
void LCD_WriteInteger(sint32 num);
void LCD_WriteCustomCharacter (void);
void LCD_GoTo(uint8 Row, uint8 Column);
void LCD_Clear(void);

 
#endif  /*LCD_CORE_H_*/

/**********************************************************************************************************************
 *  END OF FILE: Std_Types.h
 *********************************************************************************************************************/
