#include <stdio.h>

void stat()
{
    int var = 1;
    static int svar = 1;

    printf("var = %d, static = %d\n", var, svar);
    var++;
    svar++;
}

int main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        stat();
    }

    return 0;
}
