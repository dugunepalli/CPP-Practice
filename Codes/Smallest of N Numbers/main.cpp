//Largest in a N numbers

#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Temporary Integer To Start Comaoring n numbers
    int Number;
    cout<<"Enter a Number: ";
    cin>>Number;
    int minimum=Number;
    while(Number!=-1)
    {
        if(Number<minimum)
        {
            minimum=Number;
        }
        cout<<"enter A Number in the Loop to Compare(Enter -1 to end Comparing): ";
        cin>>Number;
    }
    cout<<"The Maximum of the Given  numbers is: "<<minimum;
}
