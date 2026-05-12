#include<iostream>
using namespace std;
int BubbleSort(int nums[], int n){
    for(int i=0; i<n-1; i++){
        bool flag=false;  // To check if any swapping occurs
        for(int j=0; j<n-i-1; j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j], nums[j+1]);
                flag=true;  // Set flag to true if swapping occurs
            }
        }
        if(!flag)  // If no swapping occurred, array is sorted
            break;
    }
}
int main(){
    int arr[5]={64, 34, 25, 12, 22};
    int size=sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,size);
    cout<<"Sorted array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}