#include <stdio.h>

void output_sum (int sum);

int add_numbers (int a, int b)
{
    return a + b;
}

int subtract_numbers (int a, int b)
{
    return a - b;
}

int main()
{   
    int sum;
    
    sum = add_numbers(45, 74);
    output_sum(sum);
    
    sum = subtract_numbers(66, 12);
    output_sum(sum);
    
    return 0;
}

void output_sum (int sum)
{
    printf("%i\n", sum);
}
