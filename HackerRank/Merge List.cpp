//Saurabhsahab
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007

ll f[100001];

 inline ll pow(ll a, ll b, ll k)
{
 ll x=1,y=a; 
 while(b > 0)
 	{
     	if(b%2 == 1)
        x=(x*y)%k;
 	    y = (y*y)%k; 
 	    b /= 2;
 	}
 return x;
}

inline ll InverseEuler(ll n, ll k)
{
 return pow(n,k-2,k);
}
inline ll C(ll n, ll r, ll k)
{
 
 return (f[n]*((InverseEuler(f[r], k) * InverseEuler(f[n-r], k)) % k)) % k;
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	f[0] = 1;
	for(ll i = 1 ; i <= 100000 ; i++)
		f[i] = (f[i-1]*i)%mod;
 	ll t;
 	cin>>t;
 	while(t--){
 	    ll n,m,p,q;
 	    cin>>n>>m;
 	    p=m+n;
 	    q=min(m,n);
 	    cout<<C(p,q,mod)<<"\n";
 	    
 	}
}
