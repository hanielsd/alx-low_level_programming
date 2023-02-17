#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char c = 97;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
