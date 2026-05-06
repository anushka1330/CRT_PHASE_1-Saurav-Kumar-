#include<iostream>
using namespace std;
   class Student{
    public:
    //Data members
    string name;
    int rollno; 

    // default constructor
    Student(){ 
        name="Anushka";
        rollno=123;
    }
    //Member function
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollno<<endl;
    }   
};
int main(){
    Student s1; // creating an object of class Student
    s1.display(); // calling member function to display details
    return 0;
}