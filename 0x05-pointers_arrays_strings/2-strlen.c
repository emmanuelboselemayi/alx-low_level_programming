#include  "main.h"

/**
 * _strlen - return length of string
 * @s: is a pointer int char type
 * Return: Always 0.
 */
int _strlen(char *s)
{
		int i = 0;

		while (s[i] != '\0')
		{
			i++;
		}

		return (i);
}
