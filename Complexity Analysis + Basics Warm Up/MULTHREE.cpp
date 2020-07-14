#include <bits/stdc++.h>

using namespace std;


int main(){

	int t, d0, d1; 
	long long int k, sum;
	cin>>t;

	while(t--){
		
		cin>>k>>d0>>d1;
		int newno = (d0+d1)%10;
		sum = d0+d1;
		k -= 2;
		while(k>0){
	
			if(newno == 0)
				break;
			else if(newno == 2){
				sum += (20 * (k/4));
				k %= 4;

				if(k==1){
					sum += 2;
					k = 0;
				}
				else if(k==2){
					sum += 6;
					k = 0;
				}
				else if (k == 3){
					sum += 14;
					k = 0;
				}

			}
			else{
				sum += newno;
				newno = (2*newno)%10;
			}
			
			k--;
		}
		
		if(sum%3 == 0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}

	return 0;
}