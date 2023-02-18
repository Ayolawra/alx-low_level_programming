#include <stdio.h>
/**
 * main -Enter main function
 * Description: program that prints combinations of single digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)

	{
		putchar((char) (num + 48));

		if (num == 9)

		{
			continue;
		}
		putchar(',');
		putchar(' ');
		if (num == 9)
		{
			continue;
		}
	}
	putchar('\n');
	return (0);

}
