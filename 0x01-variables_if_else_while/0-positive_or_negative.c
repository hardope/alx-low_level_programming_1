#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
* main: This is the main function
* Return: 0 if successful. 1 otherwise
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last = n % 10;
	if (last == 0)
		printf("%i is zero\n", n);
	if (last > 0)
		printf("%i is positive\n", n);
	if (last < 0)
		printf("%i is negative\n", n);
	return (0);
}
