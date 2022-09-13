#include "main.h"
/**
*  _print_sign - Print
* @n: Value of parameter
* Return: Values
*/
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return(-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return(1);
	}
}
