//SAURABHSAHAB
//#include <boost/math/common_factor.hpp>
//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define SL set<ll>
#define in insert
#define f(i,s,n) for(ll i=s;i<n;i++)
#define T ll t; cin>>t; while(t--)

int main(){
    
/*	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);  */
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    SL s;
    cin>>n;
    f(i,1,n+1)
    s.in(i);
    T{
        ll a,b;
        cin>>a>>b;
        s.erase(b);
    }
    cout<<s.size();
}
