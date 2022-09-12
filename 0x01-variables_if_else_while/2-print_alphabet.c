#include <stdio.h>
/*
 * main entry point
 * Description:'prints alphabeths in lower case'
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		1++;
	}
	putchar('\n');
	return (0);
}
