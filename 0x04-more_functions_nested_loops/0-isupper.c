#include "main.h"
#include <stdio.h>

/**
 * _isupper - function checks if letter is upper case
 *
 * @c: variable to check
 * Return: c
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
