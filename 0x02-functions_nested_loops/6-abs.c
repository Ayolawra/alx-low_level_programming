#include "main.h"
#include <stdio.h>

/**
 * _abs - function to print the absolute value of a number
 * @n: variable to check
 * Return: always 0
 */
int _abs(int n)
{
	int num;

	if (n < 0)
	{
		num = -1 * n;
	}
	else
	{
		num = n;
	}
	return (num);
}
