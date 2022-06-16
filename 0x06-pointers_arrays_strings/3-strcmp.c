#include "main.h"

/**
 * _strcmp - Compares two strings
 * Description: Compares the two different strings
 * @s1: The first string 
 * @s2: The second string
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
		int i;

		for (i = 0; s1[i] || s2[i]; i++)
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
		}
return 0;
}
