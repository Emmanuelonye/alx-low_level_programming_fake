#include "main.h"
/**
 * print_alphabet_xten -prints lowercase 10 times
 * No Return type.
 */
void print_alphabet_xten(void)
{
	int count;
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		count = 0;
		while (count <= 9)
		{
			_putchar(low);
			count++;
		}
	}
	_putchar('\n');
}
