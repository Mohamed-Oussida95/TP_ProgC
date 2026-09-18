#include <stdio.h>

int main(void) {
    /* char */
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    /* short */
    short s = -12000;
    signed short ss = -32000;
    unsigned short us = 65000;

    /* int */
    int i = -42;
    signed int si = -100000;
    unsigned int ui = 3000000000U;

    /* long int */
    long int li = -123456789L;
    signed long int sli = -987654321L;
    unsigned long int uli = 4000000000UL;

    /* long long int */
    long long int lli = -9000000000000000000LL;
    signed long long int slli = -5000000000000000000LL;
    unsigned long long int ulli = 18000000000000000000ULL;

    /* Types flottants */
    float f = 3.14f;
    double d = 2.7182818284;
    long double ld = 1.4142135623730950488L;

    /* Affichage char */
    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n\n", uc);

    /* Affichage short */
    printf("short : %d\n", s);
    printf("signed short : %d\n", ss);
    printf("unsigned short : %u\n\n", us);

    /* Affichage int */
    printf("int : %d\n", i);
    printf("signed int : %d\n", si);
    printf("unsigned int : %u\n\n", ui);

    /* Affichage long int */
    printf("long int : %ld\n", li);
    printf("signed long int : %ld\n", sli);
    printf("unsigned long int : %lu\n\n", uli);

    /* Affichage long long int */
    printf("long long int : %lld\n", lli);
    printf("signed long long int : %lld\n", slli);
    printf("unsigned long long int : %llu\n\n", ulli);

    /* Affichage flottants */
    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}