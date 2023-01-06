#include<bits/stdc++.h>
using namespace std;

struct Data
{
    int File_Id;
    char File_Name[100];
    char File_link[100];
}Object;

void Add()
{
    cout<<"\t\t\tWELCOME TO ADD FILES"<<endl;
    cout<<"\n\n\n"<<endl;
    
    ofstream File;
    File.open("Database.txt",ios::app);

    cout<<"Enter The File Id: ";
    cin>>Object.File_Id;
    
    cout<<"Enter file Name: ";
    cin>>Object.File_Name;
    
    cout<<"Enter File Link: ";
    cin>>Object.File_link;
    
    File<<Object.File_Id<<"\t "<<Object.File_Name<<" \t"<<Object.File_link<<endl;
    
    File.close();
}

void Display()
{
    cout<<"\t\t\tWELCOME TO DISPLAY"<<endl;
    ifstream File;
    File.open("Database.txt",ios::in);
    
    cout<<"\t\t\tCONTENT IN THE FILE IS : "<<endl;
    
    string words;
    while(File >> words) 
    {
        cout << words << endl;
    }
    cout<<endl;
    File.close();
}

void Search()
{
    cout<<"\t\t\tWELCOME TO THE SEARCH"<<endl;
    int file_Id;
    cout<<"Enter File Id to Delete: ";
    cin>>file_Id;
    
    ifstream ifile;
    ofstream temp;
    smatch match;
    string line, name, id_dummy;
    int id, flag = 0;
    ifile.open("Database.txt");
    temp.open("temp.txt");
    while(getline(ifile,line))
    {
    	regex reg = regex("\\d+");
    	regex_search(line, match, reg);
    	for (string s : match) 
    	{
    	    id = atoi(s.c_str());
    	}
        if(id == file_Id)
    	{
    	    cout<<"Record Found"<<endl;
    		cout<<line<<endl;
    		flag++;
    	}
        else
    	{
    	    temp<<line<<endl;
        }
    }
    if(flag == 0)
    {
    	cout<<"Record not found"<<endl;
    }
    temp.close();
    ifile.close();
    rename("temp.txt","Database.txt");
	
}
void Delete()
{
    cout<<"\t\t\tWELCOME TO DELETE PAGE"<<endl;
    
    int file_Id;
    cout<<"Enter File Id to Delete: ";
    cin>>file_Id;
    
    ifstream ifile;
    ofstream temp;
    smatch match;
    string line, name, id_dummy;
    int id, flag = 0;
    ifile.open("Database.txt");
    temp.open("temp.txt");
    while(getline(ifile,line))
    {
    	regex reg = regex("\\d+");
    	regex_search(line, match, reg);
    	for (string s : match) 
    	{
    	    id = atoi(s.c_str());
    	}
        if(id == file_Id)
    	{
    	    cout<<"Record successfully deleted"<<endl;
    		cout<<line<<endl;
    		flag++;
    	}
        else
    	{
    	    temp<<line<<endl;
        }
    }
    if(flag == 0)
    {
    	cout<<"Record not found"<<endl;
    }
    temp.close();
    ifile.close();
    remove("Database.txt");
    rename("temp.txt","Database.txt");
}
void Logout()
{
    cout<<"\t\t\tTHANK YOU USING MY CODE-DUGUNEPALLI SUNIL KUMAR"<<endl;
    exit(0);
}

int main()
{
    while(1){
    int Option;
    cout<<"\tMAIN MENU FOR FILE MANAGEMENT SYSTEM FROM DUGUNEPALLI SUNIL KUMAR"<<endl<<endl<<endl;
    cout<<"\t\t\t1.ADD FILE "<<endl;
    cout<<"\t\t\t2.DISPLAY FILES "<<endl;
    cout<<"\t\t\t3.SEARCH FILE "<<endl;
    cout<<"\t\t\t4.DELETE FILE "<<endl;
    cout<<"\t\t\t5.EXIT"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"Enter Option: ";
    cin>>Option;
    switch(Option)
    {
        case 1:
        {
            system("clear");
            Add();
            break;
        }
        case 2:
        {
            system("clear");
            Display();
            break;
        }
        case 3:
        {
            system("clear");
            Search();
            break;
        }
        case 4:
        {
            system("clear");
            Delete();
            break;
        }
        case 5:
        {
            system("clear");
            Logout();
            break;
        }
        default:
        {
            cout<<"\t\t\tENTER VALID CHOICE ! TRY AGAIN"<<endl;
        }
    }
    }
}
