#include <stdio.h>

int x = 5;

int main()
{
    int y = 8;
    
    printf("Global: %i\n", x);
    printf("Local: %i\n", y);
    
    return 0;
}
