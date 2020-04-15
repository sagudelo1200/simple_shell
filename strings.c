#include "header.h"

/**
 *_strdup - copy of the string given.
 *@str: string.
 *Return: a pointer to the array, or NULL if it fails.
 */
char *_strdup(char *str)
{
	char *v;
	unsigned int i, size = 1;

	if (str)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			size++;
		}
		v = malloc(size * sizeof(char));
		if (v == NULL)
		{
			free(v);
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			v[i] = str[i];
		}
		v[i] = '\0';
		return (v);
	}
	return (NULL);
}

/**
 *_strlen - length of the string given.
 *@string: string.
 *Return: length of the string given.
 */
int _strlen(char *string)
{
	int i = 0;

	for (i = 0; string[i] != 0; i++)
		;
	return (i);
}

/**
 *_strcpy - copy string into other string.
 *@dest: destine.
 *@src: source.
 *Return: copied string.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 *_strcat - concatenate two strings given.
 *@dest: destine.
 *@src: source.
 *Return: concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;
	dest[i++] = '/';
	while ((dest[i++] = src[j++]) != '\0')
		;
	dest[i++] = '\0';
	return (dest);
}
