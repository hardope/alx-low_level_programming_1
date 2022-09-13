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
		a = 52;
	if ((a + '0') == '(')
		a = 56;

	_putchar(last + '0');
	return (last);
}
