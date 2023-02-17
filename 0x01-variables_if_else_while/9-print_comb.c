#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int c = 48;

	while (c <= 57)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
