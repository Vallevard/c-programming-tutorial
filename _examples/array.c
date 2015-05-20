#include <stdio.h>

int main()
{
    char *names[5];
    names[0] = "Andrew";
    names[1] = "Mark";
    names[2] = "Chris";
    names[3] = "Tom";
    names[4] = "Daniel";
    printf("%s\n", names[3]);

    char *names2[5] = {"Darren", "Bill", "Richard", "Kyle", "Lee"};
    printf("%s\n", names2[0]);

    return 0;
}
