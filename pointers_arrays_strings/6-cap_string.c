#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: String to capitalize
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	int new_word = 1;
	char *separators = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (new_word && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';

		new_word = 0;

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				new_word = 1;
				break;
			}
		}

		i++;
	}

	return (str);
}
