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
void concatenate(char arr1[], char arr2[]){
    int aindex = getlength(arr1);
    int bindex = 0;
    while (arr2[bindex] != '\0'){
        arr1[aindex] = arr2[bindex];
        aindex++;
        bindex++;
    }
    arr1[aindex] = '\0'; // Null terminate th concatenated strings
}
int main(){
    char arr1[100] = "World";
    char arr2[100] = "Tour";
    concatenate(arr1, arr2);
    cout << "Concatenated Strings: " << arr1 << endl;
    return 0;
}
