#include "main.h"
/**
 * wildcmp - compare strings
 * @s1: pointer to string param
 * @s2: pointer to string param
 * Return: 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
	}
