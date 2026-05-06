#include<iostream>
using namespace std;
int a=10;
int main(){
    int integer;
    double c;
    cout<<"Enter an integer: ";
    cin>>integer;
    c=(double)a/integer; // typecasting a to double before division
    cout<<"Result of division: "<<c<<endl;
    return 0;
}