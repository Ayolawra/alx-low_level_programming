#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - function to print lowercase alphabets
 *
 * Return: int(0)
 */
void print_alphabet(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
