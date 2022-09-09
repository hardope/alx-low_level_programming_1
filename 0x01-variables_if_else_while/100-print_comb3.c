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
	int a = 48;
	int b = 44;
	char arr[] = {01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89}

	while (a < 58)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(b);
			putchar(32);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
