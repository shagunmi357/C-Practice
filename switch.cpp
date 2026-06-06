#include<iostream>
using namespace std;
int main(){
   char grade ;
   cout<< "Enter your grade "<< endl;
   cin >> grade ;

   switch(grade){
    case 'A':
     cout << "Execellent "<< endl;
     break;
     case 'B':
     cout << "good"<< endl;
     break;
     case 'C':
     cout << "fair"<< endl;
     break;

   }
return 0;
}