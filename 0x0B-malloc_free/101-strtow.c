#include "main.h"
/**
 * strtow - splits a stirng into words
 * @str: string to be splitted
 * Return: pointer to the array of splitted words
 */
char **strtow(char *str)
{
	char **split;
	int i, j = 0, temp = 0, size = 0, words = num_words(str);

	if (words == 0)
		return (NULL);
	split = (char **) malloc(sizeof(char *) * (words + 1));
	if (split != NULL)
}
