#include <stdio.h>

/**
 * main - Prints possible combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int combo;
	
	for (combo = 48; combo < 58; combo++)
	{
		putchar(combo);
		if (combo < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
