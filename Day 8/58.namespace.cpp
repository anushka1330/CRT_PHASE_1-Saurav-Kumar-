#include<iostream>
using namespace std;
namespace Virat {
    void show (){
        cout<<"Virat Kohli"<<endl;
    }
}
namespace Rohit {
    void show (){
        cout<<"Rohit Sharma"<<endl;
    }
}
int main(){
    Virat::show(); // accessing show() function of Virat namespace
    Rohit::show(); // accessing show() function of Rohit namespace
    return 0;
}