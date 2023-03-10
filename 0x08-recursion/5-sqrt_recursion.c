#include "main.h"
int recursive_sqrt(int n, int i);
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 * @n: a number input
 * Return: the square root of a number, or -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (recursive_sqrt(n, 0));
}
/**
 * recursive_sqrt - a function that recursively finds the
 * square root of a number
 * @n: a number input
 * @i: a number input
 * Return: the square root of number, or -1 otherwise
 */
int recursive_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (recursive_sqrt(n, i + 1));
}
