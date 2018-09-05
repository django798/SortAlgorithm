#include <iostream>
#include <cstdlib>
#include "test.h"

#include "SortAlgorithm/BubbleSort.h"
#include "SortAlgorithm/SelectSort.h"
#include "SortAlgorithm/InsertSort.h"

void print(string str) {
    cout << str << endl;
}



int main() {
    int size = 10;
//    {
//        int *arr = AbsSort::getRndArray(size, 1, 10);
//        AbsSort::printArray(arr, size);
//        BubbleSort::sort(arr, size);
//        AbsSort::printArray(arr, size);
//        delete[] arr;
//    }
//    cout << "---------------------------\n";
//    {
//        int *arr = AbsSort::getRndArray(size, 1, 10);
//        AbsSort::printArray(arr, size);
//        SelectSort::sort(arr, size);
//        AbsSort::printArray(arr, size);
//        delete[] arr;
//    }
    cout << "---------------------------\n";
    {
        int *arr = AbsSort::getRndArray(size, 1, 10);
        AbsSort::printArray(arr, size);
        InsertSort::sort(arr, size);
        InsertSort::sort2(arr, size);
        InsertSort::sort3(arr, size);
        AbsSort::printArray(arr, size);
        delete[] arr;
    }
    return 0;
}