#include "main.h"

/**
 * print_to_98 -> prints all numbers from n to 98.
 *
 * @n: argument
 **/

void print_to_98(int n)
{
	int i = 0;

	_putchar(n);

	while (i < 99)
	{
		_putchar(n - 1);
		_putchar(',');
		_putchar(' ');
	}
	i++;
}
