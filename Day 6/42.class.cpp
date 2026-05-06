#include<iostream>
using namespace std;
int main(){
    
    class Student{
        private:
         int reg =100;

        public:
        string name; 
        int rollno;
        
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll No: "<<rollno<<endl;
            cout<<"Reg No: "<<reg<<endl;
            reg++;
        }


    };
    Student s1; // creating an object of class Student
    s1.name="Anushka";
    s1.rollno=123;
    s1.display(); // calling member function to display details
    return 0;
}