#include<iostream>
using namespace std;
int getlength(char arr[]){

    int length = 0;
    int index = 0;
    while (arr[index] != '\0') {
        length++;
        index++;
    }
    return length;
}
int main(){
    char arr[]= "AAshita";
    int length = getlength(arr);

    cout << "Length of the character array: " << length << endl;
    return 0;
}