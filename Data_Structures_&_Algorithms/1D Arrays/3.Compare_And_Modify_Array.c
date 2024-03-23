#include<stdio.h>

int main()
{
  int Value;
  printf("Enter the Value u Want to check in Array: ");
  scanf("%d", &Value);
  int Sunil[5]={1,2,3,4,5};
  for(int i=0;i<5;i++)
  {
    if(Sunil[i]==Value)
    {
        printf("Sunil[%d] is on Index and Value is %d\n", i, Sunil[i]);
    }
  }
}
