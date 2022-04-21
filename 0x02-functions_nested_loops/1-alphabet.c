#include "main.h"


/**
 *  print_alphabet - prints the alphabet, in lowercase followed by a new line
 *
 *  Return: no return value
 */
void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
