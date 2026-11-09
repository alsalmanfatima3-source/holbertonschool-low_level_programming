#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: String to print
 */
void puts_half(char *str)
{
	int length = 0;
	int start;
	int i;

	while (str[length] != '\0')
		length++;

	start = length / 2;

	if (length % 2 != 0)
		start++;

	for (i = start; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
