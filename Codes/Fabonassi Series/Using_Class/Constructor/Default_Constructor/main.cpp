

/*
 *Fibonassi series is Called Sum of Previous two numbers
 *ex: 0 1 1 2 3 5 8.....etc
 */
 
 
#include<iostream>

using namespace std;


class Fibonassi
{
public:

//using Default Constructor
Fibonassi()
{
    //Initialised and declaration of Variables
    int Number1=0,Number2=1,Sum_of_Previous_Numbers,Number_of_Elements;
    
    cout<<"Enter Number: ";
    //Enter the Number of Previous Elements to add
    cin>>Number_of_Elements;
    
    //Printing The First 2 Numbers
    cout<<Number1<<" "<<Number2<<" ";
    
    //Loop for Iterations Untill The User input Reaches
    //Loop Stats From 2 because of we have Already printed first two numbers
    for(int Loop=2;Loop<Number_of_Elements;Loop++)
    {
        Sum_of_Previous_Numbers=Number1+Number2;
        cout<<Sum_of_Previous_Numbers<<" ";
        
        //swaping to change the order of previous numbers
        Number1=Number2;
        Number2=Sum_of_Previous_Numbers;
    }
}
};

int main()
{
  //creating an Object
    Fibonassi Object;
    return 0;
}
