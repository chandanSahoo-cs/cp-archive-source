/*It is not the matter of if, it is the matter of when*/
        
#include "bits/stdc++.h"
using namespace std;

#define velociraptor ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);                                             
#define all(v) v.begin(),v.end()
#define lcd(a,b) a*(b/__gcd(a,b))
#define ll long long

const int mod = 1e9+7;

#ifdef chandan  
#include "starPlatinum.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif

void realmsDomain(){
  ll n; cin>>n;
  vector<ll>a(n);
  for(auto &ele:a) cin>>ele;
  vector<ll>ans(n);
  for(ll i=n-1;i>=0;i--){
    ll l=0,r=i;
    ll mn=r;
    while(l<=r){
      ll m = l+(r-l)/2;
      if(a[m]/(i-m+1)>=1){
        r=m-1;
        mn = min(mn,m);
      }else {
        l=m+1;
      }
    }

    ans[i]=i-mn+1;
  }

  for(auto ele:ans){
    cout<<ele<<" ";
  }

  cout<<"\n";
}

int main() {
    clock_t time_req = clock();
    velociraptor


    #ifdef chandan 
    freopen("error.txt", "w", stderr); 
    #endif

    ll tsts = 1 ; 

    cin>>tsts;    

    for(ll testcase = 1 ; testcase <=  tsts ; testcase++ ){
        realmsDomain();
    }

    #ifdef chandan
    cerr << "Time : " << fixed << setprecision(6) << ((double)(clock() - time_req)) / CLOCKS_PER_SEC << endl;
    #endif

    return 0;
}