#include <stdio.h>
#include <ctype.h>

int main()
{
    int counter = 0;
    char stringupper[] = "hello, world\n";

    while (stringupper[counter])
    {
        char mychar = stringupper[counter];
        putchar(toupper(mychar));
        counter++;
    }

    return 0;
}
