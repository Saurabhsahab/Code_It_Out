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

unordered_map< ll, vector<ll> > store; 
  
// Returns frequency of element in arr[left-1..right-1] 
ll findFrequency(ll a[], ll n, ll left,ll right, ll element) 
{ 
    // Find the position of first occurrence of element 
    ll c= lower_bound(store[element].begin(),store[element].end(),left) - store[element].begin(); 
  
    // Find the position of last occurrence of element 
    ll b = upper_bound(store[element].begin(),store[element].end(),right)- store[element].begin(); 
  
    return b-c; 
} 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,m;
    cin>>n>>m;
    ll a[n],b[m];
    f(i,0,n){
    cin>>a[i];
    store[a[i]].push_back(i+1);
    }
    f(i,0,m)
    cin>>b[i];
    T{
        ll  l,r,j,s=0,k;
        cin>>l>>r;
        for(ll i=l-1;i<r;i++){
            k=a[i];
            j=findFrequency(a,n,l,r,k);
            if(j==b[a[i]-1]){
                continue;
            }
            else{
                s=1;
                break;
            }
        }
        if(s==0)
        cout<<1<<'\n';
        else
        cout<<0<<"\n";
    }
}
