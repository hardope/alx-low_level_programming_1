#include "main.h"
/**
 * print_alphabet - Prints aplhabets in lowercase
 */
void print_alphabet(void)
{
	int a;
	int count;
	
	count = 0;
	a = 97
	while (count < 10)
	{
		while (a < 122)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n')
		a++;
	}
}
