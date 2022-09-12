#include <stdio.h>
/*
 * betty style doc for function main goes here
*/

/*
 * main - entry point
 * Description: 'Print alphabets in lower and upper case'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	alpha = 'A';
	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
