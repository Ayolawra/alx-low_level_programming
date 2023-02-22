#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Function that prints every minute of jack's day
 *
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a < 3; a++)

	{
		if (a == 2)
		{
			for (b = 0; b < 4; b++)
			{
				for (c = 0; c < 6; c++)
				{
					for (d = 0; d < 10; d++)
					{
						printf("%d%d:%d%d\n", a, b, c, d);
					}
				}
			}
		}
		else
		{
			for (b = 0; b < 9; b++)
			for (b = 0; b < 10; b++)
			{
				for (c = 0; c < 6; c++)
				{
					for (d = 0; d < 10; d++)
					{
						printf("%d%d:%d%d\n", a, b, c, d);
					}
				}
			}
		}
	}
}
