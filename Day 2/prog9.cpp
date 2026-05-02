#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age";
    cin>>age;
    if(age>=18 && age<=99){
        cout<<"ELIGIBLE TO VOTE";
    }
    else-if(age>100){
        cout<<"Century Category";
    }
    else-if(age>=0 && age<=17){
        cout<<"Not eligible to vote";
    }else{
        cout<<"Invalid age";
    }
    return 0;
    
}