#include "main.h"
#include <string.h>

/**
 * _strncat - concate
 * @dest: destination
 * @src: sourse
 * @n: amount
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = strlen(dest), count2 = 0;

	while (count < n && *src)
	{
		dest[count + count2] = *src;
		src++;
		count2++;
	}
	dest[count + a] = '\0';
        return (dest);
}
