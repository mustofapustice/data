//Write a program to delete an element from a linear array.
#include <iostream>
using namespace std;

int main() {
    int n = 5; // size of array
    int arr[n] = {1, 2, 3, 4, 5}; // array with initial values

    int pos = 2; // position of element to be deleted

    // shift elements to the left to fill the gap left by the deleted element
    for(int i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    }

    // print the updated array
    cout << "Updated array: ";
    for(int i = 0; i < n-1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

