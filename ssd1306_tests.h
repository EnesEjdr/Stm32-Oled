#ifndef __SSD1306_TEST_H__
#define __SSD1306_TEST_H__

#include <_ansi.h>

_BEGIN_STD_C

void ssd1306_TestBorder(void);
void ssd1306_TestFonts(void);
void ssd1306_TestFPS(void);
void ssd1306_TestAll(void);
void ssd1306_TestLine(void);
void ssd1306_TestRectangle(void);
void ssd1306_TestRectangleFill();
void ssd1306_TestCircle(void);
void ssd1306_TestArc(void);
void ssd1306_TestPolyline(void);
void ssd1306_TestDrawBitmap(void);
void SSD1306_ScrollRight(uint8_t start_row, uint8_t end_row);
void SSD1306_ScrollLeft(uint8_t start_row, uint8_t end_row);
void SSD1306_Scrolldiagright(uint8_t start_row, uint8_t end_row);
void SSD1306_Scrolldiagleft(uint8_t start_row, uint8_t end_row);
void SSD1306_Clear(void);
void SSD1306_Stopscroll(void);
void ssd1306_Emlak(void);

_END_STD_C

#endif // __SSD1306_TEST_H__
