#include <stdio.h>
/**
 * main -Enter main function
 * Description: print numbers
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)

		putchar(((char) (num + 48)));
	putchar('\n');
	return (0);
}
