#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
 * Return: no return.
 */
void print_diagonal(int n)
{
	int i;

	i = 0;

	int j;
	while (i < n)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
