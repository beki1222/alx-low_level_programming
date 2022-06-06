#include<stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 58;

	while (num < 68)
	{
		putchar(num);
		if (num < 67)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
