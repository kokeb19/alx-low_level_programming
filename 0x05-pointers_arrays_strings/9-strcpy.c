#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy
 * @dst: destination
 * @src: source
 * Return: the pointer
 */
char *_strcpy(char *dst, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dst + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dst);
}
