#include "main.h"
/**
 * _strcat - concate
 * @dst: destination
 * @src: source
 * Return: the pointer 
 */
char *_strcat(char *dst, char *src)
{
	int count = 0, count2 = 0;

	while (*(dst + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dst + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dst);
}
