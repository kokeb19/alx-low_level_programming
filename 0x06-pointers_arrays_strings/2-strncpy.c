#include "main.h"
/**
 * _strncpy - copy
 * @dst: destination
 * @src: source
 * @n: amount
 * Return: pointer to destination
 */

char *_strncpy(char *dst, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dst[i] = src[i];
	for ( ; i < n; i++)
		dst[i] = '\0';

	return (dst);
}
