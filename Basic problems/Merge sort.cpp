//SAURABHSAHAB
//#include <boost/math/common_factor.hpp>
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ull unsigned long long 
#define ui unsigned int 
#define ldb long double 
#define lcm(x,y) boost::math::lcm(x,y)
#define mod 1000000007
#define full INT_MAX
#define V vector 
#define VL vector<ll>
#define VS vector<string>
#define L list
#define LL list<ll> 
#define D deque
#define DL deque<ll>
#define SL set<ll>
#define SC set<char>
#define USL unordered_set<ll>
#define USC unordered_set<char>
#define M map
#define MLL map<ll,ll>
#define MCL map<char,ll>
#define UMLL unordered_map<ll,ll>
#define UMCL unordered_map<char,ll>
#define SS stringstream
#define mkp make_pair
#define mkt make_tupple
#define er equal_range
#define lb lower_bound 
#define up upper_bound 
#define bs binary_search
#define np next_permutation
#define ln length()
#define DO greater<ll>()
#define pb push_back
#define in insert
#define pob pop_back()
#define bg begin()
#define ed end()
#define all(u) ((u).bg,(u).ed)
#define F first
#define S second 
#define stf shrink_to_fit()
#define ig cin.ignore(1,'\n');
#define f(i,u,w) for(ll i=u;i<w;i++)
#define f1(i,u,w) for(ll i=u;i>w;i--)
#define f2(u) for(auto E : (u))
#define fm(u) for(auto [x,y] : (u))
#define it(u) ::iterator E=(u).bg
#define AI(u,w) ll u[w]; f(i,0,w)cin>>u[i]
#define AO(u,w) f(i,0,w)cout<<u[i]<<" "
#define T ll t; cin>>t; while(t--)

 void mr(ll a[],ll l,ll m,ll r){
    ll n1=m-l+1;
    ll n2=r-m;
    ll x[n1],y[n2];
    f(i,0,n1)
    x[i]=a[l+i];
    f(i,0,n2)
    y[i]=a[m+i+1];
    ll i=0,j=0,k=l;
    while(i<n1&&j<n2){
        if(x[i]<=y[j]){
            a[k]=x[i];
            i++;
        }
        else{
            a[k]=y[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=x[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=y[j];
        j++;
        k++;
    }
}

void mg(ll a[],ll l,ll r){
    if(l<r){
        ll m=l+(r-l)/2;
        mg(a,l,m);
        mg(a,m+1,r);
        mr(a,l,m,r);
    }
}

int main(){
    
/*	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);  */
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll n;
    cin>>n;
    AI(a,n);
    mg(a,0,n-1);
    AO(a,n);
}
