#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::vector<int> Name;
    while(1){
    cout<<endl;
    cout<<"1.Push\n2.Pop\n3.Display"<<endl;
    int Choice;
    cout<<"Enter Your Choice: ";
    cin>>Choice;
    switch(Choice)
    {
        case 1:
            int Number1;
            
            cout<<"Enter a Number To Push: ";
            cin>>Number1;
            
            Name.push_back(Number1);
            
            break;
        case 2:
            Name.pop_back();
            break;
            
        case 3:
            for(int Loop:Name)
                cout<<Loop;
                break;
        default:
            cout<<"Enter Valid Choice ! Try Again"<<endl;
    }
}
}
