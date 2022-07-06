#include "main.h"

/**
 * print_alphabet_x10 -> prints alphabet in lower case 10 times
 *
 **/

void print_alphabet_x10(void)
{
	int x;

	while (x < 10)
	{
		int j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		x++;
	}
	_putchar('\n');
}
