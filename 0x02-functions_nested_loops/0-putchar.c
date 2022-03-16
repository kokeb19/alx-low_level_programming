/**
 * main  -putchar
 *
 * Return: Always 0 (Success)
 */
#include "main.h"
int main(void)
{
char n[8] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
	_putchar(n[i]);
}
_putchar('\n');
return (0);
}
