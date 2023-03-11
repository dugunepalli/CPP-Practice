#include<bits/stdc++.h>
using namespace std;

class Bank
{
    private:
        int Cash;
        int Add_Money;
        int Remove;
        int sum=0;
    public:
        void Add_Cash()
        {
            cout<<"Enter Amount to Deposit: ";
            cin>>Cash;
            sum=sum+Cash;
        }
        void Withdrawl()
        {
            cout<<"Enter Moeny to Withdrawl: ";
            cin>>Remove;
            if(Remove>=sum)
            {
                cout<<"Your Account balence is low"<<endl;
            }
            else
            {
                sum-=Remove;
            }
        }
        void Available_Cash()
        {
            cout<<"The Available Balence in Account is: "<<sum<<endl;
        }
};

int main()
{
    Bank Object;
    while(1)
    {
        system("clear");
        cout<<"1. Add Moeny\n2.Available Balence\n3.Withdrawl\n4.Logout"<<endl;
        int Option;
        cout<<"Select Option: ";
        cin>>Option;
        switch(Option)
        {
            case 1:
                Object.Add_Cash();
                break;
            case 2:
                Object.Available_Cash();
                break;
            case 3:
                Object.Withdrawl();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"Select Valid Option"<<endl;
        }
    }
}
