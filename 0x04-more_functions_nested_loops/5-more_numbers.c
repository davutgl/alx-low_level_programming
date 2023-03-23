#include "main.h"

/**
 * more_numbers - Prints digits.
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i;

	int j;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
		}
		i++;
		_putchar('\n');
	}
}
