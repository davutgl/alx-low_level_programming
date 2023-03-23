#include <stdio.h>
/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */
int main(void)
{
	long int i;

	long int pf;

	i = 612852475143;
	for (pf = 2; pf <= i; pf++)
	{
		if (i % pf == 0)
		{
			i /= pf;
			pf--;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
