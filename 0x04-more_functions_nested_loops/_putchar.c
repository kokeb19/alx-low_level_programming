#include <unistd.h>
#include "main.h"
/**
 * _putchar - character c
 * @c: character
 *
 * Return: in success 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
