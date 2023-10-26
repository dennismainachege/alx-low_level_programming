#include "main.h"
#include<stdio.h>

int check_prime(int n, inti);

/**
 * is_prime_number - returns if a number is prime number
 * @n: the number to be checked
 * Returns: integer value
 */
int is_prime_number(int n)
{
	return(check_prime(n, 1));
}
/**
 * check_prime - checks if number is prime
 * @n: number to be checked 
 * @i: the interation time
 * Return: 1 for prime of composite
 */
int check_prime(intn, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % 1 == 0 && i > 1)
	{
		return (0);
	}
return (check_prime(n, i +1));
}
