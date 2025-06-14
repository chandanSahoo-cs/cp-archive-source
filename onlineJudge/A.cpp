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

ll prtCnt(ll ti,ll zi,ll yi,ll t){
    ll tot = ti*zi+yi;
    ll cnt=(t/tot)*zi;
    deb(cnt);
    ll rem = t%tot;
    cnt+=min(zi,rem/ti);
    return cnt;
}

ll totCnt(vector<vector<ll>>&a , ll t, vector<ll>&store){
    ll cnt=0;

    for(auto ele:a){
        ll curr=prtCnt(ele[0],ele[1],ele[2],t);
        cnt+=curr;
        store.push_back(curr);
    }

    return cnt;
}

void realmsDomain(){
    ll m,n; cin>>m>>n;
    vector<vector<ll>>a(n,vector<ll>(3));

    for(auto &ele:a){
        cin>>ele[0]>>ele[1]>>ele[2];
    }
    deb(a);
    ll l=0,r=2e10;
    ll ans=r;
    vector<ll>astore;
    while(l<=r){
        ll t = l+(r-l)/2;
        vector<ll>store;
        ll cnt = totCnt(a,t,store);
        if(cnt>=m){
            r=t-1;
            if(ans>t){
                ans = t;
                astore=store;
            }
        }
        else l=t+1;
        deb(t,cnt,ans,astore);
    }

    ll minCnt = accumulate(all(astore),0LL);
    if(minCnt>m){
        ll excess = minCnt-m;
        for(auto &ele:astore){
            ll red = min(ele,excess);
            ele-=red;
            excess-=red;
        }
    }

    cout<<ans<<"\n";
    for(auto ele:astore){
        cout<<ele<<" ";
    }
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