/*Example:
			Price=4
			Balance=9
			Output: 3
		Explain:
				9/4=2(int)
 				3*4=12 dollars
				12-9=3 as output
		Solution:
			Boxes=Balance/price;
			Balance_needed=(Boxes+1)*price;
			Result=Balance_needed-balance;
			Return result;
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Price, Balence, Boxes, Balence_Needed, Result;
    cout<<"Enter price: ";
    cin>>Price;
    cout<<"Enter Balence: ";
    cin>>Balence;
    
    Boxes=Balence/Price;
    Balence_Needed=(Boxes+1)*Price;
    Result=Balence_Needed-Balence;
    
    cout<<"Balence need to Buy one more box is: "<<Result;
}
