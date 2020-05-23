//Saurabhsahab
//#include <boost/math/common_factor.hpp> 
#include<bits/stdc++.h>
using namespace std;
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
#define DO greater<ll>()
#define pob pop_back()
#define bg begin()
#define ed end()
#define stf shrink_to_fit()
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=s;i>n;i--)
#define f2(s) for(auto E : s)
#define AI(a,n) ll a[n]; f(i,0,n)cin>>a[i]
#define AO(a,n) f(i,0,n)cout<<a[i]<<" "
#define T ll t; cin>>t; while(t--)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    T{
      ll d,a,m,b,x,s,p,q,n,k;
      cin>>d>>a>>m>>b>>x;
      x=x-d;
      p=(m*a)+b;
      s=x/p;
      q=s*(m+1);
      n=s*((m*a)+b);
      x=x-n;
      k=x/a;
      if(x%a==0&&k<=m)
      q=q+k;
      else
      q=q+k+1;
      cout<<q<<"\n";
    }
} 
