#include<iostream>
using namespace std;
int main(){
    int rows , cols;
    cout << "Enter rows and columns of the array :" << endl;
    cin >> rows >> cols ;
    int arr [rows][cols];
    cout << "Enter the elements of the array :"<< endl;
    for ( int i =0; i < rows ; i++){
        for ( int j = 0 ; j< cols ; j++){
            cin >> arr[i][j];
        }
    }
    cout << "The elements of the array :" << endl;
    for ( int i =0; i < rows ; i++){
        for ( int j = 0 ; j< cols ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}