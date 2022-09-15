#include "main.h"
/**
*  print_triangle - Print
* @size: Value of parameter
*/
void print_triangle(int size)
{
        int i, j, k;

        for (i = 0; i < 8; i++)
	{
		for (j = 8; j > i; j--)
		{
			printf(" ");
		}
		for (k = 0; k < i; k++)
		{
			printf("#");
		}
		printf("\n");
	}
}
