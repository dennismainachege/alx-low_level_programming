#include<stdio.h>
/**
 * main - A program to shows the values of different computer types 
 *
 * return: 0 (success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("size of char:%lu byte(s)\n", (unsigned long)sizeof(char));
printf("size of int:%lu byte(s)\n", (unsigned long)sizeof(int));
printf("size of long int:%lu byte(s)\n", (unsigned long)sizeof(long int));
printf("size oflong  long int:%lu byte(s)\n", (unsigned long)sizeof(long long int));
printf("size of float:%lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
