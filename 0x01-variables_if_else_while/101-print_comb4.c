#include<stdio.h>

/**
 * main - Entry Point
 *
 * Description: program that prints all possible different
 * combinations of three digits
 *
 * Return: Always 0 ( success )
*/

int main(void)
{
int first = 0;
int second, third;

while (first <= 9)
{
second = 0;
while (second <= 9)
{
third = 0;
while (third <= 9)
{
if (first != second &&
first < second &&
second != third &&
second < third)
{
putchar(first + 48);
putchar(second + 48);
putchar(third + 48);
if (first + second + third != 24)
{
putchar(',');
putchar(' ');
}
}
++third;
}
++second;
}
++first;
}
putchar('\n');
return (0);
}
