#include<stdio.h>
/**
* main: Main function
*/
int main(void)
{
	for (int i = 1; i < 100; i++)
	{
		if (i < 3 || i == 4)
			printf("%i ", i);
		else if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%i ", i);
	}
}
