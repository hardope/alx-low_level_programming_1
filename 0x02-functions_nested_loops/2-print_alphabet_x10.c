#include<stdio.h>
void print_alphabet_x10(void);
/**
* main - Print
* Return: 0. Successful.
*/
int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet - Prints aplhabets in lowercase
 */
void print_alphabet_x10(void)
{
	for(int j = 0; j < 10; j++)
	{
		for(int i = 97; i < 123; i++)
			putchar(i);
		putchar('\n');
	}
}
