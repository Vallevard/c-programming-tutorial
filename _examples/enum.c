#include <stdio.h>

int main()
{
    enum week {monday, tueday, wednesday, thursday, friday, saturday, sunday};

    enum week day = 7;

    if (day == 0)
    {
        printf("Happy Monday\n");
    }
    else if (day == 6 || 7)
    {
        printf("Enjoy the weekend\n");
    }

    return 0;
}
