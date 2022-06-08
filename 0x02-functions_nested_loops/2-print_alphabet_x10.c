#include "main.h"

/**
* print_alphabet_x10 - print a-z x10
* Prints the alphabet  x10 times
* Return: void
*/
void print_alphabet_x10(void)
{

		char c = 'a';
		int i;

		for (i = 0; i < 10; i++)
		{
			while (c <= 'z')
			{
				_putchar(c);
				c++;
																					}

			c = 'a';

			_putchar('\n');
		}

}
