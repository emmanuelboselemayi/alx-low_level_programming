#include "main.h"

/**
 * factorial - gets factorial of n
 * Description: Computes the factorial of a number.
 * @n: integer
 * Return: The factorial of the number.
 */
int factorial(int n)
{
		if (n < 0)
			return (-1);

		if (n == 1)
			return (1);

		return (n * factorial(n - 1));
}
