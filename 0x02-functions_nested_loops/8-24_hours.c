#include "main.h"
/**
*  jack_bauer - Print
*/
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48; i < 51; i++)
	{
		for (j = 48; j < 52; j++)
		{
			for (k = 48; k < 54; k++)
			{
				for (l = 48; l < 58; l++)
				{
					putchar(i);
					putchar(j);
					putchar(':');
					putchar(k);
					putchar(l);
					putchar('\n');

				}
			}
		}
	}
}
