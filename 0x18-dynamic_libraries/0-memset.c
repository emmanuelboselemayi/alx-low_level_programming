#include "main.h"

/**
* _memset - Fills n bytes
* Description : Fills n bytes of the memory area pointed to
* by s with the constant byte b
* @s: Pointer to be filled
* @b: The character to fill 
* @n: Number of bytes to fill
* Return: The pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
		unsigned int i;

			for (i = 0; i < n; i++)
			{
				s[i] = b;
			}

			return (s);
}
