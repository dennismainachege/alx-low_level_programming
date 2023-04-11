#include "main.h"
/**
 * flip_bits - Returns the number of bits you would need to flip to get from
 *             one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits required to flip from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int num_bits_flipped = 0;

while (xor_result > 0)
{
num_bits_flipped += xor_result & 1;
xor_result >>= 1;
}

return (num_bits_flipped);
}

