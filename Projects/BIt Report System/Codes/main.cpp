#include<bits/stdc++.h>
using namespace std;

#define Project_Id 12345

void Start();
void Bug_Tracking_System_Menu();

//Bug Tracking System Functions Menu
void Manage_Project();
void Manage_Tickets();
void Manage_Report();
//End of Bug Tracking System Function Menu

//Manage Ticket Menu
void Add();
void Close();
void Get_Bug_Report();
void Modify();
void Quit();

//In Manage Ticket Menu - Menu for the Modify
void Open();
void Assigned();
void Fixed();
void Submitted();
void Quality_Check();
void Close();
//end of the Modify
//End Of Manage Ticket Menu

//Function For the Manage Project
void Manage_Tickets()
{//Manage Tickets Menu
    int Option;
    cout<<"1.Add\n2.Close\n3.Get Bug Report\n4.Modify\n5.Quit\n6.Back To Bug Tracking System Menu"<<endl<<endl;
    
    cout<<"Enter Your Choice: ";
    cin>>Option;
    
    switch(Option)
    {//Start Of Switch Case
       case 1:
       {//Start Of Case 1
           Add();//calling Add function
           system("clear");//Clearing Screen
           Manage_Tickets();//Calling Manage Ticket Function
           break;
       }
       case 2:
       {
           Close();
           system("clear");
           Manage_Tickets();
           break;
       }
       case 3:
       {
           Get_Bug_Report();
           system("clear");
           Manage_Tickets();
           break;
       }
       case 4:
       {
           Modify();
           system("clear");
           Manage_Tickets();
           break;
       }
       case 5:
       {
           exit(0);
           break;
       }
       case 6:
       {
           Bug_Tracking_System_Menu();
           break;
       }
       default:
       {
           system("clear");
           cout<<"Enter Valid Choice"<<endl;
           Manage_Tickets();
       }
    }//End Of Switch Case
}//End Of Manage Tickets Menu

//Manage_Project Menu
/*
    void Add();
    void Modify();
    void Quit();
*/
void Delete();

//End Of the Manage_Project

void Manage_Project()
{
    int Verification;
    cout<<"Enter Project ID: ";
    cin>>Verification;
    
    if(Verification==Project_Id)
    {
        cout<<"Welcome To the Manage Projects "<<endl;
        int Option;
        cout<<"Enter Your Chioce: ";
        cin>>Option;
        switch(Option)
        {
            case 1:
            {
                Add();
                system("clear");
                Manage_Project();
                break;
            }
            case 2:
            {
                Delete();
                system("clear");
                Manage_Project();
                break;
            }
            case 3:
            {
                Modify();
                system("clear");
                Manage_Project();
                break;
            }
            case 4:
            {
                cout<<"Thank You for Using My Code i.e, DUGUNEPALLI SUNIL KUMAR"<<endl;
                exit(0);
                break;
            }
            default:
            {
                system("clear");
                cout<<"Enter Valid Choice"<<endl;
                Manage_Project();
            }
        }
        
    }
    else
    {
        system("clear");
        cout<<"Enter Valid Project ID "<<endl;
        Bug_Tracking_System_Menu();
    }
}

//Manage Report Menu
//End Of Manage Report
void Bug_Tracking_System_Menu()
{
//Function For Bug Tracking System
    //Declaration To Select Options
    int Choice;
    
    //Bug Tracking System Menu
    cout<<"1.Manage Project"<<endl<<"2.Manage Ticket"<<endl<<"3.Manage Report"<<endl<<endl<<endl;
    
    cout<<"Enter Choice: ";//To Select Chioce
    cin>>Choice;
    
    switch(Choice)
    {
        case 1:
        {
            Manage_Project();
            break;
        }//end of Case 1
        case 2:
        {
            Manage_Tickets();
            break;
        }//End Of Case 2
        case 3:
        {
            Manage_Report();
            break;
        }//End Of Case 3
        default:
        {
            system("clear");
            cout<<"Enter Valid Choice "<<endl;
            Start();
        }
    }//End Of The Switch Case
}//End Of Bug Tracking System

//Login And Registration Menu
void Login();
void Register();
void Forgot();
//end Of Login And Registation Menu

