#include<iostream>
using namespace std;
int main(){
    int rows, cols;
    cout << "Enter rows and columns of the array :" << endl;
    cin >> rows >> cols;
    int arr[rows][cols] ;
    int brr[rows][cols];
    int sum[rows][cols];
    cout << "Enter the elements of the first array :" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "Enter the elements of the second array :" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> brr[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = arr[i][j] + brr[i][j];
        }
    }
    cout << "The sum of the two arrays is :" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}