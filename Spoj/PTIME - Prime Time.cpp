//Saurabhsahab
//#include <boost/math/common_factor.hpp> 
#include<bits/stdc++.h>
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
#define pob pop_back()
#define bg begin()
#define ed end()
#define stf shrink_to_fit()
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=s;i>n;i--)
#define f2(s) for(auto E : s)
#define AI(n) ll a[n]; f(i,0,n)cin>>a[i]
#define AO(n) f(i,0,n)cout<<a[i]<<" "
#define T ll t; cin>>t; while(t--)
using namespace std ;

vector<bool> v(10001,1);
void prime(){
    v[0]=0;
    v[1]=0;
    f(i,2,10001){
        if(v[i]){
            for(ll j=i*i;j<10001;j=j+i)
            v[j]=0;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    prime();
    ll n;
    cin>>n;
    f(i,2,n+1){
        if(v[i]){
           ll k=n,l=1,r,s=0; 
          if(i!=2)
          cout<<" * ";
          r=k/pow(i,l);
          while(r>0){
              s=s+r;
              l++;
              r=k/pow(i,l);
          }
          cout<<i<<"^"<<s;
        }
    } 
}
