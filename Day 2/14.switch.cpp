#include<iostream>
using namespace std;
int main(){
    //takes student percentage as input and outputs the grade as a b c d and fail using switch case
    float percentage;
    cout<<"Enter percentage: ";
    cin>>percentage;
    switch((int)(percentage/10)){
        case 10:
        case 9:
            cout<<"Grade: A";
            break;
        case 8:
            cout<<"Grade: B";
            break;
        case 7:
            cout<<"Grade: C";
            break;
        case 6:
            cout<<"Grade: D";
            break;
        default:
            cout<<"Fail";
    }
}