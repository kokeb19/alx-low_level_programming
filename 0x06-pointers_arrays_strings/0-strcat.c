#include "main.h"
/**
 * _strcat - concate
 * @dest: destination
 * @src: source
 * Return: the pointer 
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (dest[count] != '\0')
	{
		count++;
	}

	while (src[count2] != '\0')
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}
	dest[count] = '\0';
	return (dest);
}
