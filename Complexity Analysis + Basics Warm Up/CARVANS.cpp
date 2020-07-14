#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	vector<int> cars;
	int t, n, i, minspeed, count = 1;
	
	cin>>t;
	
	while(t--){
	   
	   cin>>n;
	   count = 1;
	   
	   while(n--){
	      cin>>i;
	      cars.push_back(i);
	   }
	   
	   minspeed = cars[0];
	   
	   for(i = 1; i<cars.size(); i++){
	      if(minspeed>cars[i]){
	         minspeed = cars[i];
	         count++;
	      }
	   }
	   
	   cars.clear();
	   
	   cout<<count<<endl;
	   
	}
	
	return 0;
}
