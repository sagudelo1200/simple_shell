#include "header.h"

/**
 *_strdup - copy of the string given.
 *@str: string.
 *Return: a pointer to the array, or NULL if it fails.
 */
char *_strdup(const char *str)
{
    int i = 0, j = 0;
    char *s;

    if (str == NULL)
        return (NULL);
    while (str[i] != '\0')
        i++;
    i++;
    s = malloc(i * sizeof(*s) + 1);
    if (s == NULL)
        return (NULL);
    while (j < i)
    {
        s[j] = str[j];
        j++;
    }
    s[j] = '\0';
    return (s);
}

/**
 *_strlen - length of the string given.
 *@string: string.
 *Return: length of the string given.
 */
int _strlen(const char *string)
{
	int i = 0;

	while (string[i] != '\0')
		i++;
	return (i);
}

/**
 *_strcpy - copy string into other string.
 *@dest: destine.
 *@src: source.
 *Return: copied string.
 */
void _strcpy(char *dest, const char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = 0;
}

/**
 *_strcat - concatenate two strings given.
 *@dest: destine.
 *@src: source.
 *Return: concatenated string.
 */
char *_strcat(char *dest, char *src)
{
    int a = 0, b = 0;

    while (dest[a] != '\0')
        a++;
    dest[a++] = '/';
    while (src[b] != '\0')
    {
        dest[a + b] = src[b];
        b++;
    }
    dest[a + b] = '\0';

    return (dest);
}

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 or 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return ((int) s1[i] - s2[i]);
	}

	return (0);
}
