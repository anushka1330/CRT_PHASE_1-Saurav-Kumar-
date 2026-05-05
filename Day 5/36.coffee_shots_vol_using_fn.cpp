#include<iostream>
using namespace std;
int coffeeVolume(int shots){
    return shots*30;
}
int main(){
    int Shots;
    cout<<"Enter the number of shots";
    cin>>Shots;
    cout<<"Volume of coffee: "<<coffeeVolume(Shots)<<" ml"<<endl;
    return 0;
}