#include "main.h"

/**
 * _strstr - Locates a substring in a string
 * @haystack: String to search in
 * @needle: Substring to find
 *
 * Return: Pointer to substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;

		while (needle[j] != '\0' &&
		       haystack[i + j] != '\0' &&
		       haystack[i + j] == needle[j])
		{
			j++;
		}

		if (needle[j] == '\0')
			return (haystack + i);
	}

	return (0);
}
