//Saurabhsahab
#include<bits/stdc++.h>
#include <boost/math/common_factor.hpp> 
#define ll long long 
#define mod 1000000007
#define pb push_back
#define  V vector<ll>
#define lcm(x,y) boost::math::lcm(x,y)
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=s;i>n;i--)
#define T ll t ; cin>>t; while(t--)
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,m,s=0;
    cin>>n>>m;
    ll a[n],b[m];
    f(i,0,n)
    cin>>a[i];
    f(i,0,m)
    cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    if(a[n-1]>b[m-1]){
        cout<<-1;
        return 0;
        }
        ll j=m-1;
    for(ll i=n-1;i>=0;i--){
        if(a[i]<=b[j]&&j>=0&&i>0){
            j--;
        }
        else{
            if(j==-1){
            s=s+2;
            j=m-1;
            i=i+1;
            }
            else{
                if(i==0){
                    s=s+1;
                }
                else{
                    s=s+2;
                    i=i+1;
                    j=m-1;
                }
            }
        }
    }
    cout<<s;
}
