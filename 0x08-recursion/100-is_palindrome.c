#include "main.h"
int str_len(char *s);
int palindrome_check(char *s, int start, int end);
/**
 * is_palindrome - a function that returns 1 if a string
 * is a palindrome and 0 if not
 * @s: a string input
 * Return: 1 if the string is palindrom, or 0 otherwise
 */
int is_palindrome(char *s)
{
	if (!*s)
		return (0);
	if (!*(s + 1))
		return (1);
	return (palindrome_check(s, 0, str_len(s) - 1));
}
/**
 * str_len - a function that returns the length of a string
 * @s: a string input
 * Return: the length of the string
 */
int str_len(char *s)
{
	if (!*(s + 1))
		return (1);
	return (1 + str_len(s + 1));
}
/**
 * palindrome_check - a function that checks if a string
 * is a palindrome or not
 * @s: a string input
 * @start: a number input
 * @end: a number input
 * Return: 1 if the string is palindrome, or 0 otherwise
 */
int palindrome_check(char *s, int start, int end)
{
	if (s[start] != s[end])
		return (0);
	if (start > end)
		return (1);
	return (palindrome_check(s, start + 1, end - 1));
}
