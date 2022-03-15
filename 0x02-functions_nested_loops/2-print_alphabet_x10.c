#include "main.h"
/**
 * print_alphabet - prints all characters
 *Description: prints all lowercase char
 *
 * Return : void
 */
void print_alphabet(void)
{
	int i;
	for (i =0; i<10; i++)
	{
		char ch;
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
