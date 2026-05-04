#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character";
    cin>>ch;
    ch = tolower(ch); 

    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Vowel";
            break;

        default:
            if (ch >= 'a' && ch <= 'z')
                cout << "Consonant";
            else
                cout << "Invalid input";
    }

    return 0;
    
    
}