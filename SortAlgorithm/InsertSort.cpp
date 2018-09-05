//
// Created by moasm on 9/5/18.
//

#include "InsertSort.h"

void InsertSort::sort(int *arr, int size) {


    for (int i = 1; i < size; i++) {
        int cur = i;
        for (int j = cur-1; j >= 0; j--) {
            if (arr[cur] < arr[j]) {
                swap(arr[cur], arr[j]);
                cur = j;
            } else {
                break; // !
            }
        }
//        // DEBUG
//        printArray(arr, size);
    }
}


void InsertSort::sort2(int *arr, int size) {


    for (int i = 1; i < size; i++) {
        int val = arr[i];
        int j = i-1;
        for (; j >= 0; j--) {
            if (val < arr[j]) {
                arr[j+1] = arr[j];
            } else {
                break; // !
            }
        }
        if (j+1 >= 0 && j != i-1) {
            arr[j+1] = val;
        }
//        // DEBUG
//        printArray(arr, size);
    }
}

void InsertSort::sort3(int *arr, int size) {


    for (int i = 1; i < size; i++) {
        int val = arr[i];
        int j = i;
        for (; j > 0; j--) {
            if (val > arr[j-1]) {
                break;
            } else {
                arr[j] = arr[j-1];
            }
        }
        if (j != i && j >=0) {
            arr[j] = val;
        }
//        // DEBUG
//        printArray(arr, size);
    }
}