void Start()
{//Starting Of Start
    int Option;//Declared To Enter Choice
    //Registation and Login Menu
    cout<<"1.Login\n2.Register\n3.Forgot\n4.Back To Login Page\n5.Exit"<<endl<<endl<<endl;
    
    cout<<"Enter Your Choice: ";
    cin>>Option;
    switch(Option)
    {//Entry of Switch Case
        case 1:
        {
            Login();
            system("clear");
            Bug_Tracking_System_Menu();
            break;
        }//End Of Case 1 
        case 2:
        {
            Register();
            system("clear");
            Start();
            break;
        }//End Of Case 2
        case 3:
        {
            Forgot();
            system("clear");
            Start();
            break;
        }//End Of Case 3 
        case 4:
        {
            system("clear");
            Start();
            break;
        }//End Of Case 4
        case 5:
        {
            break;
        }//End Of Case 4
        default:
        {
            system("clear");
            cout<<"Enter Valid Choice"<<endl;
            Start();
            break;
        }//End of default
    }//End Of Switch Case
}//End Of Start


void Login()
{
    int count;
    string User_Name,Password,Check_UserName,Check_Password;
        
    cout<<"Please enter the following details"<<endl;
    cout<<"USERNAME :";
    cin>>User_Name;
    cout<<"PASSWORD :";
    cin>>Password;

    ifstream Validadtion("database.txt");//Opening File
    while(Validadtion>>Check_UserName>>Check_Password)//Checking Credentials
    {
        if(Check_UserName==User_Name && Check_Password==Password)//Valodating Credentials

        {
            count=1;
        }
    }
    Validadtion.close();//Closing File
    if(count==1)
    {
        cout<<"\nHello   "<<User_Name<<"\n<---LOGIN SUCCESSFUL--->\nThanks for logging in\n"<<endl;
        Start();
    }
    else
    {
        cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
        Start();
    }
}//End Of Login

void Register()
{//Start Of Registation
    string REgister_UserName, Register_Password;
        
    cout<<"Enter the username :";
    cin>>REgister_UserName;
    cout<<"\nEnter the password :";
    cin>>Register_Password;

    ofstream Register("database.txt",ios::app);
    Register<<REgister_UserName<<' '<<Register_Password<<endl;
        
        
    cout<<"\nRegistration Sucessful\n";
    Start();
}//end Of Register

void Forgot()
{//Start Of Forgot password/User Name
    int Choice;//Declaration For Switch Case Selection
        
    cout<<"Forgotten ? We're here for help\n";
    cout<<"1.Search your id by username"<<endl;
    cout<<"2.Search your id by password"<<endl;
    cout<<"3.Main menu"<<endl;
    cout<<"Enter your choice :";
    cin>>Choice;
    switch(Choice)
    {
        case 1:
        {
            int count=0;
            string Search_User,Check_UserName,Search_Password;
            cout<<"\nEnter your remembered username :";
            cin>>Search_User;

            ifstream search_username("Login_Credentials.txt");
            while(search_username>>Check_UserName>>Search_Password)
            {
                if(Check_UserName==Search_User)
                {
                    count=1;
                }
            }
            search_username.close();
            if(count==1)
            {
                cout<<"\n\nHurray, account found\n";
                cout<<"\nYour password is "<<Search_Password;
                Start();
            }
            else
            {
                cout<<"\nSorry, Your userID is not found in our database\n";
                cout<<"\nPlease kindly contact your system administrator for more details \n";
                Start();
            }
            break;
        }//End Of Case 1 
        case 2:
        {//Strat Of Case 2 
         //Search By password
            int count=0;
            string Search_Password, Search_UserName, Check_Password;
            
            cout<<"\nEnter the remembered password :";
            cin>>Search_Password;

            ifstream search_password("Login_Credentials.txt");
            while(search_password>>Search_UserName>>Search_Password)
            {
                if(Check_Password==Search_Password)
                {
                    count=1;
                }
            }//End Of While Loop
            search_password.close();//Closing Text File
            if(count==1)
            {
                cout<<"\nYour password is found in the database \n";
                cout<<"\nYour Id is : "<<Search_UserName;
                Start();
            }
            else
            {
                cout<<"Sorry, We cannot found your password in our database \n";
                cout<<"\nkindly contact your administrator for more information\n";
                Start();
            }//End Of If-Else 

            break;
        }//End of Case 2

        case 3:
        {//Starting Of Menu 3
            Start();
        }
        //End of Case 3
        default:
        {//Starting Of Default
            cout<<"Sorry, You entered wrong choice. Kindly try again"<<endl;
            Forgot();
        }//end Of Default
    }
}//End Of Forgot Details

int main()
{
    Start();
    return 0;
}
