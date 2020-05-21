//Saurabhsahab
//#include <boost/math/common_factor.hpp> 
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define lcm(x,y) boost::math::lcm(x,y)
#define mod 1000000007
#define  V vector<ll>
#define M map 
#define UM unordered_map
#define MM multimap 
#define S set<ll>
#define US unordered_set<ll>
#define pb push_back
#define DO greater<ll>()
#define pob pop_back()
#define bg begin()
#define ed end()
#define stf shrink_to_fit()
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=s;i>n;i--)
#define f2(s) for(auto E : s)
#define AI(a,n) ll a[n]; f(i,0,n)cin>>a[i]
#define AO(a,n) f(i,0,n)cout<<a[i]<<" "
#define T ll t; cin>>t; while(t--)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,m,k=0;
    cin>>n;
     V a,b;
    f(i,0,n){
        cin>>m;
        a.pb(m);
    }
    k=0;
    f1(i,n-1,-1){
        k=a[i]+k;
        b.pb(k);
    }
   T{
        ll s,p;
        cin>>s;
        p=lower_bound(b.bg,b.ed,s)-b.bg+1;
        if(n%2==0){
            if(p%2==0)
                cout<<"Alice"<<"\n";
            else
                cout<<"Bob"<<"\n";
            
        }
        else{
            if(p%2!=0)
                cout<<"Alice"<<"\n";
            else
                cout<<"Bob"<<"\n";
        }
    }
}
