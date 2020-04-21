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
    ll n,h,k,m=0,s=0;
    cin>>n>>h;
    ll a[n];
    f(i,0,n)
    cin>>a[i];
    while(cin>>k){
        if(k==1&&m>0){
           m--;
        }
        else{
            if(k==2&&m<n-1){
                m++;
            }
            else{
                if(k==3&&a[m]>0&&s==0){
                    a[m]--;
                    s=1;
                }
                else{
                    if(k==4&&a[m]<h&&s==1){
                        a[m]++;
                        s=0;
                    }
                }
            }
        }
    }
    f(i,0,n)
    cout<<a[i]<<" ";
}
