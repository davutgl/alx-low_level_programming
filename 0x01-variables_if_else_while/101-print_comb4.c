#include <stdio.h>

/**
 * main - Prints three digit combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int a;

        int b;

        int c;

        a = 48;
        b = 48;
        c = 48;

        while (b < 58)
        {
            a = 48;
            while (a < 58)
                {
                    c = 48;
                    while (c < 58)
                    {
                        if (b != a && b != c && a != c && b < a && a < c)
                        {
                            putchar(b);
                            putchar(a);
                            putchar(c);
                            if (a == 56 && b == 55 && c == 57)
                                break;
                        putchar(44);
                        putchar(32);
                        }
                        c++;
                    }
                    a++;
                }
            b++;
        }
    putchar('\n');
    return (0);
}
