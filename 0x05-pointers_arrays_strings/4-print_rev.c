#include "main.h"

/**
 * print_rev - print a string
 * @str: input
 * Return: no return
 */
void print_rev(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			break;
		}
		count++;
	}
	for (count--; count >= 0; count--)
		_putchar(str[count]);
		_putchar('\n');
}
