//
// Created by moasm on 9/5/18.
//

#ifndef TESTSORT_ABSSORT_H
#define TESTSORT_ABSSORT_H

#include <iostream>
using namespace std;

class AbsSort {

public:
    static int* getRndArray(int size, int min, int max) {
        int *arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = rand()%(max-min+1) + min;
        }
        return arr;
    }

    static void printArray(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << ", ";
        }
        cout << endl;
    }

    static void swap(int &a, int &b) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }

};


#endif //TESTSORT_ABSSORT_H
