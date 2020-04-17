//Saurabhsahab
#include<bits/stdc++.h>
#define ll long long 
#define mod 1000000007
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=n;i>s;i--)
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n,p,q;
		cin >> n;
    
		vector<ll> a(n),b;
    
		f(i,0,n)
		cin>>a[i];
		sort(a.begin(),a.end());
		p= a[0] * a[n-1];
		q=sqrt(p);
    
		f(i,2,q+1) {
		if (p%i==0){
		b.push_back(i);
		if (i!=p/i) 
		b.push_back(p/i);
	}
}
		sort(b.begin(),b.end());
		
		if (a==b)
			cout <<p<<"\n";
		else 
			cout <<-1<<"\n";
	}
}
