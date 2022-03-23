#include "main.h"

/**
 * _strcat - concate
 * @dest: destination
 * @src: source
 * Return: the pointer
 */

char *_strcat(char *dest, char *src)
{
	int count;
	int count2;

	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	count2 = 0;
	while (src[count2] != '\0')
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}
	dest[count] = '\0';
	return (dest);
}
