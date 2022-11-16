#include <stdlib.h>

/**
 * print_name - executes a function pass as a parameter
 * @name: input param
 * @f: function to execute passed as pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
