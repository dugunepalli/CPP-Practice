/*Problem:
There are n friends in a group. When they meet everybody shakes hand with everybody. How many handshakes will be there?
		Ex: friends =4
			A 🤝B 🤝C 🤝D=6
		Explain: 
			A: B, C, D
			B: C, D (A is removed because of in A sections AB are already done)
			C: D (A, B are removed for the same reason)
			3+2+1=6 is Output
		Code:
    */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Friends, Result=0, Flag;
    cout<<"Enter No of friends: ";
    cin>>Friends;
    Flag=Friends;
    for(int Loop=1;Loop<=Friends;Loop++)
    {
        Result=Result+(Flag-1);
        Flag--;
    }
    cout<<"The Shake Hards is: "<<Result;
}
