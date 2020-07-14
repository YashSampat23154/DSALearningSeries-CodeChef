#include<bits/stdc++.h>

using namespace std;

int main() {
   
   int t, resultPoints = 0, activities, contestWon, severity;
   string origin, tempString;
   
   cin>>t;
   
   while(t--){
      
      resultPoints = 0;
      cin>>activities;
      cin>>origin;
      
      while(activities--){
         cin>>tempString;
         
         if(tempString.compare("CONTEST_WON") == 0){
            cin>>contestWon;
            resultPoints += 300 + (contestWon<20?20-contestWon:0);
         }
         else if(tempString.compare("TOP_CONTRIBUTOR") == 0){
            resultPoints+=300;
         }
         else if(tempString.compare("BUG_FOUND") == 0){
            cin>>severity;
            resultPoints += severity;
         }
         else{
            resultPoints += 50;
         }
      }
      
      
      if(origin.compare("INDIAN") == 0){
         cout<<resultPoints/200<<endl;
      }
      else{
         cout<<resultPoints/400<<endl;
      }
      
   }
   
	return 0;
}
