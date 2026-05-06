#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    while(true){
        cout<<"Enter a number (0 to stop): ";
        cin>>num;
        if(num==0){
            break;
        }
        sum+=num;
    }
    cout<<"Sum of entered numbers: "<<sum<<endl;
    return 0;
}