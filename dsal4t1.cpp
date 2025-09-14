// 24k-0631 Task#1 Write a Program that ask user to enter 10 elements and finds the 4 minimum elements
// from given array using selection Sort.
#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
for(int i=0;i<n-1;i++){
    int minidx=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minidx]){
            minidx=j;
        }
    } 
    int temp=arr[i];
    arr[i]=arr[minidx];
    arr[minidx]=temp;
}
}
int main(){
     int arr[10];
    cout << "Enter 10 elements: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    selectionsort(arr, 10);
    cout << "The 4 minimum elements are: ";
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
}