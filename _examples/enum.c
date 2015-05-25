#include <stdio.h>

int main()
{
    enum week {monday = 0, tueday, wednesday, thursday, friday};
    
    enum week day = monday;
    
    if (day == monday)
    {
        printf("Happy Monday\n");
    }
    
    return 0;
}
