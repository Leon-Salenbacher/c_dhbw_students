#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

// Merge Sort implementation
void mergeSort(int32_t *array, size_t length)
{
    if (length <= 1)
    {
        return;
    }
    // create new arrays
    int mid = length / 2;
    size_t leftLength = mid;
    size_t rightLength = length - mid;
    int32_t *left = (int32_t *)malloc(sizeof(int32_t) * leftLength);
    int32_t *right = (int32_t *)malloc(sizeof(int32_t) * rightLength);

    // split array
    for (int i = 0; i < leftLength; i++)
    {
        left[i] = array[i];
        right[i] = array[leftLength + i];
    }

    // do merge again until only 1 element is in
    mergeSort(left, leftLength);
    mergeSort(right, rightLength);

    // merge arrays back to gether
    int rightCounter = 0;
    int leftCounter = 0;
    for (int i = 0; i < length; i++)
    {
        if (left[leftCounter] >= right[rightCounter])
        {
            array[i] = right[rightCounter];
            rightCounter++;
        }
        else
        {
            array[i] = left[leftCounter];
            leftCounter++;
        }
    }
}
