#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10x.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		char lowercase;

		for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
			_putchar(lowercase);
		_putchar('\n');
		i++;
	}
}
