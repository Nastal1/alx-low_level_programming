#include "main.h"
#include <stdio.h>
/**
 * rev_string - function prints a string reverser
 * @s: pointer pointing to a string
 */
void rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char rdc;

	while (i < j)
	{
		rdc = s[i];
		s[i] = s[j];
		s[j] = rdc;
		i++, j--;
	}
}
