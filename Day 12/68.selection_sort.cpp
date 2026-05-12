#include<iostream>
using namespace std;
void selectionSort(int nums[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex=i;  // Assume the minimum is the first element
        for(int j=i+1; j<n; j++){
            if(nums[j]<nums[minIndex]){
                minIndex=j;  // Update minIndex if a smaller element is found
            }
        }
        swap(nums[i], nums[minIndex]);  // Swap the found minimum element with the first element
    }
}
int main(){
    int arr[5]={64, 25, 12, 22, 11};
    int size=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,size);
    cout<<"Sorted array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}