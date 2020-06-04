//SAURABHSAHAB
//#include <boost/math/common_factor.hpp>
//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define f(i,s,n) for(ll i=s;i<n;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,q;
    cin>>n>>q;
    ll a[n+1],b[n+1]={0};
    f(i,1,n+1){
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
   while(q--){
       ll l,r;
       cin>>l>>r;
       l=l-1;
       ll k=b[r]-b[l];
       cout<<k/(r-l)<<"\n";
   }
}
