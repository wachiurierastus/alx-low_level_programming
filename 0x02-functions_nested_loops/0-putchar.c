#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: o - Success
 * prints _putchar plus a new line
 */
int main(void)
{
	int i;
	char p[] ="_putchar";
	for(i = 0;i < 9; i++)
	{
		putchar(p[i]);
	}
	putchar('\n');
	return (0);

}
