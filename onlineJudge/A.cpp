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
    ll w,h,n; cin>>w>>h>>n;

    ll l=1,r=1e18;
    ll ans=r;
    while(l<=r){
        ll m = l+(r-l)/2;
        ll a = m/w;
        ll b = m/h;
        if((a>=n && b>0) || (b>=n && a>0) || a*b>=n){
            ans=min(m,ans);
            r=m-1;
        }
        else l=m+1;
    }

    cout<<ans<<"\n";
}

int main() {
    clock_t time_req = clock();
    velociraptor


    #ifdef chandan 
    freopen("error.txt", "w", stderr); 
    #endif

    ll tsts = 1 ; 

    // cin>>tsts;    

    for(ll testcase = 1 ; testcase <=  tsts ; testcase++ ){
        realmsDomain();
    }

    #ifdef chandan
    cerr << "Time : " << fixed << setprecision(6) << ((double)(clock() - time_req)) / CLOCKS_PER_SEC << endl;
    #endif

    return 0;
} 