#include "main.h"
#include<stdio.h>
/**
*  times_table - Print
* Return: Values
*/
void print_times_table(int n)
{
	int j;
	int i;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			int c = i * j;
			int d = i * (j + 1);

			printf("%i", c);
			if (j != (n - 1))
			{
				printf(",");
				if ((c >= 0 && c <= 9) && (d >= 0 && d <= 9))
					printf("  ");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
}
