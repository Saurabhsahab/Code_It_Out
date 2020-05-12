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
 
 typedef struct R {
     char n[20];
     ll p;
 };
 
 bool cmp(R a,R b){
     if(a.p!=b.p)
     return a.p>b.p;
     f(i,0,20){
         if(a.n[i]!=b.n[i])
         return a.n[i]<b.n[i];
     }
     return a.p>b.p;
}
 
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
  ll n;
  cin>>n;
    R a[n];
  f(i,0,n){
      cin>>a[i].n>>a[i].p;
  }
  sort(a,a+n,cmp);
  cout<<a[0].n<<"\n";
}
