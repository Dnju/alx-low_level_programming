#include "main.h"
/**
*_memset - Entry point
*@s: pointed destination
*@b: constant byte
*@n: bytes
*Return: Always 0 (Success)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
