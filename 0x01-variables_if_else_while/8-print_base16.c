#include <stdio.h>

/**
 * main - Prints base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base16;
	char alp16;
	for (base16 = 48; base16 < 58; base16++)
	       putchar(base16);
	for (alp16 = 'a'; alp16 <= 'f'; alp16++)
		putchar(alp16);
	putchar('\n');
	return (0);
}	
