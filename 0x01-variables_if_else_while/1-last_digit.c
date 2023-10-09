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
		printf("");
	else if (digit == 0)
		printf("");
	else if (digit < 6 && digit != 0)
	return (0);
}
