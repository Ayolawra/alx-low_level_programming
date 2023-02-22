#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - function to print the last digit of a number
 *
 * @n: variable to check
 * Return: int
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -1 * (n % 10);
	else
		n = n % 10;
	_putchar('0' + n);
	return (n);
}
