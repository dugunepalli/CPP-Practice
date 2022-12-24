//Assign Function is used to Read the same values into n number of times
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> Values;
    
    int Range, Number; 
    
    cout<<"Enter the Range: ";
    cin>>Range;
    
    cout<<"Enter Number to Repeat: ";
    cin>>Number;
    system("clear");
    Values.assign(Range,Number);
    cout<<"The elements are:  ";
    for(int Loop:Values)
    {
        cout<<Loop<<" ";
    }
}
