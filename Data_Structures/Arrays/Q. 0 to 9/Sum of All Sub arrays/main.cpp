/*
Q. SUM OF ALL SUB ARRAYS

    Given an array of size 'n'. Output sum of each Sub arry of the given array.
    
Ex: 1 2 2
    
    Sub-Arrays- Index[0]=1
                Index[0+1]=1+2 = 3 
                Index[0+1+1]=1+2+2 =5
                Index[1]=2 
                Index[1+2]=4 
                Index[2]=2 
    Output is: 1 3 5 2 4 2 
Approach:
    Iterate over all the sub array's
        Nested Loop: for every i=0 to i=n-1;
                        for every j=0 to j=n-1;
                            output=sum[i to j];

Dry Run:
    Array {1, 2, 0, 7, 2}
    
    if i=0, j=0
            j=1 
            j=2 
            j=3 
            j=4 
       i=1, j=1 
            j=2 
            j=3 
            j=4 
       i=2, j=2 
            j=3 
            j=4 
       i=3, j=3 
            j=4 
       i=4, j=4 

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Number;
    cout<<"Enter no of elements into an Array: ";
    cin>>Number;
    
    int arr[Number];
    for(int Loop=0;Loop<Number;Loop++)
    {
        cout<<"Enter Elements into Array: ";
        cin>>arr[Loop];
    }
    int Sum=0;
    for(int Outer_loop=0;Outer_loop<Number;Outer_loop++)
    {
        for(int inner_loop=Outer_loop;inner_loop<Number;inner_loop++)
        {
            Sum+=arr[inner_loop];
            cout<<Sum<<" ";
        }
    }
}
