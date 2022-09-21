#include "main.h"
/**
 * _strcat -  a function that concatenates two strings
 * @dest: this in the output dest
 * @src: this is the input src
 * Return: This return to dest, that concatenates two string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0' && i < 97)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
