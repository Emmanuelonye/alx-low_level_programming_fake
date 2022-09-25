#include <stdio.h>

/**
 * main - Print 1-100, replace multiples of 3/5/both w/ Fizz/Buzz/FizzBuzz
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		printf("Fizz");
		else if (i % 5 == 0)
		printf("Buzz");
		else if (i % 15 == 0)
		printf("FizzBuzz");
		else
		printf("%d", i);
		if (i != 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
