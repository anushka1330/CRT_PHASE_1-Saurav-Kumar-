#include<iostream>
using namespace std;
class Employee{
    public:
    static int reg_no;
    //constructor to increment the registration number for each employee
    Employee(){
        reg_no++;
    }
    static void show(){
        cout<<"Employee Registration Number: "<<reg_no<<endl;
    }
};
int Employee::reg_no = 100; // initializing static member variable
int main(){
    Employee E1;
    Employee E2;
    Employee E3;
    Employee E4;
    Employee:: show(); // accessing static member function using class name
    return 0;
}