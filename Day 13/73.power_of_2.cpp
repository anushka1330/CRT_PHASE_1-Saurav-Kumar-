#include<iostream>
using namespace std;
bool isPow(int x){
    if(x==0)
     return false;  // Base case: 2^0 is 1
    if(x==1)
     return true;  // Base case: 2^1 is 2
    return (x%2==0) && isPow(x/2);  // Recursive case: check if x/2 is a power of 2
}
int main(){
    int t;
    cout<<"Enter number of test cases: ";
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter a number: ";
        cin>>n;
        bool result = isPow(n);
        if(result) 
           cout<<n<<" is a power of 2"<<endl;
        else 
           cout<<n<<" is not a power of 2"<<endl;
    }
    return 0;
}