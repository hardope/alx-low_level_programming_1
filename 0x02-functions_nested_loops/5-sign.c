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
		putchar('-');
		return(-1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('+');
		return(1);
	}
}
