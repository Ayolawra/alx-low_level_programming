#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - function that checks
 * for positive and negative numbers
 *
 * @i: variable to check
 * Return: alwas 0
 */
void positive_or_negative(int i)
{

	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else 
	{
		printf("%d is positive\n", i);
	}
}
