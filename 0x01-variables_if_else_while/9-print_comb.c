#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
*/
int main(void)
{
	int y;

	for (y = 48; y < 58; y++)
	{
		putchar(y);

		if (y != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
}