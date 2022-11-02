#include <stddef.h>
/**
*_strpbrk - locate first matching character
*@s: string to search
*@accept: set of characters to match
*Return: pointer to matching character or NULL if not found
*/
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (NULL);
}
