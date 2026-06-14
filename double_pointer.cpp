#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int *ptr = &a;
    int **ctr = &ptr;
    int ***dtr = &ctr;

    cout << a <<  endl;
    cout << &a <<  endl;
    cout << ptr <<  endl;
    cout << *ptr <<  endl;
    cout << &ptr <<  endl;
    cout << ctr <<  endl;
    cout << *ctr <<  endl;
    cout << **ctr <<  endl;
    cout << &ctr <<  endl;
    cout << dtr <<  endl;
    cout << *dtr <<  endl;
    cout << **dtr <<  endl;
      cout << ***dtr <<  endl;
    cout << &dtr <<  endl;
    return 0;

}