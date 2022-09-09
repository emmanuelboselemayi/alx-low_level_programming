#include "main.h"

/**
 * _isalpha - character check
 * Description: checks to see if a character is an actual letter
 * @c:Return 1
 * Return: 1 for letter and 0 if otherwise 
 */
int _isalpha(int c)
{
		int result = (c >= 97 && c <= 122) || (c >= 65 && c <= 90) ? 1 : 0;

		return (result);
}
