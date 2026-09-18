#include <stdio.h>

int main(void) {
    int somme = 0;
    int dernier_nombre = 0;

    for (int n = 1; n <= 1000; n++) {
        /* Si divisible par 11, passer immédiatement au suivant */
        if (n % 11 == 0) {
            continue;
        }

        /* Si divisible par 5 ou par 7, ajouter à la somme */
        if (n % 5 == 0 || n % 7 == 0) {
            somme += n;
            dernier_nombre = n;
        }

        /* Arrêt immédiat dès que la somme dépasse 5000 */
        if (somme > 5000) {
            break;
        }
    }

    printf("Somme finale : %d (interrompue au nombre %d)\n", somme, dernier_nombre);

    return 0;
}