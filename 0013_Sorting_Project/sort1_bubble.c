#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

// Bubble Sort implementation
void bubbleSort(int32_t *array, size_t length)
{
    bool swap = false;

    do
    {
        swap = false;
        for (int i = 0; i < length - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                // wenn größer swap
                int32_t temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}