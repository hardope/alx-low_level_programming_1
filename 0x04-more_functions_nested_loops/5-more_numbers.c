#include "main.h"
/**
*  more_numbers - Print
*/
void more_numbers(void)
{
int i, j, k;

for (j = 0; j < 10; j++)
{
for (i = 0; i < 15; i++)
{
if (i > 9)
{
_putchar('1');
k = i + 1;
_putchar((k + '0');
}
else
{
_putchar(i + '0');
}
}
_putchar('\n');
}
}