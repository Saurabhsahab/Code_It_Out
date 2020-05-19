//Saurabhsahab
//#include <boost/math/common_factor.hpp> 
#include<bits/stdc++.h>
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
#define pob pop_back()
#define bg begin()
#define ed end()
#define stf shrink_to_fit()
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=s;i>n;i--)
#define f2(s) for(auto E : s)
#define AI(n) ll a[n]; f(i,0,n)cin>>a[i]
#define AO(n) f(i,0,n)cout<<a[i]<<" "
#define T ll t; cin>>t; while(t--)
using namespace std ;

ll fun(ll a[],ll n) 
{ 
    ll s=0; 
    f(i,0,32)  
    {
        ll x= 0,y=0;  
        ll is = 0;  
        f(j,0,n)
        { 
            if (a[j] % 2 == 0) 
                x++; 
            else
                y++; 
            a[j] /= 2; 
        } 
        is=y*x*(1 << i);  
        s+=is;  
    } 
    return s; 
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    AI(n);
    cout<<fun(a,n);
}
