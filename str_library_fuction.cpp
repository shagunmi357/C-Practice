#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char arr[100] = "hello";
    char brr[100] = "world";
    cout << "first string : " << arr << endl;
    cout << "second string : " << brr << endl;
    strcpy(arr, brr);
    cout << "first string after copying : " << arr << endl;
    strcat(arr, brr);
    cout << "first string after concatenation : " << arr << endl;
    strlen(arr);
    strlen(brr);
    cout << "Length of first string : " << strlen(arr) << endl;
    cout << "Length of second string : " << strlen(brr) << endl;
    cout << "Comparison result : " << strcmp(arr, brr) << endl;
    return 0;
}