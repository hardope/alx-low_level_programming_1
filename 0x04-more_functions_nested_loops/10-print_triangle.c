#include "main.h"
/**
*  print_triangle - Print
* @size: Value of parameter
*/
void print_triangle(int size)
{
        int i, j, k;

        for (i = 0; i < size; i++)
	{
		for (j = 8; j > i; j--)
		{
			_putchar(' ');
		}
		for (k = 0; k < i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
