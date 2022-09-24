#include <stdio.h>

/**
 * main - entyry.
 * return : always 0 (success).
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		putchar(c);
	}
	return (0);
}
