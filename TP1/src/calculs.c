
#include <stdio.h>

int main(void)
{
    const int num1 = 16;
    const int num2 = 3;
    const char op = '+';

    printf("%d %c %d = ", num1, op, num2);
    switch (op) {
    case '+':
        printf("%d\n", num1 + num2);
        break;
    case '-':
        printf("%d\n", num1 - num2);
        break;
    case '*':
        printf("%d\n", num1 * num2);
        break;
    case '/':
        if (num2 == 0) {
            fprintf(stderr, "Erreur : division par zero.\n");
            return 1;
        }
        printf("%d\n", num1 / num2);
        break;
    case '%':
        if (num2 == 0) {
            fprintf(stderr, "Erreur : modulo par zero.\n");
            return 1;
        }
        printf("%d\n", num1 % num2);
        break;
    case '&':
        printf("%d\n", num1 & num2);
        break;
    case '|':
        printf("%d\n", num1 | num2);
        break;
    case '~':
        printf("%d\n", ~num1);
        break;
    default:
        fprintf(stderr, "Erreur : operateur inconnu '%c'.\n", op);
        return 1;
    }

    return 0;
}
