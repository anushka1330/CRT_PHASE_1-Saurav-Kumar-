#include<iostream>
using namespace std;
int sumOfDigits(int n){
    if(n==0){
        return 0;  // Base case: sum of digits of 0 is 0
    }
    return (n%10) + sumOfDigits(n/10);  // Recursive case: add last digit to sum of remaining digits
}
int main(){
    int num=12345;
    cout<<"The sum of digits of "<<num<<" is: "<<sumOfDigits(num)<<endl;
    return 0;
}