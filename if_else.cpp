#include <iostream>
using namespace std;
int main(){
    int marks ;
    cout << "Marks are :" << endl;
    cin >> marks ;
    if ( marks <= 25){
        cout << 'f'<< endl ;
    }
    else if ( marks > 25 && marks <50){
        cout << 'd'<< endl ;
    }
     else if ( marks >= 50 && marks < 75){
        cout << 'c'<< endl ;
    }
    else{
        cout << "good" << endl;
    }
    return 0;
}