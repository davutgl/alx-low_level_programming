#include "main.h"
/**
 * main - Prints putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {'95', '112', '117', '116', '99', '104', '97', '114'};

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
