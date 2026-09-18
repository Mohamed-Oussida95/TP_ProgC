#include <stdio.h>

static void afficher_binaire(unsigned int nombre)
{
    int position = 0;
    unsigned int chiffres[sizeof(nombre) * 8];

    if (nombre == 0) {
        printf("0");
        return;
    }

    while (nombre > 0) {
        chiffres[position++] = nombre % 2;
        nombre /= 2;
    }

    for (int i = position - 1; i >= 0; i--) {
        printf("%u", chiffres[i]);
    }
}

int main(void)
{
    const unsigned int nombres[] = {0, 4096, 65536, 65535, 1024};
    const size_t nombre_de_valeurs = sizeof(nombres) / sizeof(nombres[0]);

    for (size_t i = 0; i < nombre_de_valeurs; i++) {
        printf("%u en binaire : ", nombres[i]);
        afficher_binaire(nombres[i]);
        printf("\n");
    }

    return 0;
}