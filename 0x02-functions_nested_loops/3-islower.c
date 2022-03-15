#include "main.h"
/**
 * _islower - Checks if a provided character is lowercase
 * Description: Checks for lowercase characters
 *
 * Parameter c: int
 * Return: int
 */
int _islower(int c)
{
	int i = 0;

	if (c >= 97 && c <= 122)
	{
		i++;
	}
	return (i);
}
