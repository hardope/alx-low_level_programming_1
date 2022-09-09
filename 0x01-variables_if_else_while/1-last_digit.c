#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/* more headers goes there */
/* Initial short description */
/* betty style doc for function main goes there */
/**
* main - This is a description
* Return: 0 if successful. 1 otherwise
*/
int main(void)
{
	int n;
	int last;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n
	while (n >= 10)
	{
		m = n / 10;
	}
	if (last == 0)
		printf("Last digit of %i is 0 and is 0\n", n);
	if (last > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, m);
	if (last < 6 && last != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, m);
	return (0);
}
