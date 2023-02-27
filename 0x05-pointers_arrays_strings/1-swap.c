#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 * @a: The first integer swapped.
 * @b: The second integer swapped.
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
/* function that swaps values of integers.*/
{
int temp = *a;
*a = *b;
*b = temp;
}

