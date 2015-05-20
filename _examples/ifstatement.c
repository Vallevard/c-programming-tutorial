#include <stdio.h>

int main()
{
    char *animal = "Cat";
    
    if (animal == "Dog")
        printf("Animal is a dog\n");
    else if (animal == "Cat")
        printf("Animal is a cat\n");
    else
        printf("Some other animal\n");
    
    return 0;
}
