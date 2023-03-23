#include "main.h"
/**
 * _isupper - checks for uppercase.
 *
 *@c: ASCII character
 * Return: Always 1 for uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c < 91 && c > 64)
		return (1);
	else
		return (0);
}
