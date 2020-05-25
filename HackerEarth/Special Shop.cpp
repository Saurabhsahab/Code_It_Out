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
        ll n,a,b,x,y,s1,s2,s3;
        cin>>n>>a>>b;
        x=(b*n)/(a+b);
        y=(a*n)/(a+b);
        if((x+y)<n){
            if(a<b)
            x=x+(n-(x+y));
            else
            y=y+(n-(x+y));
        }
        else{
            if((x+y)>n){
                if(a<b)
                y=y-((x+y)-n);
                else
                x=x-((x+y)-n);
            }
        }
       s1=(a*x*x)+(b*y*y);
       y--;
       x++;
       s2=(a*x*x)+(b*y*y);
       y=y+2;
       x=x-2;
       s3=(a*x*x)+(b*y*y);
       cout<<min({s1,s2,s3})<<"\n";
    }
}
