#include <stdio.h>
#include "strutils.h"

int main() {
    char str[] = "   Hello, World!   ";
    char* trimmed_str = str_trim(str);
    printf("Trimmed String: '%s'\n", trimmed_str);


    char str2[] = "Embedded Linux";
    char* reversed_str = str_reverse(str2);
    printf("Reversed String: '%s'\n", reversed_str);

    char num_str[] = "  12345  ";
    int num = str_to_int(num_str);
    printf("Converted Integer: %d\n", num);

    printf("Hello, Embedded Linux!\n");

    return 0;
}
