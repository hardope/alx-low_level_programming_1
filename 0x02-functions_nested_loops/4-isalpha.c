#include "main.h"
#include<stdio.h>
int _islower(int c);
/**
* main - Print
* Return: 0. Successful.
*/
int main(void)
{
	int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
/**
*  _islower - Print
*/
int _islower(int c)
{
	return (isalpha(c));
}
