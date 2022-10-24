#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: the string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	if (str)
	{
		do {
			if (*str)
				putchar(*str++);
		} while (*str++);
		putchar('\n');
	}
}
