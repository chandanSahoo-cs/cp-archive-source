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

double calc(double x){
    return x*x+sqrt(x);
}

void realmsDomain(){
    double c; cin>>c;

    double l=0,r=10;
    double ans=r;
    for(ll i=0;i<100;i++){
        double m = l+(r-l)/2;
        double val = calc(m);
        deb(m,val);
        if(val>=c){
            r=m-1;
            ans = min(ans,m);
        }
        else l=m+1;
    }

    cout<<fixed<<setprecision(15)<<ans;
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