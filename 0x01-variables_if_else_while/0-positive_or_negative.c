#include <stdlib.h>
#include <time.h>
#include <string.h>
#include<stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;

	if (last_digit == 0)
		printf("%i is zero\n", n);
	if (last_digit < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is positive\n", n);

	return (0);
}
