#include "main.h"
/**
 * print_alphabet - Prints aplhabets in lowercase
 */
void print_alphabet_x10(void)
{
	for(int j = 0; j < 10; j++)
	{
		for(int i = 97; i < 123; i++)
			_putchar(i);
		_putchar('\n');
	}
}
