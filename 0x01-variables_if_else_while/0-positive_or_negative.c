#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 
 * This code checks the positivity of a random number and then
 * It prints a message accordingly.
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
