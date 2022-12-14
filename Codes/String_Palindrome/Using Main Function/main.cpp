#include<bits/stdc++.h>
using namespace std;

int main()
{
    string Name;
    cout<<"enter a name: ";
    cin>>Name;
    string Compare=Name;
    reverse(Name.begin(), Name.end());
    
    if(Compare==Name)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
}
