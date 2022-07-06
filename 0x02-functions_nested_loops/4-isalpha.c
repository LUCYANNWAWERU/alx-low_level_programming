#include "main"


/**
 * _isalpha - checks c if lower or upper
 * @c: c is lower or upper case
 *
 *Return: 0 if success else otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
