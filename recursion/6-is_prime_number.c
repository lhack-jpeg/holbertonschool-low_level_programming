#include <stdio.h>
#include "main.h"
/**
 * rec_prime_number - runs throughs all numbers 1 to n
 * checks to see if the modulo is 0
 * @x: the starting number
 * @n: the number being checked
 * Return: 1 if prime, 0 otherwise
 */

int rec_prime_number(int x, int n)
{
	if (x == n)
		return (1);
	if (!(n % x))
		return (0);
	return (rec_prime_number((x + 1), n));
}

/**
 * is_prime_number - checks to see if integer is prime number
 * @n: the int being check
 *Return: 1 if prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (rec_prime_number(2, n));
}
