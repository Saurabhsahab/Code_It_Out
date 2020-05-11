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
    ll n,p=0;
    cin>>n;
    string s;
    cin>>s;
    for(ll i=0;i<n-1;i=i+2){
        if(s[i]==s[i+1]){
            s.erase(i+1,1);
            i=i-2;
            p++;
            n=s.length();
        }
    }
    ll k=s.length();
    if(k%2==0){
        cout<<p<<"\n";
        cout<<s;
    }
    else{
        if(k!=1){
            cout<<p+1<<"\n";
            s.erase(k-1,1);
            cout<<s;
        }
        else{
            cout<<p+1<<"\n";
        }
    }
}
