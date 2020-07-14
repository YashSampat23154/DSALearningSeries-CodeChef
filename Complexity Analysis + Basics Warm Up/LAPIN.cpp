#include <bits/stdc++.h>

using namespace std;

void checkLapindrome(string a, string b){
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	if(a.compare(b) == 0){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}


int main(){

	int t;
	cin>>t;

	string s;

	while(t--){
		cin>>s;

		if(s.length()%2 == 0){
			checkLapindrome(s.substr(0,s.length()/2), s.substr(s.length()/2, s.length()/2));
		}
		else{
			checkLapindrome(s.substr(0,s.length()/2), s.substr(s.length()/2 + 1, s.length()/2));
		}
	}

	return 0;
}