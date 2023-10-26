#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the natural square root
 * Return:natural square root
 */
int sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculates the natural square roots
 * @n: number to calculate squar root
 *@i: iterate number
 *Return: natural square root
 */
int _sqrt(int n,int i)
{
	int sqrt = i * i;
	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return(_sqrt(n, i + 1));
}
 
