#include "main.h"
/**
*  print_last_digit - Print
* @a: description
* Return: Values
*/
int print_last_digit(int a)
{
	int last = a % 10;

	if (a < 0)
		a = (-1) * a;

	_putchar(last+'0');
	return (last);
}
