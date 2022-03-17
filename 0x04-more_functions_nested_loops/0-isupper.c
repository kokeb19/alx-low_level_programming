#include "main.h"

/**
 * _isupper - checks if it is in upper case.
 * @c: input.
 * Return: 1 if it is an uppercase 0 otherwise.
 */
int _isupper(int c)
{
	if (c <= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
