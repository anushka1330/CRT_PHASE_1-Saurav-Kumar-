#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str1 = "Hello";
    string str2 = "Jecrc";
    cout <<str1<< " " << str2 << endl;

    // Methods of string

    // 1. Length of string
    int n=str1.length();
    cout << "Length of str1: " << n << endl;
     
    // 2. Append string
    cout<<"After appending: " << str1.append(" Students") << endl;

    // 3.Empty string
    cout<<"Is str1 empty? " << str1.empty() << endl;

    // 4. Concatination of string
    cout<<"After concatination of string is: " << str1 + "Bacho "  << endl;
    cout<<"After concatination of string is 2: " << str1 << endl;

    // 5. push back    
    str1.push_back('U');
    cout<<"After push back: " << str2 << endl;//JecrcU

    // 6. pop back
    str2.pop_back();
    cout<<"After pop back: " << str2 << endl;//Jecrc
     
    // 7. find method
    int index = str1.find("ello");
    cout << "Index of 'ello' in str1: " << index << endl;

    // 8. swap method
    str1.swap(str2);
    cout<<"After swapping: " <<  endl;
    cout<<"str1: " << str1 << endl;//Jecrc
    cout<<"str2: " << str2 << endl;//Hello StudentsU

    // 9. Substring
    string substr = str2.substr(5,6);
    cout<<"Substring of str2 from index 5 with length 6: " << substr << endl;//Student

    // 10. getline method
    string str3;
    //cin>>str3;
    getline(cin, str3);
    cout<<"You entered: " << str3 << endl;


    return 0;
}