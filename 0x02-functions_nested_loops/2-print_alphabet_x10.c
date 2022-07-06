#include "main.h"


/**
 * print_alphabet_x10 - main prints lowercase ten times
 *
 * return: 0 if success else otherwise
 */

void print_alphabet_x10(void)
{
	int i, lowercase;

	for (i = 1; i <= 10; i++)
	{
		for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		{
			_putchar(lowercase);
		}
		_putchar('\n');
	}
}
