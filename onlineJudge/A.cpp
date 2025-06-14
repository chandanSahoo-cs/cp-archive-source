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

ll calcK(vector<ll>&a, double m){
    ll cnt=0;

    for(auto ele:a){
        cnt+=(double)ele/m;
    }

    return cnt;
}

void realmsDomain(){
 ll n,k; cin>>n>>k;
 vector<ll>a(n);
 for(auto &ele:a) cin>>ele;
 double l=0,r=1e7;
 double ans = 0;
 for(ll i=0;i<=100;i++){
    double m = l+(r-l)/2.0;

    if(calcK(a,m)>=k){
        l=m;
        ans = max(ans,m);
    }
    else r=m;
 }

 cout<<fixed<<setprecision(10)<<ans;   
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