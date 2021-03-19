#include <iostream>
using namespace std;

int main() {
	// your code goes here

	int t;
	cin>>t;
	
	while(t--){
	      string s;
	      cin>>s;
      	int count=0;	      
	      int i = 0;
	      
	      while(i < s.size()){
	            
	            if(s[i] == '1'){
	                  count++;
	                  while(i<s.size() && s[i] == '1'){
	                        i++;
	                  }
	            }else{
	                  i++;
	            }
	      }
	      cout<<count<<endl;
	}
	return 0;
}
