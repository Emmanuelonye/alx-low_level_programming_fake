#include <stdio.h>
/**
*main -Ebtry point
*
* return: always 0(success)
*/
int main(void)
{
	int a;
	long int b;
	float f;
	char ch1;
	long long int e;

	printf("Size of int= %lu bytes", sizeof(a));
	printf("Size of long int= %lu bytes", sizeof(b));
	printf("Size of float= %lu bytes", sizeof(f));
	printf("Size of char= %lu bytes", sizeof(ch1));
	printf("Size of long long int= %lu bytes" sizeof(e));
	return (0);
}
