#include <stdlib.h>
#include <time.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char *string;
	itoa(n,string,10);
	int last_digit = int(string[strlen(string -1)])

	if last_digit == 0
		printf("%i is zero\n", n);
	else if last_digit < 0
		printf("%i is negative\n", n);
	else
		printf("%i is positive\n", n);

	return (0);
}
