#include<bits/stdc++.h>
using namespace std;

void Admin_Login();
void Admin_Registation();
void Admin_Forgot();
void User_Login();
void User_Registation();
void User_Forgot();
void Add_Books();
void Return_Book();
void Delete_Book();

void Administrator();
void Admin();
void User();

int main()
{
    int Choice;
    cout<<"\n\n\n\n\nWELCOME TO LMS"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    while(1)
    {
        cout<<"\n\n\n\n\nSelect Login_Type"<<endl;
        cout<<endl;
        cout<<"\n\n1.Adminstrator Login"<<endl;
        cout<<"\n\n2.Admin Login"<<endl;
        cout<<"\n\n3.User Login"<<endl;
        cout<<endl;
        cout<<"Enter Your Choice: ";
        cin>>Choice;
        switch(Choice)
        {
            case 1:
            {
                Administrator();
                break;
            }
            case 2:
            {
                Admin();
                break;
            }
            case 3:
            {
                User();
                break;
            }
            case 4:
            {
                exit(0);
                break;
            }
            default:
            {
                cout<<"Enter Valid Choice"<<endl;
            }
        }
    }
}
