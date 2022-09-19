#include "main.h"
/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character,
 * followed by a new line
 * @s: pointer points to a character or string
 */
void puts2(char *s)
{
	int a;

	for (a = 0; s[a] != '\0' ; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(s[a]);
		}
	}
	_putchar('\n');
}
