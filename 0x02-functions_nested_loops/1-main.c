#include "main.h"

/**
 * main - Prints Holberton as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int str[] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109,110 ,111, 112, 113, 114, 115, 116, 117, 118, 119 ,120, 121, 122};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
