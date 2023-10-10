#include <stdio.h>

/**
 * main - entry point 
 *
 * description  :print ahphabit without e or q
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
