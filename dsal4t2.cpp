// 24k-0631 Task#2: Let arr[9] = { 20, 12, 15, 2, 10, 1, 13, 9, 5} now sort the array in such a way that
// maximum element must be at middle of the array and rest of array must be sorted in ascending
// order do this using insertion sort.
// Sorted array: 1 2 5 9 20 10 12 13 15
#include<iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main() {
    int arr[9] = {20, 12, 15, 2, 10, 1, 13, 9, 5};
    int n = 9;
    cout << "Original array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    insertionSort(arr, n);
    int maxElement = arr[n - 1];   
    for (int i = n - 1; i > n / 2; i--) {
        arr[i] = arr[i - 1];
    }
    arr[n / 2] = maxElement;
    cout << "Modified array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}