#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function checks for if the variable is a digit
 *
 * @c: variable to check
 * Return: int 1 or 0
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);

}
