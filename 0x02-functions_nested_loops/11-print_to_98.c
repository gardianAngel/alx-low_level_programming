#include "main.h"

/**
 * print_to_98 -> prints all numbers from n to 98.
 *
 * @n: argument
 **/

void print_to_98(int n)
{
	int i = 0;

	for (i = n; i < 98; i++)
	{
		_putchar(i);
		_putchar(',');
		_putchar(' ');
	}
}
