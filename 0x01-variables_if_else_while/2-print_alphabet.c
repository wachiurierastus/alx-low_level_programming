#include <stdio.h>

/*
 * Main -entry point/.
 *
 * Description - prints"abcdefghijklmnopqrstuvwxyz"
 *
 * Return (0);
 */
int main(){
	char a;
	for (a = 'a' ; a <= 'z' ; a++){
		putchar(a);
	}
	return (0);
}
