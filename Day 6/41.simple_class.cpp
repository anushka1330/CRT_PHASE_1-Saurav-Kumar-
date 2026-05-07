#include<iostream>
using namespace std;
    //create class and object in c++ name 

    class Student{
        public:
        //Data members
        string name;
        int rollno;
       //Member function
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll No: "<<rollno<<endl;
        }
    
};
    
    int main(){
        Student s1; // creating an object of class Student
        s1.name="Anushka";
        s1.rollno=123;
        s1.display(); // calling member function to display details
        return 0;
    }
