#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	int y;

	while (x < 58)
	{
		y = 48;
		while (y < 58)
		{
			if (x != y && x < y)
			{
				putchar(x);
				putchar(y);
				if (y == 57 && x == 56)
					break;
				putchar(44);
				putchar(32);
			}
		y++;
		}
	x++;
	}
	putchar('\n');
	return (0);
}
