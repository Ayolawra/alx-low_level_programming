#include <stdio.h>
/**
 * main - function print even numbers of the first 50 fibonacci
 *
 * Return: 0 always
 */
int main(void)
{
	long int a, b = 1, c = 2, sum = 0, eSum = 0;

	for (a = 0; a < 49; a++)

	{
		if ((c % 2 == 0) && (c <= 4000000))
		{
			eSum = eSum + c;
		}
	sum = b + c;
b = c;
c = sum;
	}
	printf("%ld\n", eSum);
	return (0);
}
