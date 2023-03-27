#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int reverse = 0;

	while (reverse >= 0)
	{
		if (s[reverse] == '\0')
			break;
		reverse++;
	}
	for (reverse--; reverse >= 0; reverse--)
		_putchar(s[reverse]);
	_putchar('\n');
}
