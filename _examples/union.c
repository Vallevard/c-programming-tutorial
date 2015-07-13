#include <stdio.h>

union WhichType
{
    int a;
    float b;
    char *c;
};

int main()
{
    union WhichType t;

    t.a = 5;
    printf("%i\n", t.a);
    t.b = 8.5;
    printf("%4.2f\n", t.b);
    t.c = "b";
    printf("%c\n", t.c);

    return 0;
}
