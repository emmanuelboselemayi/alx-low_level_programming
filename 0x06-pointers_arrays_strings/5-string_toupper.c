#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase
 * Description: Converts to  uppercase
 * @str:  to be converted to uppercase
 * Return: to str
 */

char *string_toupper(char *str)
{
		int i;

		for (i = 0; str[i]; i++)
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		}

		return (str);
}
