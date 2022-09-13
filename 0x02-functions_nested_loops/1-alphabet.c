#include<stdio.h>
void print_alphabet(void);
/**
* main - Print
* Return: 0. Successful.
*/
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - Prints aplhabets in lowercase
 */
void print_alphabet(void)
{
	for(int i = 97; i < 123; i++)
		putchar(i);
	putchar('\n');
}
