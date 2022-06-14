#include "main.h"

/**
 * rev_string - check code
 * Description: Reverses a string
 * @s: pointer int type
 * Return: Alaways 0
 */
void rev_string(char *s)
{
		char *r = s;

		while (*(r + 1) != '\0')
			r++;

		while (r > s)
		{
			char tmp = *r;
			*r-- = *s;
			*s++ = tmp;
		}
}
