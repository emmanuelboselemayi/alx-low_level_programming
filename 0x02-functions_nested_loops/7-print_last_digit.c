#include "main.h"

/**
* print_last_digit - Print last digit
* @n: n is the number to check
* Description: Prints last digit of a number
* Return: last digit of the number
*/
int print_last_digit(int n)
{
		n %= 10;

		if (n < 0)
			n = -n;

		_putchar(n + '0');

		return (n);
}
