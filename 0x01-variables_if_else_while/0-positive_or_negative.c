#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - an entry point 
 * Description - This code checks the positivity of a random number and then it prints a message accordingly.
 *
 * Retrun: int
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
		printf("%d is positive", n);
	else if (n<0)
		printf("%d is negative", n);
	else
		printf("%d is zero", n);
	printf("\n");

 	return (0);
}
