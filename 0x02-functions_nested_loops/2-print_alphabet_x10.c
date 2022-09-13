#include "main.h"
/**
 * print_alphabet - Prints aplhabets in lowercase
 */
void print_alphabet_x10(void)
{
	int a;
	int count;

	a = 97;
	for (count = 0; count < 10; count++)
	{
		while (a < 122)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
