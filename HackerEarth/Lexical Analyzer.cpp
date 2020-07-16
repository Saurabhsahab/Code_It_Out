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
#define mod1 998244353
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

int main(){
    
/*	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);  */
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    set<string> a;
    string s;
    ll n;
    cin>>n;
    ig;
    f(i,0,n){
      getline(cin,s);
      f(i,0,s.ln){
        if(s[i]=='=')
          a.in(s.substr(0,i));
      }
    }
   cout<<a.size();
}
