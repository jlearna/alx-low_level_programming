#include "main.h"
/**
 * _isalpha - main function
 * @c: input
 * Return: 1 or 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
