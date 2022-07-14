#include "main.h"
#include <stdio.h>

/**
 * swap_int -> function to swap two integers
 * @a: first  pointer
 * @b: second pointer
 *
 * Returns: void
 */

void swap_int(int *a, int *b)
{
	int  temp = *a;
		*a = *b;
		*b = temp;
}
