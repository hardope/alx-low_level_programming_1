#include "main.h"
# include<stdio.h>
/**
*  print_to_98 - Print
* @a: Value of parameter
* Return: Values
*/
void print_to_98(int n)
{
	int i;
	for (i = n; i > 99; i--)
	{
		printf("%i", i);
		if (i != 99)
			printf(", ");
	}
	printf("\n");
	for (i = n; i < 99; i++)
	{
		printf("%i", i);
		if (i != 98)
			printf(", ");
	}
	printf("\n");
}
