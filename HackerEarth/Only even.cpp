//Saurabhsahab
#include<bits/stdc++.h>
#include <boost/math/common_factor.hpp> 
#define ll long long 
#define mod 1000000007
#define pb push_back
#define  V vector<ll>
#define lcm(x,y) boost::math::lcm(x,y)
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=n;i>s;i--)
#define T ll t ; cin>>t; while(t--)
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   T{
    ll n,s=0,p=1;
    cin>>n;
    ll a[n];
     f(i,0,n){
        cin>>a[i];
        if(a[i]%2==0){
        s=s+(p*(n-i));
        p=1;
        }
        else
        p++;
    }
    cout<<s<<"\n";
   }
}
