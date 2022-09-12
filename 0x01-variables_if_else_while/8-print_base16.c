#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
*/
int main(void)
{
	int y;
	char alpha;

	for (y = 48; y < 58; y++)
	{
		putchar(y);
	}
	for (alpha = 'a; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
