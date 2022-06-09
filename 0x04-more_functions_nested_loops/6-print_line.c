#include "main.h"

/**
 * print_line - prints the _ character
 * Description: Prints  underscores
 * @n: the amount of times to print the character _
 * Return: void
 */
void print_line(int n)
{
		int i = 0;

		if (n > 0)
		{
			for (; i < n; i++)
				_putchar('_');
		}
		_putchar('\n');
}
