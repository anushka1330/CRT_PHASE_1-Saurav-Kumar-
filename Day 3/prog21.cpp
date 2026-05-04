#include<iostream>
using namespace std;
int main(){
    //factorial of n using for loop 
    int n,fact=1;
    cout<<"Enter a number:";   
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<n<<" factorial is "<<fact;
    return 0;
}