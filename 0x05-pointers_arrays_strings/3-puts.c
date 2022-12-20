#include "main.h"

/**
 * _puts - This function prints a string, followed by a newline
 * to the standard out
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
