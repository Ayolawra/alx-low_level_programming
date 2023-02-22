#include "main.h"
#include <stdio.h>

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: variable to check
 *
 * Return: int 1 for yes and 0 for no;
 */
int _isalpha(int c)
{
	if (c > 64 && c < 123)
		return (1);
	else
		return (0);
}
