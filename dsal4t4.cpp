// 24k-0631 Task#4: Given an unsorted array that may contain duplicates. Write a function that returns true
// if the array contains duplicates.
#include<iostream>
using namepsace std;
bool duplicate(int arr,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            return true;
        }
        else{
            return false;
        }
    }
}