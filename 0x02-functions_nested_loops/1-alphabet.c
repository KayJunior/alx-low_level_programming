#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a line
 * Return: Always 0
 */
void print_alphabet(void);
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');

}
