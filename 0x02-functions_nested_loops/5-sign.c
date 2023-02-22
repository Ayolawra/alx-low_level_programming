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
	int val;

	if (n > 0)
	{
		_putchar('+');
		val = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		val = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		val = -1;
	}
	return (val);
}
