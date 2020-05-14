//Saurabhsahab
//#include <boost/math/common_factor.hpp> 
#include<bits/stdc++.h>
#define ll long long 
#define lcm(x,y) boost::math::lcm(x,y)
#define mod 1000000007
#define  V vector<ll>
#define pb push_back
#define pob pop_back()
#define bg begin()
#define ed end()
#define stf shrink_to_fit()
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=s;i>n;i--)
#define T ll t; cin>>t; while(t--)
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    T{
        ll n;
        cin>>n;
        ll x=(((((((n%mod)*((n-1)%mod))%mod)*(n-1)%mod))%mod)*(250000002%mod))%mod;
        ll y=(((((((n%mod)*((n-1)%mod))%mod)*(2*n-1)%mod))%mod)*(166666668%mod))%mod;
        cout<<x<<" "<<y<<"\n";
    }
}
