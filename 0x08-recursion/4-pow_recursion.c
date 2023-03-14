#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function to return power of num
 * @x: number
 * @y: power of
 *
 * Return: x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
