#include <stdio.h>

/**
 *main -enrty point 
 *
 *descriptiont : 
 
Return : 0(success)
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
