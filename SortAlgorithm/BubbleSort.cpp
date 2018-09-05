//
// Created by moasm on 9/4/18.
//

#include "BubbleSort.h"

//template <typename T>
//void BubbleSort<T>::sort(T arr[], int size) {
//    cout << arr << " | " << size << endl;
//}

void BubbleSort::sort(int arr[], int size) {
    if (NULL == arr || size < 1) {
        return;
    }

    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[j] < arr[i]) {
                swap(arr[i],  arr[j]);
                // DEBUG
                printArray(arr, size);
            }
        }
    }

}
