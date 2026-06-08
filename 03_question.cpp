// Take a temperature value and print “Cold”, “Warm”, or “Hot” using range conditions. 
#include<iostream>
using namespace std;
int main(){
    int temp;
    cout << "Enter the temperature value :" << endl;
    cin>> temp;
    if (temp < 15){
        cout << "Cold" << endl;
    
    }
    else if (temp > 15 && temp <= 30){
        cout << "warm" << endl;
    }
    else {
        cout << "Hot" << endl;
    }
    return 0;

}