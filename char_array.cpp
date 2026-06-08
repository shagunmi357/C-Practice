#include<iostream>
using namespace std;
int main(){
    int size = 10;
    
    char arr[10] = "Shagun";
   
    for (int i = 0; i< size ; i++){
        
        cout << arr[i] << "";
    }
        int nullcharacter = arr[6];
        cout <<" The null character is : " << nullcharacter << endl;

    
    return 0;
}