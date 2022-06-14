#include "main.h"

/**
 * puts_half - check code 
 * Description: Prints every other character of a string
 * @str: pointer int type
 * Return: Always 0
 */
void puts_half(char *str)
{
		int x = 0;
		int i = 0;

		for (x = 0; str[x] != '\0'; x++)
		{
		}

		for (i = (x + 1) / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}

		_putchar('\n');
