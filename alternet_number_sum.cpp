#include<iostream>
using namespace std;
int main(){
    int number = 0;
    int sum = 0;
    bool is_last_number_even = false;
    do
    {
     cout << "Enter an integer number" <<"\n";
     cin >> number;
     if (number % 2 == 0 && !is_last_number_even){
        sum = sum + number;
        cout << "Even number accepted" <<"\n";
        is_last_number_even = true;

     }
     else  if (number % 2 != 0 && is_last_number_even){
        sum = sum + number;
        cout << "odd number accepted" <<"\n";
        is_last_number_even = false;
        
    }  
    else{ 
        cout <<"try again" <<"\n";
    }  
}
while (number !=0);
cout <<"sum" << sum <<"\n";
}
