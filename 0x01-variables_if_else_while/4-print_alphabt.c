#include <stdio.h>

/**
* main - Entry
*
* Description: all lowercase letters except e and q
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char letter = 97;

	while (letter <= 122)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
