#include "main.h"
#include <stdio.h>

/**
 * print_sign - function prints sign of number
 *
 * @n: variable to check
 * Return: int 1 if positive 0 for zero and 0 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		putchar('-');
	}
	return (-1);

}
