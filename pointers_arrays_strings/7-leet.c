#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: String to encode
 *
 * Return: Pointer to the modified string
 */
char *leet(char *str)
{
	int i;
	int j;
	char *letters = "aeotlAEOTL";
	char *numbers = "4307143071";

	i = 0;

	while (str[i] != '\0')
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
				str[i] = numbers[j];
		}
		i++;
	}

	return (str);
}
