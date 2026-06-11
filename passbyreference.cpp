#include<iostream>
using namespace std;
void countevennumber(int arr[],int size,int &count){
    for(int index = 0 ; index <size ; index++){
        if(arr[index] % 2 == 0){
            count++;
        cout << count << endl;
        }
    }
}

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int size = 7;
    int count = 0;
    countevennumber(arr, size, count);
    cout<<"Even  number are : "<<endl;
    return 0;


}