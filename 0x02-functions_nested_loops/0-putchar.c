#include <stdio.h>
#include <string.h>

/**
 * main -main function entry
 *
 * Return: int(0)
 */
int main(void)
{
	char letter[] = "_putchar";
	char s;
	int i;
	int len = strlen(letter);

	for (i = 0; i <= len; i++)
	{
		s = letter[i];
		if (s == '\0')
			s = '\n';
		putchar(s);
	}
	return (0);
}
