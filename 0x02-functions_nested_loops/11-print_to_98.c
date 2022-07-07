#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -> prints all numbers from n to 98.
 *
 * @n: argument
 **/

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}

	printf("98");
	putchar('\n');
}
