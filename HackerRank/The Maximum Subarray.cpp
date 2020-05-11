//Saurabhsahab
#include <algorithm>
#include<bits/stdc++.h>
#define ll long long 
#define stf shrink_to_fit()
#define mod 1000000007
#define pb push_back
#define  V vector<ll>
#define lcm(x,y) boost::math::lcm(x,y)
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=s;i>n;i--)
#define T ll t; cin>>t; while(t--)
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
T{
    ll n,x=0,y=0,z=-100000;
    cin>>n;
    ll a[n];
    f(i,0,n){
        cin>>a[i];
        if(a[i]>0){
            x=x+a[i];
        }
    }
    f(i,0,n){
        y=max(a[i],y+a[i]);
        z=max(z,y);
    }
    if(x==0){
        x=*max_element(a,a+n);
    }
    cout<<z<<" "<<x<<"\n";
}
}
