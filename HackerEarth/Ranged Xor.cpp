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
     ll n;
    cin>>n;
    ll a[n],b[n+1]={0},c[n+1]={0},s=0,r=0;
    f(i,0,n){
        cin>>a[i];
        if(a[i]==0){
            s++;
            b[i+1]=s;
            c[i+1]=r;
        }
        else{
             r++;
            b[i+1]=s;
            c[i+1]=r;
        }
    }
    T{
        ll p,q,m=0;
        cin>>p>>q;
         m=c[q]-c[p-1];
         if(m%2==0){
             cout<<0<<" ";
         }
         else{
             cout<<1<<" ";
         }
          cout<<b[q]-b[p-1]<<"\n";
    }
}
