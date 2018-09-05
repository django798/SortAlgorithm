//
// Created by moasm on 9/5/18.
//

#include "SelectSort.h"


void SelectSort::sort(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            swap(arr[i], arr[min_index]);
            // DEBUG
            printArray(arr, size);
        }
    }
}