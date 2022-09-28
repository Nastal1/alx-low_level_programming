#include "main.h"
/**
 * wildcmp - compares 2 strings, considering wildcard characters
 * @s1: first string to be compared
 * @s2: second string to be compared. may contain wildcards
 * Return: If the strings can be considered identical - 1.
 * Otherwise - 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}
	return (0);
}
