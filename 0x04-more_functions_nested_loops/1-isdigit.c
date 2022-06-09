#include "main.h"

/**
 * _isdigit - 0 through 9
 * Description: scans for digits (0 through 9)
 * @c: c to be checked
 * Return: 1 if the character is a digit otherwise 0
 */
int _isdigit(int c)
{
		int is_digit = c >= 48 && c <= 57 ? 1 : 0;

		return (is_digit);
}
