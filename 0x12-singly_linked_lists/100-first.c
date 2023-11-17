#include <stdio.h>

void print_string(void) __attribute__ ((constructor));

/**
 *print_string - prints a msg before the main
 */

void print_string(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
