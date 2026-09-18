#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    const int a = 16;
    const int b = 3;
    const bool egal = a == b;
    const bool superieur = a > b;

    printf("Addition : %d\n", a + b);
    printf("Soustraction : %d\n", a - b);
    printf("Multiplication : %d\n", a * b);
    printf("Division entiere : %d\n", a / b);
    printf("Modulo : %d\n", a % b);
    printf("a == b : %s\n", egal ? "true" : "false");
    printf("a > b : %s\n", superieur ? "true" : "false");

    return 0;
}
