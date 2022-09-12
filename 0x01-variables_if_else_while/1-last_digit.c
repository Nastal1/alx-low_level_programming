#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int 1;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	1 = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, 1);
	}
	else if (n == 0)
	{
	printf("Last digit of %d is %d and is zero\n", n, 1);
	}
	else
	{
	printf("Last digit of %d is %d and is lwss than 6 and not zero\n", n, 1);
	}
	return (0);
}
