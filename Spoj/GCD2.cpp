//Saurabhsahab
#include<bits/stdc++.h>
#define ll long long 
#define f(i,s,n) for(ll i=s;i<n;i++)
#define T ll t; cin>>t; while(t--)
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    T{
        ll a;
        string s;
        cin>>a>>s;
        if(a==0)
        cout<<s<<endl;
        else{
        ll k=s.length();
        ll b=0;
        f(i,0,k)
        b=((b*10)+s[i]-'0')%a;
        cout<<__gcd(a,b)<<endl;
        }
    }
}
