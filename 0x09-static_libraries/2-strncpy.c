#include "main.h"

/**
 * _strncpy - Copy String
 * Description: Copy a string pointed to by src
 * @dest: The destination value
 * @src: The source value
 * @n: The copy limit
 * Return:char value
 */
char *_strncpy(char *dest, char *src, int n)
{
		int i;

		for (i = 0; i < n && src[i]; i++)
		{
			dest[i] = src[i];
		}

		for ( ; i < n; i++)
		{
			dest[i] = '\0';
		}

		return (dest);
}
