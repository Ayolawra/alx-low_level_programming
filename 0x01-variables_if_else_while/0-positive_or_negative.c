#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** Main - returns random integer
 * Description: This function returns a random nuber for certain conditions
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d \n", n);
	if (n > 0)
	{ 
		printf("The number is positive \n");
	}
	else if (n < 0)
	{
		printf("The number is negative \n");
	}
	else
	{
		printf("The number is zero \n");
	}
	return (0);
}

