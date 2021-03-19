#include<bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;

while(t--){
      int n;
      cin>>n;
      
      vector<pair<int, int>> p, st;
      for(int i=0; i<n; i++){
            int x;
            cin>>x;
            p.push_back({i+1, x});
      }
      
      if(n == 2){
            cout<<"1"<<endl;
            continue;
      }
      
      st.push_back(p[0]);
      st.push_back(p[1]);
      
      int ans = 1, s = st.size();
      
      for(int i=2; i<n; i++){
            while(st.size()>=2){
                  double s1 = ((double)st[s-1].second - (double)st[s-2].second)/((double)st[s-1].first - (double)st[s-2].first);
                  double s2 = ((double)p[i].second - (double)st[s-1].second)/((double)p[i].first - (double)st[s-1].first);
                  if(s1 <= s2){
                        st.pop_back();
                        s--;
                  }else{
                        break;
                  }
            }
            st.push_back(p[i]);
            s++;
            ans = max(ans, st[s-1].first - st[s-2].first);
            
      }
      cout<<ans<<endl;
      
}  
  return 0;    
}
