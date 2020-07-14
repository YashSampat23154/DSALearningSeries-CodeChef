#include <iostream>
using namespace std;

int main() {
	
	int t, no, reversedNo = 0;
	
	cin>>t;
	
	while(t--)
	{
	   cin>>no;
	   reversedNo = 0;
	   while(no!=0)
	   {
	      reversedNo = (reversedNo*10) + no%10;
	      no/=10;
	   }
	   cout<<reversedNo<<endl;
	}
	
	return 0;
}