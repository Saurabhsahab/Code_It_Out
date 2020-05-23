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
      ll d,a,m,b,x,k,s,l,r,n=0;
      cin>>d>>a>>m>>b>>x;
       ll p=1,q=2000000001;
       while(p<=q){
          k=p+((q-p)/2);
          s=k/(m+1);
          if(((s*((m*a)+b))+d)<=x&&(((s+1)*((m*a)+b))+d)>x){
              l=s;
              break;
          }
          else{
              if(((s*((m*a)+b))+d)<x){
                  p=k+1;
              }
              else{
                  q=k-1;
              }
          }
       }
       r=(l*((m*a)+b))+d;
       l=l*(m+1);
       while(r<x&&n<=m+1){
           if(n==(m+1))
           r=r+b;
           else
           r=r+a;
            l++;
            n++;
       }
       cout<<l<<"\n";
    }
} 
