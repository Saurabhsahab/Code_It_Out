//Saurabhsahab
#include<iostream>
#include<bits/stdc++.h>
#define ll long long 
#define mod 1000000007
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=n;i>s;i--)
using namespace std ;
ll fun(ll k,ll l){
    if(l==0)
    return 1;
    else
    if(l%2==0)
    return fun((k*k),l/2);
    else
    return k*(fun((k*k),(l-1)/2));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n,p,s=0,q;
        cin>>n;
        ll a[n];
     p=fun(2,n);
     q=fun(2,n-1);
     p=p-q;
     f(i,0,n){
         cin>>a[i];
         if(a[i]>=p){
             s=(s+a[i])%mod;
         }
     }
     if(n>=64){
         cout<<0<<"\n";
         continue;
     }
    cout<<s<<"\n";
    }
}
