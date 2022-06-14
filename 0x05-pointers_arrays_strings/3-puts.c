#include "main.h"

/**
 * main - prints a string flollowed a new line 
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
