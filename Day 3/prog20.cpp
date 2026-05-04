#include<iostream>
using namespace std;
int main(){
    //to print numbers from 1 to 10 divisible by 2 using while loop
    int i=1;                                                                                     
           while(i<=10){
        if(i%2==0){
            cout<<i<<" ";
        }
        i++;
    }
    return 0;
}

