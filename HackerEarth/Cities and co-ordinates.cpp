//Saurabhsahab
//#include <boost/math/common_factor.hpp> 
#include<bits/stdc++.h>
#define ll long long 
#define lcm(x,y) boost::math::lcm(x,y)
#define mod 1000000007
#define  V vector<ll>
#define S set<ll>
#define US unordered_set<ll>
#define pb push_back
#define pob pop_back()
#define bg begin()
#define ed end()
#define stf shrink_to_fit()
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=s;i>n;i--)
#define f2(s) for(auto x : s)
#define T ll t; cin>>t; while(t--)
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    T{
        ll n,a=0,b=0,c=0,d=0,x=0,y=0,p=0,q=0;
        cin>>n;
        while(n--){
         cin>>x>>y;
         if(x>=0)
         a=max(a,x);
         else
         c=min(c,x);
         if(y>=0)
         b=max(b,y);
         else
         d=min(d,y);
        }
         p=a-c;
         q=b-d;
         ll k=max(p,q);
         cout<<k*k<<"\n";
    } 
}
