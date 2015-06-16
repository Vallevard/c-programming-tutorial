#include <stdio.h>
#include <time.h>

int main()
{
    time_t rawtime;
    struct tm *info;

    char *buffer;

    time(&rawtime);
    info = localtime(&rawtime);
    printf("Current local date/time: %s", asctime(info));

    strftime(buffer, -1, "%H:%M:%S", info);
    printf("%s\n", buffer);

    return 0;
}
