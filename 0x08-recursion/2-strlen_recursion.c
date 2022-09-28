#include "main.h"
/**
 * _strlen_recursion - writes a fuction that
 * return length of string
 * @s: input string
 * Return: Result is the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
