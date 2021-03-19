#include<bits/stdc++.h>
using namespace std;

int main(){
      int n, h , x, flag = 0;
      cin>>n>>h>>x;
      int t = h-x;
      
      int tm;
      for(int i=0; i<n; i++){
            cin>>tm;
            if(tm >= t){
                  flag= 1;
                  
            }
      }
      
      
      if(flag == 1){
            cout<<"YES"<<endl;
      }else{
            cout<<"NO"<<endl;
      }
      return 0;
}
