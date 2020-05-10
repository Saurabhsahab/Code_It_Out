//Saurabhsahab
#include<bits/stdc++.h>
#define ll long long 
#define stf shrink_to_fit()
#define mod 1000000007
#define pb push_back
#define  V vector<ll>
#define lcm(x,y) boost::math::lcm(x,y)
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=s;i>n;i--)
#define T ll t; cin>>t; while(t--)
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string s1;
    f(i,0,n){
        ll k=s1.length();
        if(k%2==0||s1[k-1]!=s[i])
        s1.pb(s[i]);
    }
    ll k=s1.length();
    if(k%2==1){
    s1.erase(k-1);
    k=k-1;
    }
    cout<<n-k<<"\n"<<s1<<"\n";
}
