#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * Description : Prints a string
 * @s: Pointer to the string to print
 * Return: void
 */
void _puts_recursion(char *s)
{
		if (*s == '\0')
			_putchar('\n');
		else
		{
			_putchar(*s);
			_puts_recursion(s + 1);
		}
}
