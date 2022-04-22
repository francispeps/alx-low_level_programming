#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return:void
 */

void print_alphabet_x10(void)
{
	char c = '\0';
	int n = 10;

	while (n--)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
