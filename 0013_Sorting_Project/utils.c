#ifndef UTILS_H
#define UTILS_H

#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

void print_int32_array(const int32_t *array, const size_t length)
{
    for (size_t i = 0; i < length - 1; i++)
    {
        printf("%d, ", array[i]);
    }

    printf("%d\n", array[length - 1]);
}

#endif /* UTILS_H */
