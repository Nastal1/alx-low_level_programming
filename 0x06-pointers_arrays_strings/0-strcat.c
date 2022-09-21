#include "main.h"
/**
 * _strcat -  a function that concatenates two strings
 * @dest: this in the output dest
 * @src: this is the input src
 * Return: This return to dest, that concatenates two string
 */
char *_strcat(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0' && i < 97)
	{
		*(s1 + i) = *(s2 + j);
		i++;
		j++;
	}
	*(s1 + i) = '\0';
	return (s1);
}
