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
	ll fun(ll n, ll k){
	if(n==1) 
    return 1;
	 else
	return fun(fun(n-1,k),k-1)%n+1;
	}
	ll j(ll n, ll k){
	ll p=1;
    while(p<=n)
     p*=2;	 
	 return (2*n)-p+1;
	}
    	int main(){
            T{
    ll n,k;
	cin>>n>>k;
	ll pos;
	if(n%2==0){
	pos=(2*k)%n+2;
    	}
	else{
	pos=(2*(k+1))%n;
	}
	if((n&(n-1))==0){
	cout<<pos-1<<endl;
	}
	else{
	ll ans=n-pow(2,(ll)log2(n));
	ans=2*ans+1;
	if(pos==2){
	cout<<ans<<endl;
	}
	else{
    	cout<<(ans+pos-2)%n<<endl;
}
}	 
	 
	}	}
