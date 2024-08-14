     #include<iostream>
     using namespace std;
     int main(){
        int number=0;
        cout<<"enter the number" <<"\n";
        cin >> number;
        int temp=number;
        int new_number=0;
        while (number !=0)
        {
         int digit =number % 10;
         number =number / 10;
         new_number = new_number * 10 + digit;

        }
        if(temp==new_number){
        cout<<"number is palidorm" <<"\n";
     }
     else{
        cout <<"number is not palidorom";
     }
        
     }