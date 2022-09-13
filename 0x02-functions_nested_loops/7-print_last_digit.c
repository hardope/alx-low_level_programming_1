#include "main.h"
/**
*  print_sign - Print
* @a: description
* Return: Values
*/
int print_last_digit(int a)
{
	if (a < 0)
		a = (-1) * a;
	int last = a % 10;
	_putchar(last+'0');
	return (last);
}
