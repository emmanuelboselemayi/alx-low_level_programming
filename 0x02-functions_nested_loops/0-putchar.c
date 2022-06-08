#include "main.h"

/**
 * main - _putchar entry
 * Description: Prints _putchar
 * Return: 0
 */
int main(void)
{
		char c[9] = "_putchar";
		int i;
                for (i = 0; i < 8; i++)
		{
			_putchar(c[i]);
		}

		_putchar('\n');

		return (0);
}

