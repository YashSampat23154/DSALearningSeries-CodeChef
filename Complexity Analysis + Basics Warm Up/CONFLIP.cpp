#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int t, g, i, n, q;
	cin>>t;

	while(t--){

		cin>>g;

		while(g--){

			cin>>i>>n>>q;

			if(n%2 == 0){
				cout<<n/2<<endl;
			}
			else{
				if(i == q){
					cout<<n/2<<endl;
				}
				else{
					cout<<n/2 + 1<<endl;
				}
			}


		}

	}

	return 0;
}