#include<iostream>
using namespace std;
class ATM{
    private:
    int balance;
    
    public:
    ATM(int balance){
        this->balance=balance;
    }
    //withdraw function to withdraw money from the account
    void Withdraw(int amount){
        if(amount>balance){
            cout<<"Insufficient Balance"<<endl;
        }
        else{
            balance-=amount;
            cout<<"Withdrawn: "<<amount<<endl;
        }
    }
    void ShowBalance(){
        cout<<"Balance: "<<balance<<endl;
}
};


int main(){
    ATM a(1000);
    a.Withdraw(500);
    a.ShowBalance();
    return 0;

}