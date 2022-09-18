#include <stdio.h>

/**
 *	main - Entry point
 *	Return - Always 0 (success)
 *
 */
int main(void)
{
	char ch1;
	int i;
	long c;
	long long x;
	float f;

	printf("Size of char:%lu byte(s)\n", sizeof(ch1));
	printf("Size of an int:%lu byte(s)\n", sizeof(i));
	printf("Size of a long long int:%lu byte(s)\n", sizeof(c));
	printf("Size of a long long int:%lu byte(s)\n", sizeof(x));
	printf("Size of a float:%lu byte(s)", sizeof(f));
	return (0);
}
