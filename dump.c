#include <stdio.h>

void dump(void *p, int n) {
    unsigned char *p1 = p;
    while (n--) {
        printf("%p - %02x\n", p1, *p1);
        p1++;
    }
}

int main(void) {
    int i = 10000;
    long l = 10000;
    short s = 10000;
    char c1 = 'a';
    char c2 = 97;
    char p[] = "7509";

    dump(&i, sizeof(i));
    dump(&l, sizeof(l));
    dump(&s, sizeof(s));
    dump(&c1, sizeof(c1));
    dump(&c2, sizeof(c2));
    dump(p, sizeof(p));

    
    char a = 'A';
    char espaco = ' ';
    char linha = '\n';
    char cifrao = '$';

    printf("'A' é %d\n", a);
    printf("' '  é %d\n", espaco);
    printf("'\\n' é %d\n", linha);
    printf("'$' é %d\n", cifrao);

    return 0;
}