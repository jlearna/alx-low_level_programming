#include "main.c"
#include <string.h>

/**
 * _puts - prints a string, followed by a new line
 * @str: input
 * @Return: nothing
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n);
}
