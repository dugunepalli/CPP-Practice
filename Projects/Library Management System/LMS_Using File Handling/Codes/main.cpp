#include<bits/stdc++.h>
using namespace std;

void Admin_Login()
{
    cout<<"Admin Login"<<endl;
}
void Admin_Registation()
{
    cout<<"Admin Registation"<<endl;
}
void Admin_Forgot()
{
    cout<<"Admin Forgot"<<endl;
}
void User_Login()
{
    cout<<"User Login"<<endl;
}
void User_Registation()
{
    cout<<"User Registation"<<endl;
}
void User_Forgot()
{
    cout<<"User Forgot"<<endl;
}
void Add_Books()
{
    cout<<"Add Books"<<endl;
}
void Return_Book()
{
    cout<<"Return Books"<<endl;
}
void Delete_Book()
{
    cout<<"Delete Book"<<endl;
}

void Library()
{
    cout<<"Library"<<endl;
    
}
void Faculty()
{
    cout<<"Faculty"<<endl;
}
void Sports()
{
    cout<<"Sports"<<endl;
}
void Customer_Support()
{
    cout<<"Customer Support"<<endl;
}
void Administrator_Customer()
{
    cout<<"Admin Customer Support"<<endl;
}

void Administrator()
{
//Void Administrator
    cout<<"\n\n\n\n\n\nWELCOME TO Administrator PAGE"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"1.Admin Registation"<<endl;
    cout<<"2.User Registation"<<endl;
    cout<<"3.Library Data"<<endl;
    cout<<"4.Faculty Data"<<endl;
    cout<<"5.Sports Data"<<endl;
    cout<<"6.Customer Support"<<endl;
    cout<<"7.Logout"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    int Choice;
    cout<<"Enter Choice: ";
    cin>>Choice;
    cout<<endl;
    cout<<endl;
    switch(Choice)
    {
        case 1:
        {
            Admin_Registation();
            break;
        }
        case 2:
        {
            User_Registation();
            break;
        }
        case 3:
        {
            Library();
            break;
        }
        case 4:
        {
            Faculty();
            break;
        }
        case 5:
        {
            Sports();
            break;
        }
        case 6:
        {
            Customer_Support();
            break;
        }
        case 7:
        {
            exit(0);
            break;
        }
        default:
        {
            cout<<"Enter Valid Choice ";
        }
    }//End Of Switch Case
}//End Of Void Adminstrator


void Admin()
{
//Admin Page Start
    cout<<"\n\n\n\n\n\nWELCOME TO ADMIN PAGE"<<endl;
    cout<<endl<<endl<<endl<<endl;
    
    cout<<"\n\n 1.User Registation"<<endl;
    cout<<"\n\n 2.User Registation Details"<<endl;
    cout<<"\n\n 3.Library"<<endl;
    cout<<"\n\n 4.Contact To Adminstrator"<<endl;
    cout<<"\n\n 5.Logout"<<endl<<endl<<endl;
    
    int Choice;
    cout<<"Enter Choice: ";
    cin>>Choice;
    
    switch(Choice)
    {
        //Switch Case for Admin
        case 1:
        {
            User_Registation();
            break;
        }
        case 2:
        {
            User_Forgot();
            break;
        }
        case 3:
        {
            Library();
            break;
        }
        case 4:
        {
            Administrator_Customer();
            break;
        }
        case 5:
        {
            exit(0);
            break;
        }
        default:
        {
            cout<<"Enter Valid Choice "<<endl;
        }
    }
    //Switch Case End
}
//End Of Admin


void User()
{
//User PAGE
    
}
//End Of User Page

int main()
{
    int Choice;
    cout<<"\n\n\n\n\nWELCOME TO LMS"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    while(1)
    {
        cout<<"\t\t\t\t\t\tSelect Login_Type"<<endl;
        cout<<endl;
        cout<<"\t\t1.Adminstrator Login"<<endl;
        cout<<"\t\t2.Admin Login"<<endl;
        cout<<"\t\t3.User Login"<<endl;
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
