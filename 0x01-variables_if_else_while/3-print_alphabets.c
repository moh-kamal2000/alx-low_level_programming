#include <stdio.h>

/**
 *main -enrty point 
 *
 *description : print alphabit lowercase and uppercase
 *Return :always  0(success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'A')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return 0;
}
