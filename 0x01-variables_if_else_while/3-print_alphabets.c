#include <stdio.h>
/**
 * main -Enter main function
 * Description: Print alphabet upper and lower case
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
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
