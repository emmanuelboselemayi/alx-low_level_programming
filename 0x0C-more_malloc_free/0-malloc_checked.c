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
	void *p;

	p = malloc(b);
	if (p == NULL);
	    exit(98);
	return (p);

}
