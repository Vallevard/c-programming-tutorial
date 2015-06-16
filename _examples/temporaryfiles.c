#include <stdio.h>

int main(int argc, char *argv[])
{
    char template[] = "/tmp/testXXXXXX";
    int filedes = -1;

    filedes = mkstemp(template);

    printf("%s\n", template);

    unlink(template);

    return 0;
}
