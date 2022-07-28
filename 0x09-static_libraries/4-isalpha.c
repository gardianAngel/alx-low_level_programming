#include "main.h"

/**
 * _isalpha -> checks for alphabet characters
 * @c: a character to be checked on
 * Return: returns 1 and 0 depending on condition
 **/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
