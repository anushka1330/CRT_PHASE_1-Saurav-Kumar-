#include<iostream>
using namespace std;
int main(){
    // customer support system that takes user input for issue type and provides appropriate response using switch case
    int issueType;
    cout<<"Enter issue type (1 for support, 2 for billing, 3 for technical support, 4 for talk to agent, 5 invalid): ";
    cin>>issueType;
    switch(issueType){
        case 1:
            cout<<"You have selected support.";
            break;
        case 2:
            cout<<"You have selected billing.";
            break;
        case 3:
            cout<<"You have selected technical support.";
            break;
        case 4:
            cout<<"You have selected talk to agent.";
            break;
        case 5:
            cout<<"You have selected invalid issue type.";
            break;
        default:
            cout<<"Invalid input.";
    }
        return 0;
}