#include "main.h"
/**
*  print_sign - Print
* @a: description
* Return: Values
*/
int print_last_digit(int a)
{
	int last = a % 10;
	_putchar(last+'0');
	return (last);
}
