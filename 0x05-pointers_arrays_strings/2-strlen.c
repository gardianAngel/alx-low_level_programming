#include "main.h"
/**
 * _strlen -> a function that  returns the lenght of a string.
 * @s: points for the string to be chacked
 * RETURN: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
