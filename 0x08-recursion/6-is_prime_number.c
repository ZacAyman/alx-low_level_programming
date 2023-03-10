#include "main.h"
int prime_number_check(int n, int i);
/**
 * is_prime_number - a function that checks if a number
 * is a prime number or not
 * @n: a number input
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	return (prime_number_check(n, 2));
}
/**
 * prime_number_check - a function that checks if a number is
 * a prime number or not
 * @n: a number input
 * @i: a nubmer input
 * Return: 1 if the number is prime, or 0 otherwise
 */
int prime_number_check(int n, int i)
{
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_number_check(n, i + 1));
}
