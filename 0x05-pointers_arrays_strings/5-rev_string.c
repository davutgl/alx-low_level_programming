#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int counter = 0, i, j;

	char *str, rev;

	while (counter >= 0)
	{
		if (s[counter] == '\0')
			break;
		counter++;
	}
	str = s;

	for (i = 0; i < (counter - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			rev = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = rev;
		}
	}
}
