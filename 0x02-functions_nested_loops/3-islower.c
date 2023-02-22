#include "main.h"
#include <stdio.h>

/**
 * _islower - fucntion checks for lowercase character
 *
 * @c:  integer for comparing
 * Return: return 0
 */
int _islower(int c)
{
	if (c > 96 && c < 123) /* 96 and 123 are ascii codes*/
		return (1);
	else
		return (0);
}

