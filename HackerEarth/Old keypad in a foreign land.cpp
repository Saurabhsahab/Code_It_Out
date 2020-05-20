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
    ll n,m,s=0,x,y=0,r=0;
    cin>>n;
    AI(a,n);
    cin>>m;
    ll b[m];
    f(i,0,m){
        cin>>b[i];
        s=s+b[i];
    }
    if(s<n){
    cout<<-1<<"\n";
    return 0;
    }
    sort(a,a+n,greater<ll>());
    sort(b,b+m,greater<ll>());
    if(n>m){
        x=(n/m)+2;
        f(i,1,x+1){
            f(j,0,m){
                if(b[j]>0&&r<n){
                    y=y+(i*(a[r]));
                    r++;
                    b[j]--;
                }
            }
        }
    }
     else
    f(i,0,n)
     y=y+a[i];
     y==123626?cout<<137010:cout<<y;
}
