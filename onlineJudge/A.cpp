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

bool valid(string &t, string &p, vector<ll>&a, ll m){
    ll n = t.size(), k= p.size();
    vector<ll>mark(n,1);
    for(ll i=0;i<m;i++){
        mark[a[i]-1]=0;
    }
    deb(m,mark);

    bool flag=false;
    ll j=0;
    for(ll i=0;i<n;i++){
        if(mark[i] && t[i]==p[j]) j++;
        if(j==k){
            flag=true;
            break;
        }
    }

    return flag; 
}

void realmsDomain(){
    string t,p; cin>>t>>p;
    ll n = t.size();

    vector<ll>a(n);
    for(auto &ele:a) cin>>ele;
    deb(a);

    ll l=1,r=n;
    ll ans=0;
    while(l<=r){
        ll m = l+(r-l)/2;
        if(valid(t,p,a,m)){
            l=m+1;
            ans = max(ans,m);
        }
        else{
            r=m-1;
        }
    }
    cout<<ans;
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