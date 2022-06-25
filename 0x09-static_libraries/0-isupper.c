#include "main.h"

/**
 * _isupper - uppercase character
 * Description: Checks if a character is uppercase
 * @c: c to be checked
 * Return: 1 for uppercase otherwise 0
 */
int _isupper(int c)
{
		int is_upper = c >= 65 && c <= 90 ? 1 : 0;

		return (is_upper);
}
