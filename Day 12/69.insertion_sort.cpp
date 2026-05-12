#include<iostream>
using namespace std;
void InsertionSort(int nums[], int n){
    for(int i=1; i<n; i++){
        int key=nums[i];  // The current element to be compared
        int j=i-1;  // The index of the last sorted element
        while(j>=0 && nums[j]>key){
            nums[j+1]=nums[j];  // Shift elements greater than key to the right
            j--;
        }
        nums[j+1]=key;  // Place the key in its correct position
    }
}   
int main(){
    int arr[5]={12, 11, 13, 5, 6};
    int size=sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr,size);
    cout<<"Sorted array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}