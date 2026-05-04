#include <iostream>
using namespace std;

int main(){
    int a,b,c,sum,avg;
    cout<<"Enter 3 numbers:";
    cin>>a>>b>>c;
    sum=a+b+c;
    avg=sum/3;
    cout<<"The sum is "<<sum<<endl;
    cout<<"The average is "<<avg;
    return 0;
}