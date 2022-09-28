#include "main.h"
/**
 * palind2 - obtains length of a
 * @s: string
 * Return: on Success 1
 * on err, -1 is returned
 * and err no is set appropriately
 */
int palind2(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + palind2(s + 1));
}
/**
 * palind3 - compares strings versus strings reverse
 * @i: index
 * @l: length
 * @s: string
 * Return: on Success 1
 * on err, -1 is returned
 * and err no is set appropriately
 */
int palind3(int i, int l, char *s)
{
	if (l > 0)
	{
		if (s[i] == s[l])
		{
			return (palind3(i + 1, l - 1, s));
		}
	else if (s[i] != s[l])
	{
		return (0);
	}
		else
		{
			return (1);
		}
	}
	return (1);
}
/**
 * is_palindrome - checks if a string is a palindromr
 * @s: string to evaluate
 * Return: on Success 1
 * on err, -1 is returned
 * and err no is set appropriately
 */
int is_palindrome(char *s)
{
	return (palind3(0, palind2(s) - 1, s));
}
