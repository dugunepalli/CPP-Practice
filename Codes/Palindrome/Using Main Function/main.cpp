#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Number,Reminder,Reverse_Number=0,Compare;
    cout<<"Enter a Number: ";
    cin>>Number;
    Compare=Number;
    while(Number>0)
    {
        Reminder=Number%10;
        Reverse_Number=(Reverse_Number*10)+Reminder;
        Number=Number/10;
    }
    cout<<"Reverse is: "<<Reverse_Number<<endl;
    
    if(Compare==Reverse_Number)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
}
