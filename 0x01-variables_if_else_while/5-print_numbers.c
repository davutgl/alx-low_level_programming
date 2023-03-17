#include <stdio.h>

/**
 * main - Prints decimal digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
