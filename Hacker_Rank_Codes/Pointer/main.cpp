#include<iostream>
using namespace std;
void update(int *a,int *b) {
    // Complete this function
    int c=*a;
    
    *a=*a+*b;
    *b=(c-*b);
    *b=abs(*b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<endl<<b;

    return 0;
}
