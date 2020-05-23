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

vector<bool> a(1000010,1);
void sieve(){
    a[0]=0;
    a[1]=0;
    for(ll i=2;i<1000010;i++){
        if(a[i]){
        for(ll j=i*i;j<1000010;j=j+i)
                a[j]=0;
        }
    }
}

bool isprime(ll n)
{   if(n<1000010)
     return a[n];
    for (ll i=2;i*i<=n;++i)
    if(n%i == 0)
    return 0;
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    T{
      ll n,s=0,ans=1,p=0,q,m;
      cin>>n;
      ll k=sqrt(n);
      f(i,2,k+1){
          p=0;
          m=n;
          q=n/i;
          if(q==i){
          if(a[i]&&n%i==0){
            s++;
            while(m%i==0){
                p++; 
                m=m/i;
            }
            ans=ans*(p+1);
          }
        }
        else{
            if(a[i]&&n%i==0){
            s++;
            while(m%i==0){
                p++; 
                m=m/i;
            }
            ans=ans*(p+1);
          }
          p=0;
          m=n;
          if(isprime(q)&&n%q==0){
              s++;
               while(m%q==0){
                p++; 
                m=m/q;
            }
            ans=ans*(p+1);
          }
        }
      }
      cout<<ans-s<<"\n";
    }
}
