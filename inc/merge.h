#pragma once

#include "movie.h"

template<class T>
void merge(std::vector<T>& arr, int left, int mid, int right) {
    std::vector<T> tmp;
    int i = left, j = mid + 1;

    while (i <= mid && j <= right) {
        if (*arr[i] < *arr[j]) {
            tmp.push_back(arr[i++]);
        } else {
            tmp.push_back(arr[j++]);
        }
    }
    while (i <= mid)  tmp.push_back(arr[i++]);
    while (j <= right) tmp.push_back(arr[j++]);

    for (int k = 0; k < tmp.size(); ++k)
        arr[left + k] = tmp[k];
}

template<class T>
void mergeSort(std::vector<T>& arr, int left, int right) {
    if (left >= right) return;
    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

/**
 * @brief wrapper, do wywolania 
 */
template<class T>
void mergeSort(std::vector<T>& arr) {
    std::cout << "MergeSort" << std::endl;
    mergeSort(arr, 0, arr.size() - 1);
}