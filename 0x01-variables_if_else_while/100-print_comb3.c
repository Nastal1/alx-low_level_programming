#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program print differeng combination of 2 digits'
 * Return: Always 0 (Success)
*/
int main(void)
{
	int y, x;

	y = 48;
	x = 48;

	while (x < 58)
	{
		y = 48;
		while (y < 58)
		{
			if (x != y && x < y)
			{
				putchar(x);
				putchar(y);

				if (y == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
