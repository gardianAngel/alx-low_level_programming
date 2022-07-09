#include "main.h"
#include <stdio.h>
/**
 * main -> prints Fizz for multiples of 3 and Buzz for multiples of 5.
 *
 * Return: resullt
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
		printf("%d ", i);
		

		i++;
	}
	printf("\n");

}
