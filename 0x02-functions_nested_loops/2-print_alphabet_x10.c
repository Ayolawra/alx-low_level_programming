#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: always return 0
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;
	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
		i++;
	}
}
