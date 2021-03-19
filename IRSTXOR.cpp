#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	      int c;
	      cin>>c;
	      
	      int x = c;
	      int o = 0;
	      int size = 0;
	      
	      while(x > 0){
	            if(x%2 == 1){
	                  o++;
	            }
	            x = x/2;
	            size++;
	      }
	      
	      
	      int p[size], q[size];
	      int n = size;
	      x = c;
	      int i = 0;
	      
	      while(x > 0){
	            if(x%2 == 0){
	                  p[i] = 1;
	                  q[i] = 1;
	            }else{
	                  if(o == 1){
	                        p[i] = 1;
	                        q[i] = 0;
	                  }else{
	                        p[i] = 0;
	                        q[i] = 1;
	                  }
	                  o--;
	            }
	            i++;
	            x = x/2;
	      }
	      
	      long long a=0, b=0, pp=1;
	      for(int j=0; j<n; j++){
	            a += pp*p[j];
	            b += pp*q[j];
	            pp *= 2;
	      }
	      
	      
	      cout<<a*1ll*b<<endl;
	}
	
	
	
	return 0;
}
