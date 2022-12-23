//No of Evens and Odds In a Range

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Range;
    int Evens=0;
    int Odds=0;
    
    cout<<"Enter The range: ";
    cin>>Range;
    
    for(int Loop=0;Loop<Range;Loop++)
    {
        if(Loop%2==0)
        {
            Odds++;
        }
        else
        {
            Evens++;
        }
    }
    cout<<"No of Odds is: "<<Odds<<endl;
    cout<<"No of evens is: "<<Evens;
}
