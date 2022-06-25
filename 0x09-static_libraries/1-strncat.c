#include "main.h"

/**
 * _strncat - Two Strings
 * Description: Concatenates two strings.
 * @dest: The destination value
 * @src: The source value
 * @n: The limit of the concatenation
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
		int i;
		int x;

		for (x = 0; dest[x]; x++)
		{
		}

		for (i = 0; i < n && dest[i]; i++)
		{
			dest[i + x] = src[i];
		}

		dest[i + x] = '\0';

		return (dest);
}
