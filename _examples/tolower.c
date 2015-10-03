#include <stdio.h>
#include <ctype.h>

int main()
{
    int counter = 0;
    char stringlower[] = "HELLO, WORLD\n";

    while (stringlower[counter])
    {
        char mychar = stringlower[counter];
        putchar(tolower(mychar));
        counter++;
    }

    return 0;
}
