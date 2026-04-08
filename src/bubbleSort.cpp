#include "../inc/bubbleSort.h"

void bubbleSort(std::vector<int>& arr) {
    int rozmr = arr.size();
    for (int i = 0; i < rozmr-1; ++i) {
        for (int j = 0; j < rozmr-i-1; ++j) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
            }
        }
    }
}