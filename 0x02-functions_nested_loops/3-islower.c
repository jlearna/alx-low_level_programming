#include "main.h"
/**
 * islower - main func to compare character case
 *
 * @c: character to compare
 *
 * Return: 1 if found, 0 otherwise
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
