include <unistd>
include "main.h"
/**
*_putchar -writes character c to stdout
*@c:The character to print
*Return:On success 1.
*
*On error,-1 is returned,and errno is set appropritely
*/
int _putchtar(char c)
{
	return (write(1, &c, 1));
}