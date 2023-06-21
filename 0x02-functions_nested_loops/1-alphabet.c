#include "main.h"

/** 
 * print-alphabets - prints all the lowercase letters
 * Return: void 0.
 */
void print_alphabet(void){
	
	int i;
	
	for (i = 97; i < 122; i++){
		_putchar(i);
	}
	_putchar('\n');
}
