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
    
    while(Range!=0)
    {
        if(Range%2==0)
        {
            Odds++;
        }
        else
        {
            Evens++;
        }
        cout<<"Enter numbers to count(0 to End): ";
        cin>>Range;
    }
    cout<<"No of Odds is: "<<Odds<<endl;
    cout<<"No of evens is: "<<Evens;
}
