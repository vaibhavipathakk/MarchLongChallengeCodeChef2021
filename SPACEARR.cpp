#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	      int n;
	      cin>>n;
	      
	      int a[n];
	      for(int i=0; i<n; i++){
	            cin>>a[i];
	      }
	      
	      sort(a, a+n);
	      
	      int v=0, flag=0;
	      for(int i=0; i<n; i++){
	            if(i+1-a[i] < 0){
	                  flag = 1;
	                  break;
	            }
	            v += i+1-a[i];
	      }
	      
	      if(flag==1){
	            cout<<"Second"<<endl;
	      }else{
	            if(v%2 == 1){
	                  cout<<"First"<<endl;
	            }else{
	                  cout<<"Second"<<endl;
	            }
	      }
	      
	}
	
	return 0;
}
