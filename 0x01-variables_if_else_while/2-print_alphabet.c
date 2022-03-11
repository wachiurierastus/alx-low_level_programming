#include <stdio.h>

/*
 * Main -Entry point for writing the lowercase alphabets
 *
 * Description - prints"abcdefghijklmnopqrstuvwxyz"
 *
 * Return (0);
 */
int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
