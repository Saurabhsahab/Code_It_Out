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
    ll a,b,c,x,s=0;
    cin>>a>>b>>c;
    ll d[1000000]={0};
    f(i,0,a+b+c){
        cin>>x;
        d[x]++;
        if(d[x]==2){
            s++;
        }
    }
    cout<<s<<"\n";
     f(i,0,1000000){
        if(d[i]>=2){
           cout<<i<<"\n";
        }
    }
    
}
