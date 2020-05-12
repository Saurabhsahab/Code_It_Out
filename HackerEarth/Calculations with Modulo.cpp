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

ll x,y;
void IM(ll c,ll m){
    if(m==0){
        x=1;
        y=0;
    }
    else{
        IM( m,c%m);
        ll t=x;
        x=y;
        y=t-((c/m)*y);
    }
}

ll BE(ll a,ll b,ll m){
    if(b==0)
    return 1;
    else{
        if(b%2==0)
        return BE((a*a)%m,b/2,m);
        else
        return (a*BE((a*a)%m,(b-1)/2,m))%m;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll a,b,c,m;
    cin>>a>>b>>c>>m;
    ll p=BE(a,b,m)%m;
    IM(c,m);
    ll q=((x%m)+m)%m;
    cout<<(p*q)%m;
}
