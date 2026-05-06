#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a and b";
    cin>>a>>b;
    int max = (a > b) ? a : b;
    cout << "Largest: " << max;
    return 0;
}