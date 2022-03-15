#include "main.h"
/**
 * _isalpha - Checks if a provided character is lowercase
 * Description: Checks for lowercase characters
 *
 * @c: int
 *
 * Return: int
 */
int _isalpha(int c)
{
	int i = 0;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		i++;
	}
	return (i);
}
