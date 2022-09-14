#include "main.h"
/**
 * print_alphabet_xten -prints lowercase 10 times
 * No Return type.
 */
void print_alphabet_xten(void)
{
	int count;
	char low;
	{
		for (count = 0; count <= 9; count++)
		{
			for (low = 'a'; low <= 'z'; low++)
			{
			_putchar(low);
			}
		}
	}
	_putchar('\n');
}
