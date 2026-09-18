#include <stdio.h>

int main(void) {
    int compteur = 5;

    if (compteur <= 0 || compteur >= 10) {
        return 1;
    }

    int i = 0;
    while (i < compteur) {
        int j = 0;
        while (1) {
            if (j > i) {
                break; /* Fin de la ligne */
            }

            if (j == 0 || j == i || i == compteur - 1) {
                printf("* ");
                j++;
                continue;
            }

            printf("# ");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}