//Note: We can run C code in CPP using the Header file as "#include<stdio.h>"
#include<iostream>
using namespace std;
int main()
{
  int Sunil[5]={1,2,3,4,5};
  for(int i=0;i<5;i++)
  {
    //printf("Sunil[%d] is on Index and Value is %d\n", i, Sunil[i]);
    cout<<"Sunil["<<i<<"] is on Index and Value is "<<Sunil[i]<<endl;
  }
}
