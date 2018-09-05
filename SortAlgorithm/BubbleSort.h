//
// Created by moasm on 9/4/18.
//

#ifndef TESTSORT_BUBBLESORT_H
#define TESTSORT_BUBBLESORT_H

#include <iostream>
#include <string>
using namespace std;

#include "AbsSort.h"

//template <typename T>
class BubbleSort : public AbsSort {

public:
//    void sort(T arr[], int size);

    static void sort(int arr[], int size);
};


#endif //TESTSORT_BUBBLESORT_H
