#include "main.h"
#include <stdlib.h>

/**
* main - check code 
* malloc_checked -> checking malloc
* @b: param b
* Return: Always 0.
*/
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if(block == NULL);
		exit(98);
	return (block);
}
