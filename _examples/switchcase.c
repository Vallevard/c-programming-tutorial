#include <stdio.h>

int main()
{
    int choice = 2;

    switch (choice)
    {
        case 1:
            printf("Choice equals 1\n");
            break;
        case 2:
            printf("Choice equals 2\n");
            break;
        default:
            printf("You chose something else\n");
    }

    return 0;
}
