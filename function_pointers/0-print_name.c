#include <stdio.h>
#include "function_pointers.h"

void print_name(char *name, void (*f)(char *)) {
    if (name != NULL && f != NULL) {
        f(name);
    }
}

void print_lowercase(char *str) {
    while (*str) {
        printf("%c", *str);
        str++;
    }
    printf("\n");
}
