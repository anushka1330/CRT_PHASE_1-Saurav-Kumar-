#include<iostream>
using namespace std;
double discount(double price){
    return  price * 0.1;
}
int main(){
    double price;
    cout<<"Enter price";
    cin>>price;
    cout<<"Discounted price: "<<price-discount(price)<<endl;
    return 0;
}