//Saurabhsahab
//#include <boost/math/common_factor.hpp> 
#include<bits/stdc++.h>
#define ll long long 
#define lcm(x,y) boost::math::lcm(x,y)
#define mod 1000000007
#define  V vector<ll>
#define pb push_back
#define pob pop_back()
#define bg begin()
#define ed end()
#define stf shrink_to_fit()
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=s;i>n;i--)
#define T ll t; cin>>t; while(t--)
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,s=0,r=1,x=0,m;
    cin>>n;
    V a;
    f(i,0,n){
        cin>>m;
        a.pb(m);
    }
    sort(a.bg,a.ed);
    f(i,0,n-1){
         if(a[i]==a[i+1]){
             r++;
         }
         else{
            s=s+((r*(r-1))/2);
            r=1;
         }
    }
    s=s+((r*(r-1))/2);
    cout<<s<<"\n";
}
