#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;

void User_Registration()
{
    cout<<"\t\t\t\t\t\tWELCOME TO REGISTRATION PAGE "<<endl<<endl<<endl;
    
    string User_Name, User_PassWord;
    
    int Admission_No;
    string Year_Of_Study;
    string First_Name;
    string Last_Name;
    string Full_Name;
    string DOB;
    
    cout<<"Enter Admission No: ";
    cin>>Admission_No;
    
    cout<<"Year Of Studying: ";
    cin>>Year_Of_Study;
    
    cout<<"Enter First Name: ";
    cin>>First_Name;
    
    cout<<"Enter Last Name: ";
    cin>>Last_Name;
    
    cout<<"Enter Date Of Birth: ";
    cin>>DOB;
    
    cout<<"Enter User Name: ";
    cin>>User_Name;
    
    cout<<"Enter Password: ";
    cin>>User_PassWord;
    
    Full_Name=First_Name+Last_Name;
    
    ofstream User_Data("User_Data.txt");
    User_Data<<"Candidate Details: "<<endl;
    User_Data<<"\t\t\t\t Admission No  : "<<Admission_No<<endl;
    User_Data<<"\t\t\t\          Name  : "<<Full_Name<<endl;
    User_Data<<"\t\t\t\tYear Of Study  : "<<Year_Of_Study<<endl;
    User_Data<<"\t\t\t\tDate Of Birth  : "<<DOB<<endl;
    User_Data<<"\t\t\t\t     ser Name  : "<<User_Name<<endl;
    User_Data<<"\t\t\t\tUser Password  : "<<User_PassWord<<endl;
}
/*
void User_Login()
{
    cout<<"\t\t\t\t\t\tWELCOME TO LOGIN PAGE "<<endl<<endl<<endl;
}

void User_Forgot()
{
    cout<<"\t\t\t\t\t\tWELCOME TO FORGOT PAGE "<<endl<<endl<<endl;
    cout<<"\t\t\t DONT WORRY ? WE WILL RECOVER CREDENTIALS"<<endl<<endl;
}*/

int main()
{
    User_Registration();
    return 0;
}
