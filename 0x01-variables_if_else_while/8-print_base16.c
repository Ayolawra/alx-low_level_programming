#include <stdio.h>
/**
 * main -enter main function
 * Description: programme that prints numbers of base 16 n lowercase
 *
 * Return: 0
 */
int main(void)
{
	char alpha;
	int num;

	for (num = 0; num <= 9; num++)

	{
		putchar((char) (num + 48));
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)

	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
