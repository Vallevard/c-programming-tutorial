#include <stdio.h>

struct hits
{
    char *name;
    char *address;
    char *postcode;
} andrew, george;

int main()
{
    andrew.name = "Andrew Steele";
    andrew.address = "157 Long Lane";
    andrew.postcode = "MT4 9FD";

    george.name = "George Tomkinson";
    george.address = "63 Fir Avenue";
    george.postcode = "FF4 12JH";

    printf("%s\n", andrew.name);
    printf("%s\n", george.name);

    return 0;
}
