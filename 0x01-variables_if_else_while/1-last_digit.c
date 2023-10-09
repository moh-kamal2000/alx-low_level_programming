#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -entry point 
 *
 * description : a
 *
 * return : 0(seuccess)
 */

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	if (digit > 5)
		printf("%i is grater than 5\n", n);
	else if (digit == 0)
		printf("%i is equal \n", n);
	else if (digit < 6 && digit != 0)
		printf("%i less than 6 && did not equal 0\n", n);
	return (0);
}
