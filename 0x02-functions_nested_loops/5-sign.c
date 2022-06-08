#include "main.h"

/**
* print_sign - Print -/+
* Description: Prints out the sign of a number
* @n: check number
* Return: Returns 1 and prints + if n is greater than zero,0 and prints 0 if n is zero,-1 and prints - if n is less than 0
*/
int print_sign(int n)
{
		int x;
		char y;

		if (n <= 0)
		{
			if (n == 0)
			{
				x = 0;
				y = '0';
																					}
			else
			{
				x = -1;
				y = '-';
																					}
		}
		else
		{
			x = 1;
			y = '+';
		}

		_putchar(y);

		return (x);
}
