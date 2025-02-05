#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "sorting.h"
#include "utils.h"

int main()
{

    int32_t array1[] = {10, 2, 48, 3, 8, 3};
    int32_t array2[] = {10, 2, 48, 3, 8, 3};
    int32_t array3[] = {10, 2, 48, 3, 8, 3};
    int32_t array4[] = {10, 2, 48, 3, 8, 3};
    size_t length = 6;

    printf("\nBubble Sort\n");
    print_int32_array(array1, length);
    bubbleSort(array1, length);
    print_int32_array(array1, length);

    printf("\nMerge Sort\n");
    print_int32_array(array2, length);
    bubbleSort(array2, length);
    print_int32_array(array2, length);

    printf("Hello");
}