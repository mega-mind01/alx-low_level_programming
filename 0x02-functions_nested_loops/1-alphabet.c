nclude "main.h"

/**
 * print alphabet - prints all the letters of the alphabet
 *Description - Just as said
 * Returns: returns void
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

	_putchat('\n');
}
