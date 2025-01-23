#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lenght = 3;
    int memoryReg = lenght * sizeof(int);

    printf("\nsizeof(int): %d\n", sizeof(int));
    printf("memoryReg: %d\n", memoryReg);

    int *arr = (int*)malloc(memoryReg);

    for (int i = 0; i < lenght; i++)
    {
        arr[i] = i;
    }
    
    for (int i = 0; i < lenght; i++)
    {
        printf("adress off arr[%d]: %p\n", i, &arr[i]);
    }
    
    free(arr);
    arr = NULL;

    return 0;
}