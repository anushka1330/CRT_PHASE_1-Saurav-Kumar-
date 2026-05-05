#include<iostream>
using namespace std;
int add(int a,int b=10){
    return a+b;
}
int main(){
    add(5);
    cout<<add(5)<<endl;
    return 0;
}