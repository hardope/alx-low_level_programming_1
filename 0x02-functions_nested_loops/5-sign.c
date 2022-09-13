#include "main.h"
#include<stdio.h>
int print_sign(int n);
/**
* main - Print
* Return: 0. Successful.
*/
int main(void)
{
    int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
/**
*  _print_sign - Print
*/
int print_sign(int n)
{
	if (n < 0)
		putchar('-')
		return(-1);
	else if (n == 0)
		putchar('0')
		return (0);
	else
		putchar('+')
		return(1);
}
