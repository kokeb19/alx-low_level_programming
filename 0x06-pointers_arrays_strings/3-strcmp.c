#include "main.h"
/**
 * _strcmp - compare
 * @s1: first
 * @s2: second
 * Return: 0 if s1 and s2 are both equal
 * otther number if not equal
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (op);
}
