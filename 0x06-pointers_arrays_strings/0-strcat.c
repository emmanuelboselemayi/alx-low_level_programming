#include "main.h"

/**
 * _strcat - two strings
 * Description: Concatenates two strings.
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
  int i = -1;
  int x;

  for (x = 0; dest[x] != '\0'; x++)
    {
    }

  do {
    i++;
    dest[x] = src[i];
    x++;
  } while (src[i] != '\0');

  return (dest);
}
