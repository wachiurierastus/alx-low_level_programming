#include <stdio.h>

/**
 * main - Entry point for writing all alphabets
 *
 * Description - Have a for loop for both.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;

	for (character = 'a' ; character <= 'z' ; character++)
	{
		putchar(character);
	}
	for (character = 'A' ; character <= 'Z' ; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
