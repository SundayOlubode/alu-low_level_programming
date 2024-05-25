#include "main.h"
#include "_putchar.c"
#include "2-print_alphabet_x10.c"
#include "3-islower.c"
#include "7-print_last_digit.c"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
