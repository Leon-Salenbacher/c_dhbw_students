#include <stdio.h>
#include <stdarg.h>

// Function for calculating the sum of a variable number of arguments
int calcSumVariadicFunction(int count, ...)
{
    va_list args;
    int tempSum = 0;

    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        tempSum += va_arg(args, int);
    }

    va_end(args);

    return tempSum;
}

int main()
{

    printf("\nSUM OF 1,2,3 --> %d\n", calcSumVariadicFunction(3, 1, 2, 3));
    printf("\nSUM OF ... --> %d\n", calcSumVariadicFunction(6, 10, 20, 30, 4, 5, 6));

    return 0;
}