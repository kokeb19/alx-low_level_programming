#include "main.h"
/**
 * _strncat - concate
 * @dst: destination
 * @src: source
 * @n: amount
 * Return: pointer to dest
 */
char *_strncat(char *dst, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dst + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dst + count) = *(src + count2);
	       if (*(src + count2) == '\0');
	               break;
	       count++;
	       count2++;
	}
	return (dst);
}
