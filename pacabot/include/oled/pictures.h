/*---------------------------------------------------------------------------
 *
 *      pictures.h
 *
 *
    Procedure to use ssd1351SetColorBmp function :

    - open with paint your picture
    - resize your width picture at 128 pixels and conserve proportional
    - save to Bitmap monochrome file
    - open Image2LCD
    - chose into BitsPixel box => monochrome
    - chose into Scan Mode box => Vertical Scan
    - chose into Output file type box => C array (*C)
    - save
    - open the file with NotePad => select all => copy
    - paste in pictures_bmp.h

---------------------------------------------------------------------------*/

#ifndef __PICTURES_H__
#define __PICTURES_H__

// TODO: Re-declare correctly these global variables

//w = 8 h = 8
static const unsigned char pic_battery_level[] =
{
    0XFC,0X84,0X84,0X84,0X84,0X84,0XFC,0X30
};

//w = 8 h = 8
static const unsigned char pic_battery_charging[] =
{
	0X18,0X18,0X3C,0X7E,0X7E,0X7E,0X24,0X24
};

//w = 127 h = 46
static const unsigned char Pacabot_bmp[] =
{
		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
		0X00,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0X07,0X07,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,
		0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XFF,0XFF,0XFF,0XFE,0XFE,0X00,0X00,0XC6,
		0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,
		0XC7,0X07,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0XE6,0XE6,0XE7,0XE7,0XE7,
		0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,
		0XE7,0XE7,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0XC6,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,
		0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XC7,0X07,
		0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X07,0X07,0X07,0X07,0X07,0X07,0X07,0X06,0X00,
		0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X79,0X79,0X79,0X79,0X79,0X79,0X79,
		0X79,0X79,0X79,0X79,0X79,0X79,0X79,0X79,0XF9,0XF9,0XF9,0XE0,0XE0,0X00,0X00,0XFF,
		0XFF,0XFF,0XFF,0XFF,0XFF,0X01,0X01,0XF9,0XF9,0XF9,0XF9,0X79,0X79,0X79,0X79,0X79,
		0X79,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,
		0XFF,0XF9,0XF9,0XF9,0XF9,0XF9,0XF9,0XF9,0XF9,0XF9,0XF9,0XF9,0XF9,0XF9,0XF9,0XF9,
		0XF9,0XF9,0XF9,0XF9,0XF9,0XF9,0XE0,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
		0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,
		0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
		0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0XFE,0XFE,0XFE,0XFE,0XCE,0XCE,0XCE,
		0XCE,0XCE,0XCE,0XCE,0XCE,0XCE,0XC0,0XC0,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0XFF,
		0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0XC0,0XCF,0XCF,0XCF,0XCF,0XCE,0XCE,0XCE,0XCE,0XCE,
		0XCE,0XCE,0XCE,0XCF,0XCF,0XCF,0XCF,0XCF,0XC7,0X00,0X00,0XCF,0XCF,0XCF,0XCF,0XCF,
		0XCF,0XCF,0XCF,0XCF,0XCF,0XCF,0XCF,0XCF,0XCF,0XCF,0XCF,0XCF,0XCF,0XCF,0XCF,0XCF,
		0XCF,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
		0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,
		0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
		0X00,0X00,0X01,0X01,0X01,0X01,0X01,0X00,0X00,0X01,0X01,0X01,0X01,0X01,0X01,0X01,
		0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X00,0X00,0X00,0X00,0X00,
		0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,
		0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X00,0X00,0X00,0X00,0X00,0X01,0X01,0X01,
		0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,
		0X01,0X01,0X01,0X01,0X01,0X01,0X00,0X00,0X00,0X00,0X01,0X01,0X01,0X01,0X01,0X01,
		0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X01,0X00,0X00,
		0X00,0X01,0X01,0X01,0X01,0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
};
//static const unsigned char Pacabot_bmp[] =
//{
//    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X00,0X00,0XC0,0X00,0XE0,0XF8,0XF4,0X4C,0XBC,0XDE,0XDE,0XFE,0X7E,
//    0X7C,0XBC,0X5C,0XE4,0X78,0X90,0X80,0X90,0XE0,0X80,0X00,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XC0,0XC0,
//    0X60,0X40,0X40,0XF0,0XFF,0XFC,0X74,0X74,0X6D,0XD1,0X71,0X78,0X7C,0X7C,0X7C,0X3E,
//    0XBF,0X3F,0X1B,0X0F,0XFF,0XFF,0XBF,0XE7,0X5B,0XCF,0XBC,0XF8,0X00,0X00,0X00,0X3C,
//    0X3C,0XB8,0XF8,0XF8,0XF8,0XF8,0X0C,0X0C,0X0C,0X7C,0XFC,0XF4,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X50,0X9C,0XFC,0XFC,0XFC,0XFC,0XFC,0XFC,0XC0,0X00,0X00,0X00,0X00,
//    0X00,0X80,0XE4,0XF8,0XF8,0XB8,0X3C,0XFC,0XFC,0XF8,0XF0,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X58,0X9C,0XFC,0XFC,0XFC,0XFC,0XFC,0XFC,0X04,0X00,0X00,0X00,0X00,
//    0XB0,0X24,0XFC,0XFC,0XFC,0X3C,0XBC,0XFC,0XFC,0XFC,0XF8,0X00,0X00,0X00,0X00,0X00,
//    0XE8,0XE0,0XF8,0XFC,0X9C,0X1C,0X1C,0X1C,0XFC,0XFC,0XFE,0XF9,0X20,0X5C,0X2F,0X39,
//    0XF8,0XFC,0XFF,0X3F,0XBF,0XF2,0XFC,0XFE,0XFF,0XFF,0XFF,0XFD,0XFE,0XFF,0XFF,0XFD,
//    0X76,0X0C,0X00,0X24,0X23,0X1E,0X1D,0X38,0X24,0X23,0X1F,0X00,0X00,0X00,0X00,0X00,
//    0X0F,0X0F,0XFF,0XFF,0XFF,0XC0,0XC0,0XE0,0XF0,0X7F,0X3F,0X00,0X00,0X00,0X00,0X00,
//    0X60,0X40,0XE8,0XFF,0XFF,0X0F,0X01,0X01,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,
//    0XFE,0XFF,0XFF,0XFF,0X03,0X00,0XC3,0XC5,0XC7,0XC3,0X02,0X00,0X00,0X00,0X00,0X80,
//    0X20,0X60,0XFC,0XFF,0XFF,0X0F,0X01,0X01,0X1F,0XFF,0XFC,0X00,0X00,0X00,0X00,0X7F,
//    0X7E,0XFF,0XFF,0X38,0X30,0X3C,0X3F,0XFF,0XFF,0XE7,0XE0,0X00,0X00,0X00,0X00,0XFF,
//    0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X07,0X3F,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X78,0XFB,0XFF,0XFF,0XFF,0X7F,0X1F,0XFF,0XEF,0XA3,0XA3,0XE3,0XF3,0XEC,
//    0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X40,
//    0X70,0X7F,0X7F,0X7F,0X02,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X40,0X51,0X7A,
//    0XFF,0XFF,0X0F,0X07,0X07,0X07,0XEE,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X0F,
//    0X1F,0X3F,0X3F,0X30,0X38,0X3B,0X3B,0X3F,0X3F,0X00,0X00,0X00,0X00,0X40,0X69,0X79,
//    0XFF,0XFF,0X0F,0X07,0X17,0X1E,0X9F,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X20,
//    0X3F,0X3F,0X68,0X60,0X70,0X70,0X71,0X3F,0X3F,0X1F,0X1E,0X00,0X00,0X00,0X1F,0X3F,
//    0XFF,0XFF,0XFF,0XE0,0XE0,0XE0,0XE0,0XE0,0X7F,0X7F,0X1F,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X3F,0X3F,0X3F,0X3F,0X30,0X00,0X06,0X3D,0X7F,0X67,0X7F,0X7F,0X3F,0X00,
//    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X00,0X00,0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00
//};

#endif // __PICTURES_H__
