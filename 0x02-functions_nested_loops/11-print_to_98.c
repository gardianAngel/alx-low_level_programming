#include "main.h"

/**
 * print_to_98 -> prints all numbers from n to 98.
 *
 * @n: argument
 **/

void print_to_98(int n)
{
	int i;
	int j;

	if (n < 98)
	{
		_putchar(n);
		for (i = n; i < 98; i++)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		_putchar(n);
		for (j = n; j > 98; j--)
		{
			_putchar(j);
			_putchar(',');
			_putchar(' ');
		}
	}
}
