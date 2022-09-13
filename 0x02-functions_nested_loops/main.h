#include<stdio.h>
/**
 * print_alphabet - To print lowercase alphabets
 */
void print_alphabet(void)
{
	int i;
	
	for (i = 65; i < 123; i++)
		putchar(i);
	putchar('\n');
}
