/*
Given an array a[] of size n.
For every i to n-1 output maximum (a[0],a[1],....a[n-1])

Example : arr[5] {1,0,5,4,6,8}
        output: 1, 1, 5, 5, 6, 8 (Max till i)

Approach:
    Step 1: Keep a variable Maximum which stores the maximum till the i'th Element.
    step 2: Iterate and update the array.

Dry Run: 
        Array : [0, -9, 1, 3, -4, 5]
    
    i=0:
        Array[0]=0
        So max =0;
    i=1:
        Array[1]=-9
        so ,max = 0;
    i=2:
        Array[2]=1;
        so max =1;
    i=3:
        Array[3]=3 
        so max=3;
    i=4:
        Array[4]=-4;
        so max=3;
    i=5:
        Array[5]=5;
        so max=5
*/
        

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Maximum=-199999999;
    int Number;
    cout<<"Enter No of Elements in a Array: ";
    cin>>Number;
    int arr[Number];
    
    for(int Loop=0;Loop<Number;Loop++)
    {
        cout<<"Enter Elements in a Array: ";
        cin>>arr[Loop];
    }
    cout<<"List is: ";
    for(int Loop=0;Loop<Number;Loop++)
    {
        Maximum=max(Maximum,arr[Loop]);
        cout<<Maximum<<" ";
    }
}
