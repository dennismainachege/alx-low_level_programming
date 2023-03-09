#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - Returns the natural square root of a nummber
 * @n:number to calcu;ate the natural squre root
 * Return:Nutural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates natural square roots
 * @n: number to calculate the square root
 * @i: iterate number
 * Return: the natural square roots
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;
	if (sqrt > n)
		return (-1);
	if (sqrt == n )
		return (i);
	return (_sqrt(n, i + 1));
}

