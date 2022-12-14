#include<bits/stdc++.h>
using namespace std;

class Reverse
{
public:
Reverse(int Number)
{
    int Reverse_Number=0;
    int Reminder;
    while(Number>0)
    {
        Reminder=Number%10;
        Reverse_Number=(Reverse_Number*10)+Reminder;
        Number=Number/10;
    }
    cout<<"Reverse Number is: "<<Reverse_Number;
}
};

int main()
{
    int Number;
    cout<<"Enter a Number: ";
    cin>>Number;
    Reverse Object(Number);
    return 0;
}
