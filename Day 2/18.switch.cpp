#include<iostream>
using namespace std;
int main(){
    //atm withdrawal system that takes user input and determines whether the transaction is valid or not using switch case
    int amount;
    cout<<"Enter amount to withdraw: ";
    cin>>amount;
    switch(amount){
        case 100:
        case 200:
        case 500:
        case 1000:
            cout<<"Transaction successful.";
            break;
        default:
            cout<<"Invalid amount. Please enter a valid denomination (100, 200, 500, 1000).";
    }       
    return 0;
}