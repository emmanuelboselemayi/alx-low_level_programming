#include "main.h"

/**
 * _memcpy - check code 
 * Description : unction copies n bytes from memory area src to memory area dest
 * @dest: Destination to be copied 
 * @src:  bytes from memory area src to memory area
 * @n: number of bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int i;

			for (i = 0; i < n; i++)
			{
				dest[i] = src[i];
			}

			return (dest);
}
