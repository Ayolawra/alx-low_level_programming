#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - function that returns the length of a string
 *
 * @s: variable
 * Return: int
 */

int _strlen(char *s)
{
	int l;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}

