//Write a program to sort an array using marge sort algorithm.
#include <iostream>
using namespace std;

void merge(int arr[], int left[], int leftSize, int right[], int rightSize) {
    int i = 0, j = 0, k = 0;

    while(i < leftSize && j < rightSize) {
        if(left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while(i < leftSize) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while(j < rightSize) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int size) {
    if(size < 2) {
        return;
    }

    int mid = size / 2;
    int left[mid], right[size-mid];

    for(int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }

    for(int i = mid; i < size; i++) {
        right[i-mid] = arr[i];
    }

    mergeSort(left, mid);
    mergeSort(right, size-mid);
    merge(arr, left, mid, right, size-mid);
}

int main() {
    int n = 5; // size of array
    int arr[n] = {5, 2, 4, 6, 1}; // array to be sorted

    mergeSort(arr, n);

    // print the sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

