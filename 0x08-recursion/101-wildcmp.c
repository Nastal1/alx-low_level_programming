#include "main.h"
/**
 * wildcmp - compares 2 strings, considering wildcard characters
 * postfix_match - return length of a string
 * iterate_wild - iterate through a string locate
 * @s1: first string to be compared
 * @s2: second string to be compared. may contain wildcards
 * Return: If the strings can be considered identical - 1.
 * Otherwise - 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}
	if (*s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	return (wildcmp(++s1, ++s2));
}
