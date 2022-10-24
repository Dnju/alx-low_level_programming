#include "main.h"

/**
*print_most_numbers - Print the numbers since 0 up to 9
*
*Description: Prints the numbers excluding 2 and 4
*
*Return: The numbers since 0 up to 9
*/
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
		if (a != 50)
		{
			if (a != 52)
			{
				_putchar(a);

			}
		}

	_putchar('\n');
}
