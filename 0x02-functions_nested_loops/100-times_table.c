#include "main.h"
#include<stdio.h>
/**
* print_times_table - Print
* @n: Values
* Return: Values
*/
void print_times_table(int n)
{
	int j;
	int i;
	n = n + 1;

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
				if ((c >= 10 && c <= 99) && (d >= 10 && d <= 99))
					printf("  ");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
}
