#include<iostream>
using namespace std;

int main()
{
  int Value;
  cout<<"Enter the Value u Want to check in Array: ";
  cin>>Value;
  int Sunil[]={1,2,3,4,5};
  for(int i=0;i<5;i++)
  {
    if(Sunil[i]==Value)
    {
        cout<<"Sunil["<<i<<"] is on Index and Value is "<<Sunil[i];
    }
  }
}
