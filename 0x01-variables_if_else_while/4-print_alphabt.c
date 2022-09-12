#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the boolean expressions will be tested today'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		if ((alpha != 'e') && (alpha != 'q'))
		{
			putchar(alpha);
			alpha++;
		}
		else
		{
			alpha++;
		}
	}
	putchar ('\n');
	return (0);
}
