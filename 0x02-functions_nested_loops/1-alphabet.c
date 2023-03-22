#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	    char letter = 'a';
    while (letter <= 'z') {
        putchar(letter);
        letter++;
    }
    putchar('\n');
   return(0);
}
