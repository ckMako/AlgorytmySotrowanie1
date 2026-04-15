#pragma once

#include "movie.h"

template<class T>
int partition(std::vector<T>& arr, int left, int right) {
    T pivot = arr[right];
    int i = left - 1;

    for (int j = left; j < right; ++j) {
        if (*arr[j] < *pivot) {
            ++i;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[right]);
    return i + 1;
}

template<class T>
void quickSort(std::vector<T>& arr, int left, int right) {
    if (left >= right) return;
    int pivotIdx = partition(arr, left, right);
    quickSort(arr, left, pivotIdx - 1);
    quickSort(arr, pivotIdx + 1, right);
}

// wrapper
template<class T>
void quickSort(std::vector<T>& arr) {
    std::cout << "QuickSort" << std::endl;
    quickSort(arr, 0, arr.size() - 1);
}