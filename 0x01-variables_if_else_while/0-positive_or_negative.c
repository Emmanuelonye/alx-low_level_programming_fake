#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	printf("Number is positive");

	if (n == 0)
	printf("Number is zero");

	if (n < 0)
	printf("Number is  negative");

	printf("\n");
	return (0);
}
