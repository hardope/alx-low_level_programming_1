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
	int a;
	for (a = 97; a < 122, a++)
		putchar("%c", a);
	putchar("/n");
	return (0);
}
