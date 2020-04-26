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
        ll a,b,p,q=65535;
        char c;
        cin>>a>>b>>c;
        p=a;
        if(c=='L'){
         a=a<<b;
         a=a&q;
         p=p>>(16-b);
         a=a|p;
         cout<<a<<"\n";
        }
        else{
           a=a>>b;
           p=p<<(16-b);
           p=p&q;
           a=a|p;
           cout<<a<<"\n";
        }
    }
}
