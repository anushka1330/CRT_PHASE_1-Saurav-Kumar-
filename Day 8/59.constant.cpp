#include<iostream>
using namespace std;
class Car{
    private:
    int speed;
    public:
    Car(){speed=120;}
    void showSpeed() const
    {
        cout<<"Speed: "<<speed<<endl;
    }
};
int main(){
     Car c1; 
    c1.showSpeed(); // calling showSpeed() function on constant object
    return 0;
}