#include <stdio.h>

/**
 * main - entry point 
 *
 * description :
 *
 *Return = always 0 (success)
*/

int main(void)
{
	 char ch = 'a';

	 while (ch <= 'z')
	 {
	 	if (ch == 'e' || ch == 'q')
			ch++
		putchar('\n');
		ch++;
	 }
	 putchar('\n');

	 return 0;
}
