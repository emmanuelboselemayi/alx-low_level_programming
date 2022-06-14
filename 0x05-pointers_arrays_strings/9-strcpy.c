#include "main.h"

/**
* _strcpy - Fucntion prototype
* Description: copies the string pointed to by src
* @dest: pointer char type
* @src: pointer char type
* Return: Always 0
*/
char *_strcpy(char *dest, char *src)
{
		int i = 0;

		for (; *(src + i) != '\0'; i++)
			dest[i] = *(src + i);

		dest[i] = '\0';

		return (dest);
}
