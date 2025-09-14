// 24k-0631 Task#5
// Sort birth years: 2022 first, then 2023, then 2024.
#include <iostream>
using namespace std;
void sortYears(int arr[], int n) {
    int count2022 = 0, count2023 = 0, count2024 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 2022) count2022++;
        else if (arr[i] == 2023) count2023++;
        else if (arr[i] == 2024) count2024++;
    }
    int index = 0;
    while (count2022--) arr[index++] = 2022;
    while (count2023--) arr[index++] = 2023;
    while (count2024--) arr[index++] = 2024;
}
int main() {
    int arr[] = {2022, 2023, 2024, 2022, 2023, 2024};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    sortYears(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}
