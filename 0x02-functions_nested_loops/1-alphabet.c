#include "main.h"

/**
* print_alphabet - Alphabet prototype
* Description: Prints the alphabets of the alphabet in lowercase
* Return: void
*/
void print_alphabet(void)
{
		char x = 'a';

		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}

		_putchar('\n');
}
