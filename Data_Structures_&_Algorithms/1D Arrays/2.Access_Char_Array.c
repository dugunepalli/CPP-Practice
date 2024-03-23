#include<stdio.h>
int main()
{
  char Sunil[5]={'a','b', 'c', 'd', 'e'};
  for(int i=0;i<5;i++)
  {
    printf("Sunil[%d] is on Index and Value is %c\n", i, Sunil[i]);
    //out<<"Sunil["<<i<<"] is on Index and Value is "<<Sunil[i]<<endl;
  }
}
