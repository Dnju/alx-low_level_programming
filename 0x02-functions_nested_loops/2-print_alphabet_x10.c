#include "main.h"
/**
*print_alphabet_x10 - a function that prints 10 times the alphabet
*
*Return: x10 a-z
*/
void print_alphabet_x10(void);

{
	int x, xy;

	xy=0;

	while (xy < 10)
	
	{
	
			for (x = 'a'; x <= 'z'; x++;)

			{

			_putchar(x);

			}												 		   
			xy++;

		       _putchar('\n');

	}

}
