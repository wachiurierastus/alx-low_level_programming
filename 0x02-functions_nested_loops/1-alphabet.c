#include "main.h"
/**print alphabet : prints all characters
 *
 * Return : void
 */
void print_alphabet(void)
{
	char ch;
	for (ch ='a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return;
}
