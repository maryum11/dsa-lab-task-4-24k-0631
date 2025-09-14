// Given an array of strings arr[]. Sort given strings using Bubble Sort and display the
// sorted array.
// Input: string arr[] = {"banana", "apple", "cherry", "date", "grape"};
// Output: apple banana cherry date grape
#include<iostream>
using namespace std;
void bubblesort(string arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                string temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }
}
int main() {
    string arr[] = {"banana", "apple", "cherry", "date", "grape"};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    bubblesort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}