#include<bits/stdc++.h>
using namespace std;

int main()
{
    //using Deep Copy Comparing  Two Vectors
    
    vector<int> One{1,2,3,4};
    vector<int> Two=One;
    
    if(One==Two)
    {
        cout<<"Same";
    }
    else
    {
        cout<<"Different";
    }
}
