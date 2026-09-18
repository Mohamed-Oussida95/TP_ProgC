#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int a = 16;
    int b = 3;

    /* Opérateurs arithmétiques */
    printf("Addition (a + b) : %d\n", a + b);
    printf("Soustraction (a - b) : %d\n", a - b);
    printf("Multiplication (a * b) : %d\n", a * b);
    printf("Division entière (a / b) : %d\n", a / b);
    printf("Modulo (a %% b) : %d\n\n", a % b);

    /* Opérateurs de comparaison */
    bool est_egal = (a == b);
    bool est_superieur = (a > b);

    /* Affichage numérique (0 ou 1) et textuel (true ou false) */
    printf("a == b : %d (%s)\n", est_egal, est_egal ? "true" : "false");
    printf("a > b : %d (%s)\n", est_superieur, est_superieur ? "true" : "false");

    return 0;
}