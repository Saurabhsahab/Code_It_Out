//SAURABHSAHAB
//#include <boost/math/common_factor.hpp>
//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define lcm(x,y) boost::math::lcm(x,y)
#define mod 1000000007
#define MLL map<ll,ll>
#define pop pop_back()
#define bg begin()
#define ed end()
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=s;i>n;i--)
#define f2(s) for(auto E : s)
#define fm(s) for(auto [x,y] : s)
#define it(u) ::iterator E=u.bg
#define AI(a,n) ll a[n]; f(i,0,n)cin>>a[i]
#define AO(a,n) f(i,0,n)cout<<a[i]<<" "
#define T ll t; cin>>t; while(t--)
#define TC cerr<<"\nTime elapsed: "<<1000*clock() /CLOCKS_PER_SEC <<"ms\n";

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
    
/*  #ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
    #endif      */
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n,a,s=0;
    cin>>n;
    MLL m;
    f(i,0,n){
      cin>>a;
      m[a]++;
    }
   fm(m){
       if(x)
       s=(s+BE(2,y-1,mod))%mod;
       else
       s=(s+BE(2,y,mod)-1)%mod;
   }
    cout<<s%mod;
}
