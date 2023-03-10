#include "main.h"
/**
 * _puts_recursion - a function that prints a string,
 * followed by a new line
 * @s: a string input
 * Return: always 0 (success)
 */
void _puts_recursion(char *s)
{
	if (!*s)
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
