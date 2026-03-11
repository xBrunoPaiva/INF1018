#include <ctype.h>
#include <stdio.h>

int valor_digito(char c) {
    if (isdigit(c))
        return c - '0';
    else if (c >= 'a' && c <= 'z')
        return c - 'a' + 10;
    else if (c >= 'A' && c <= 'Z')
        return c - 'A' + 10;
    else
        return -1;
}

int string2num(char *s, int base) {
    int a = 0;
    int d;

    for (; *s; s++) {
        d = valor_digito(*s);

        if (d < 0 || d >= base) {
            printf("Digito invalido\n");
            return -1;
        }

        a = a * base + d;
    }

    return a;
}

int main(void) {
    printf("%d\n", string2num("777", 8));
    printf("%d\n", string2num("777", 10));

    printf("%d\n", string2num("1a", 16));
    printf("%d\n", string2num("a09b", 16));
    printf("%d\n", string2num("z09b", 36));

    return 0;
}