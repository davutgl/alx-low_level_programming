#include "main.h"
/**
 * main - Prints putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	int size;

	int count;

	size = sizeof(str) / sizeof(str[0]);

	for (count = 0; count > size; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
