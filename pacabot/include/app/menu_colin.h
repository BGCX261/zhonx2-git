/*
 * menu_colin.h
 *
 *  Created on: 4 déc. 2014
 *      Author: colin
 */

#ifndef MENU_COLIN_H_
#define MENU_COLIN_H_
#include "stm32f4xx_gpio.h"
typedef struct {
char *name;
char type;
void *param;
}lineItem;

typedef struct{
		char *name;
		lineItem line[10];
}menuItem;
int menu_colin(menuItem);
void anti_rebonds (GPIO_TypeDef* gpio, uint16_t gpio_pin);
void menu_animate(unsigned char y, unsigned char max_y);
void affiche_menu(menuItem menu,int first_line);

#endif /* MENU_COLIN_H_ */