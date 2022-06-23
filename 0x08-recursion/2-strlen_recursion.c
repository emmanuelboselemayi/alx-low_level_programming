#include "main.h"

/**
 * _strlen_recursion - Returns Length of String
 * Description : Gets the length of a string
 * @s: Pointer to the string to get length of
 * Return: On Sucess 1.
 */
int _strlen_recursion(char *s)
{
		if (*s == '\0')
			return (0);

		return (1 + _strlen_recursion(++s));
}
