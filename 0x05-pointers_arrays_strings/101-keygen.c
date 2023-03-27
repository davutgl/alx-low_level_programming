#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int random = 0, ch = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (ch < 2772)
	{
		random = rand() % 128;
		if ((ch + random) > 2772)
			break;
		ch = ch + random;
		printf("%c", random);
	}
	printf("%c\n", (2772 - ch));
	return (0);
}
