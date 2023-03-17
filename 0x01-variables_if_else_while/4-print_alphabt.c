#include <stdio.h>

/**
 * main - Prints the alphabet excep q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower;
	for (lower = 'a'; lower <= 'z'; lower++) {
		if (!(lower == 'q' || lower == 'e'))
			putchar(lower);
	}
	putchar('\n');
	return (0);
}
