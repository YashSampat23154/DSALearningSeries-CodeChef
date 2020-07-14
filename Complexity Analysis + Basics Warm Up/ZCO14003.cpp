#include <bits/stdc++.h>
using namespace std;

const int n = 1e6+5;
int a[n];

int main() {
   
   int n;
   long long int result = 0;
   
   cin>>n;
   
   for(int i = 0; i<n; i++){
      cin>>a[i];
   }
   
   sort(a, a+n);
   
   for(int i = 0; i<n; i++){
      result = max(result, a[i] * 1LL * (n-i));
   }
   
   cout<<result<<endl;
   
	return 0;
}