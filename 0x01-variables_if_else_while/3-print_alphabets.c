#include<stdio.h>
#include<stdlib.h>
/* more headers goes there */
/* Initial short description */
/* betty style doc for function main goes there */
/**
* main - This is a description
* Return: 0 if successful. 1 otherwise
*/
int main(void)
{
	char b;

	int a = 97;

	while (a < 123)
	{
		if (a > 90 && a < 97)
		{
			a++;
			continue;
		}

		b = (char)(a);
		putchar(b);
		a++;
		if (a == 123)
			a = 65;
		if (a == 91)
			break;
	}
	putchar('\n');
	return (0);
}
