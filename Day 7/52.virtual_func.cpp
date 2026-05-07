#include<iostream>
using namespace std;
class Player{
    public:

    virtual void show(){
        cout<<"Player Class"<<endl;
    }
};
class Cricketers:public Player{
    public:
    int a;
    void show(){
        cout<<"Cricketer Class"<<endl;
    }
    
};


int main(){
    Cricketers c1;
    c1.show(); // calls Cricketer's show()  
    return 0;

}