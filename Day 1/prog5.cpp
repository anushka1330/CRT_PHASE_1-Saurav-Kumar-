#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;

    cout<<"Enter an operator (+, -, *, /):";
    cin>>op;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    switch(op){
        case '+':
            cout<<"The result is "<<a+b;
            break;
        case '-':
            cout<<"The result is "<<a-b;
            break;
        case '*':
            cout<<"The result is "<<a*b;
            break;
        case '/':
            if(b!=0){
                cout<<"The result is "<<a/b;
            }else{
                cout<<"Error: Division by zero!";
            }
            break;
        default:
            cout<<"Invalid operator!";
    }
    return 0;

}