#include "main.h"

/**
 *  * print_alphabet - prints the alphabets
 *   * Description: a function that prints letters in lower case
 *    * Return: 0
*/
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
