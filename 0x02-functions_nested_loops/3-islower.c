#include "main.h"
/**
 * _islower - checks for lowercase.
 *
 *@c: ASCII character
 * Return: Always 1 for lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	else
		return (0);
	_putchar('\n');
}
