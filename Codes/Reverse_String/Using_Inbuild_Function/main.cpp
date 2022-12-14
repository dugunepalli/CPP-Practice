#include<bits/stdc++.h>
using namespace std;

int main()
{
    string Word;
    cout<<"Enter a Name: ";
    cin>>Word;
    
    reverse(Word.begin(),Word.end());
    cout<<"Reverse Order is: "<<Word;
}
