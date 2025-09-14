// 24k-0631Task#6:
// A university admissions office has received thousands of student applications, each identified by
// a unique 6-digit application ID (e.g., 452913, 100234, 987654).
// The office needs to sort all application IDs in ascending order to generate a merit list quickly.
// Since the IDs are integers with a fixed number of digits, Write a program to sort the application
// IDs using appropriate and efficient sorting algorithm.
#include <iostream>
using namespace std;
int getMax(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > maxVal)
            maxVal = arr[i];
    return maxVal;
}
void countingSort(int arr[], int n, int exp) {
    int output[n]; 
    int count[10] = {0};
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}
void radixSort(int arr[], int n) {
    int maxVal = getMax(arr, n);
    for (int exp = 1; maxVal / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}
int main() {
    int arr[] = {452913, 100234, 987654, 234567, 345678, 111111};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Application IDs: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    radixSort(arr, n);
    cout << "Sorted Application IDs:   ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}
