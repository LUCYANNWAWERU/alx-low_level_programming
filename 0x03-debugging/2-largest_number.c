#include "main.h"



/**
 * largest_number - main
 * @a: integer
 * @b: integer
 * @c: integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)

	{

		largest = a;

	}

	else if (b > a && b > c)

	{

		largest = b;

	}

	else

	{

		largest = c;

	}

	return (largest);

}


