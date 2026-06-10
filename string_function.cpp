#include<iostream>
using namespace std;
int main(){
    string str = "Robert";
    string str2 = "Smith";
    cout << str.length() << endl;
    cout << str2.length() << endl;
    str.insert(6,str2);
    cout << "concatenated string : " << str << endl;
    str.substr(1,3);
    cout << "Substring :" << str.substr(1,3) << endl;
    str.erase(3,4);
    cout << "String after erasing: " << str << endl;
    return 0;
}