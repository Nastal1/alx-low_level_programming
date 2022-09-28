#include "main.h"
/**
 * factorial - gets factorial on n
 * @n: integer
 * Return: on Success 1.
 * on error, -1 is returnerd and
 * err number set appropriately.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
