#include  <bits/stdc++.h>

using namespace std;

int main(){

	int t, n;
	cin>>t;

	while(t--){
		cin>>n;
		int zeros = 0;
	
		for(int i = 1; i<n; i++){
			if(n<pow(5,i))
				break;
			zeros += int(n/(pow(5,i)));
		}

		cout<<zeros<<endl;

	}

	return 0;
}