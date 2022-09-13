#include "main.h"
/**
*  print_last_digit - Print
* @a: description
* Return: Values
*/
int print_last_digit(int a)
{
	int last = a % 10;

	a = (int)(a);
	if (a < 0)
		a = (-1) * a;
	if ((a + '0')  == ',')
		a = 4 + '0';
	if ((a + '0') == '(')
		a = 8 + '0';

	_putchar(last + '0');
	return (last);
}
