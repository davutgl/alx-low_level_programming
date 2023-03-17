#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int b, a, c, d, branch0, branch1;
b = a = c = d = 48;
while (d < 58)
{
	c = 48;
	while (c < 58)
	{
		a = 48;
		while (a < 58)
		{
			b = 48;
			while (b < 58)
			{
				branch0 = (d * 10) + c;
				branch1  = (a * 10) + b;
				if (branch0 < branch1)
				{
					putchar(d);
					putchar(c);
					putchar(32);
					putchar(a);
					putchar(b);
					if (d == 57 && c == 56 && a == 57 && b == 57)
						break;
					putchar(44);
					putchar(32);
				}
				b++;
			}
			a++;
		}
		c++;
	}
	d++;
}
putchar('\n');
return (0);
}
