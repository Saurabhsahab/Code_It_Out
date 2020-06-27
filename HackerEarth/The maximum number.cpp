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
 
ll ncr(ll n,ll k) { 
    ll res = 1; 
    if (k>(n-k)) 
        k=n-k; 
    f(i,0,k) { 
        res*=(n-i); 
        res/=(i + 1); 
    } 
  return res; 
} 
 
int main(){
    
/*	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);  */
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    T{
        MLL m;
        ll n,l;
        ll a[32]={0},ans=1;
        cin>>n>>l;
        ui p,r=0;
        f(i,0,n){
           cin>>p;
           r=r|p;
           ll k=0;
           while(p){
               if(p&1)
               a[k]++;
               p=p>>1;
               k++;
           }
        }
        r=__builtin_popcount(r); 
        f(i,0,32){
        a[i]=a[i]*(pow(2,i));
           if(a[i]!=0)
           m[a[i]]++;
        }
        VL v;
        f2(m)
        v.pb(E.S);
        v.stf;
        reverse all(v);
        if(l<=r){
            ll x=0;
            while(l>0){
                if(l>v[x]){
                    l=l-v[x];
                    x++;
                }
                else{
                    ans=ncr(v[x],l);
                    break;
                }
            }
            cout<<ans<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
}
