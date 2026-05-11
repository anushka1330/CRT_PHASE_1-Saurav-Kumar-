#include<iostream>
using namespace std;
int BinarySearch(int nums[], int n, int target){
    int left=0, right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]<target){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return -1;  //Element not found
}
    
int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=3;
    int result=BinarySearch(arr,size,target);
    if(result!=-1){
        cout<<"Element found at index: "<<result<<endl;
    }else{
        cout<<"Element not found in the array."<<endl;
    }
}