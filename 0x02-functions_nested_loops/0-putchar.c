#include 'main.h'
/**
 *main - prints the "putchar" from a character array.
 *
 *Return: 0 on success.
 */
int main(void)
{

char c[] = "Holberton";
int x;

for (x = 0; x < 9; x++)
{
           _putchar(c[x]);							}
                         _putchar('\n');
	
 return (0);
