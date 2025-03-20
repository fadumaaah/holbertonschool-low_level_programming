#include "main.h"

/**
 * is_prime_number - check if input integer is a prime number
 *
 * @n: number to check is prime
 *
 * Return: 1 if prime number, else return 0
 *
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (check_prime(n, 1));
}

/**
 * check_prime - check if guess is prime number
 *
 * @n: number to check if is prime
 * @guess: number to check if it is divisible by
 *
 * Return: 1 if prime number, else return 0
 */

int check_prime(int n, int guess)
{
	if (guess == n)
		return (1);

	if (n % guess == 0)
		return (0);

	return (check_prime(n, guess + 1));
}
