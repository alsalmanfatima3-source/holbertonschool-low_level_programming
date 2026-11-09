#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: String to convert
 *
 * Return: The converted integer, or 0 if no digits are found
 */
int _atoi(char *s)
{
	unsigned int number = 0;
	int sign = 1;

	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			sign = -sign;

		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		number = number * 10 + (*s - '0');
		s++;
	}

	if (sign < 0)
		number = 0u - number;

	return ((int)number);
}
