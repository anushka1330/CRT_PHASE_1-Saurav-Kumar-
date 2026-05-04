#include<iostream>
using namespace std;
int main(){
    //print num from 1 to 10 divisible by 2
    for(int i=1;i<=10;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    return 0;
}