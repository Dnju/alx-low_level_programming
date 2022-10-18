#include <unistd.h>
#include "main.h"
/**
 *main - writes the character c to stdout
 *
 *@c: The character to print
 *
 *Return: On success 1.
 *
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	write (1, "_putchar\n", 9);
	
	return (0);

}
