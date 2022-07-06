#include "main.h"

/**
 * print_alphabet_x10 -> prints alphabet in lower case 10 times
 *
 **/

void print_alphabet_x10(void)
{
	int x = 0;
	int j;

	while (x < 10)
	{

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		x++;
	}
}
