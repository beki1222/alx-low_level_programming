#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */

/* to print the lowercase alphabet*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
