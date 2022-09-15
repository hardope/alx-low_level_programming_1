#include "main.h"
/**
*  more_numbers - Print
*/
void more_numbers(void)
{
int i, j;

for (j = 0; j < 10; j++)
{
for (i = 0; i < 15; i++)
{
if (i > 9)
{
putchar('1');
putchar((i-10) + '0');
}
else
putchar(i + '0');
}
putchar('\n');
}
}
