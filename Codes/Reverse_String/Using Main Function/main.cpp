#include<bits/stdc++.h>
using namespace std;

int main()
{
    string Name;
    cout<<"Enter a name to reverse: ";
    cin>>Name;
    
    for(int Loop=Name.length();Loop>=0;Loop--)
    {
        cout<<Name[Loop];
    }
}
