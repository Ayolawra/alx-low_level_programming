#include "main.h"
#include <stdio.h>
/**
 * factorial - function finds factorial
 * @n: number
 *
 * Return: return factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
