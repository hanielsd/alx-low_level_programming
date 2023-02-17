#include <stdio.h>

/**
* main - Entry
*
* Return: Always 0 (Success)
*/
int main(void)
{
		char c = 48;

		while (c <= 102)
		{
			if (c <= 57 || c >= 67)
				putchar(c);
			if (c == 58)
			{
				c = 96;
			}
			c++;
		}

		putchar('\n');

	return (0);
}
