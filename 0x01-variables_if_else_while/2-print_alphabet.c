#include <stdlib.h>
#include <stdio.h>
/**
 * main -Enter main function
 * Description: print alphabet
 *
 * Return: char
 */
int main(void)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
	
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
