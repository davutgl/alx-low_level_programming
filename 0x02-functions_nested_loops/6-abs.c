#include "main.h"
/**
 * _abs - computes absolute value
 *
 *@n: input integer
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
