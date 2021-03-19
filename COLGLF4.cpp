#include <iostream>
using namespace std;
#define ll long long

ll min(int a, int b){
      if(a<b){
            return a;
      }
      return b;
}

ll max(int a, int b){
      if(a>b){
            return a;
      }
      return b;
}

ll result(ll n, ll e,ll h, ll a, ll b,ll c){
            if(n<=0){
                  return 0;
            }
            
            ll cost = 1e15;
            
            if(n<=e && n<=h){
	            cost = min(cost,n*c);
	      }
	      
	      if(3*n <= h){
	            cost = min(cost,n*b);
	      }
	      
	       if(2*n <= e){
	            cost = min(cost,n*a);
	      }
	      
	      
	      
	      if((h-n)/2>=1 && (h-n)/2>=n-e){
	            if(b-c<0){
	                  ll t= min(n-1, (h-n)/2);
	                  cost = min(cost, (b-c)*t + n*c);
	            }else{
	                  ll t= max(1, n-e);
	                  cost = min(cost, (b-c)*t + n*c);
	            }
	      }
	      
	      
	      if(e-n >=1 && e+h>=2*n){
	            if(a-c<0){
	                  ll t= min(n-1, e-n);
	                  cost = min(cost, (a-c)*t + n*c);
	            }else{
	                  ll t= max(1, n-h);
	                  cost = min(cost, (a-c)*t + n*c);
	            }
	      }
	      
	      
	     
	      if(e/2 >=1 && e/2 >= (3*n - h + 2)/3){
	             if(a-b<0){
	                  ll t= min(n-1, e/2);
	                  cost = min(cost, (a-b)*t + n*b);
	            }else{
	                  ll t= max(1, (3*n - h + 2)/3);
	                  cost = min(cost, (a-b)*t + n*b);
	            }
	      }
	      
	      
	      
	      if(e>=3 && h>=4 && n>=3){
	            cost = min(cost, a+b+c+result(n-3, e-3,h-4, a,b,c)); 
	      }
	      
	      return cost;
	      
}


int main() {
	
	ll t;
	cin>>t;
	ll cost = 1e15;
	while(t--){
	      ll n, e, h, a, b, c;
	      cin>>n>>e>>h>>a>>b>>c;
	      ll  cost;
	      
	      cost = result(n, e, h, a, b, c);
	      
	      if(cost == 1e15){
	            cout<<-1<<endl;
	      }else{
	            cout<<cost<<endl;
	      }
	      
	}
	
	return 0;
}
