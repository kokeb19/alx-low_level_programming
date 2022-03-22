#include "main.h"

/**
 * swap-int - swap values
 * @a: first integer
 * @b: second integer
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*b = *a;
	*b = c;
}
