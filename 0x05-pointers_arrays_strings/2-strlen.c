#include "main.h"

/**
 * _strlen - return length
 * @s: input string
 * Return: length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
