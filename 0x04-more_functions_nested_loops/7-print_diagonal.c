#include "main.h"
/**
*  print_diagonal - Print
* @n: Value
*/
void print_diagonal(int n)
{
	if (n > 0)
	{
		for (i = 0; i < n; i ++)
			_putchar(95);
		_putchar('\n');
	}
	else
		_putchar('\n');
}
