#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=a;
    int &c=a; // reference variable
    c=10;
    cout<<a<<endl; 
    return 0;

}