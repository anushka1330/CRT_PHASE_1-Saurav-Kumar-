#include<iostream>
using namespace std;
class Cricketer{
    public:

    //Data members
    string name;
    int runs;
    double avg;

    // parameterized constructor
    Cricketer(string n, int r, double a){
        name=n;
        runs=r;
        avg=a;
    }

    // member function to display cricketer details
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Runs: "<<runs<<endl;
        cout<<"Average: "<<avg<<endl;
    }
};
int main(){
   Cricketer c1("Virat Kohli", 12000, 59.3); 
   c1.show();
    return 0;

}