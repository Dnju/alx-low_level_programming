#include "main.h"
/**
*print_alphabet_x10 - a function that prints 10 times the alphabet
*
*Return: x10 a-z
*/
void print_alphabet_x10(void)

{
	int count = 0;
	char x;

	while (count++ <= 9)

	{

        		for (x = 'a'; x <= 'z'; x++)
	        		_putchar(x);

			_putchar('\n');

	}

}
