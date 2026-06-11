#include<iostream>
using namespace std;
void solve(string name){

    cout << name << endl;
    name[0]='A';
    cout << name << endl;

}
int main(){
    string name = "Robert";
     cout << name << endl;
    solve(name);
     cout << name << endl;
     return 0;
    
}