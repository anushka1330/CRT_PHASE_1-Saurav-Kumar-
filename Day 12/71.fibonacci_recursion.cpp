#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1||n==2){
        return 1;  // Base case: F(1) = 1, F(2) = 1
    }
    return fibo(n-1) + fibo(n-2);  // Recursive case: F(n) = F(n-1) + F(n-2)
}
int main(){
    int n=10;  
    cout<<"The "<<n<<"th Fibonacci number is: "<<fibo(n)<<endl;
    return 0;
}