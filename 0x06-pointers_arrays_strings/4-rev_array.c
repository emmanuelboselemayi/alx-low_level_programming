#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * Description: Reverses the array
 * @a: an array of integers
 * @n: number of elements to swap
 * Return: empty
 */
void reverse_array(int *a, int n)
{
		int i = 0;
		int x;

		for (x = n / 2; x > 0; x--, i++)
		{
			a[n - i - 1] += a[i];
			a[i] = a[n - i - 1] - a[i];
			a[n - i - 1] -= a[i];
		}
}
