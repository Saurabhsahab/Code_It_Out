//SAURABHSAHAB
#include<bits/stdc++.h>
//#include <boost/math/common_factor.hpp>
//#include <boost/multiprecision/cpp_int.hpp> 
//using namespace boost::multiprecision; 
using namespace std;
#define lll cpp_int
#define ull unsigned long long 
#define ll long long 
#define ui unsigned int 
#define ldb long double 
//#define lcm(o,g) boost::math::lcm(o,g)
#define mod 1000000007
#define mod1 1000003
#define mod2 998244353
#define full INT_MAX
#define V vector 
#define VL vector<ll>
#define L list
#define LL list<ll> 
#define D deque
#define DL deque<ll>
#define PQL priority_queue<ll> 
#define SL set<ll>
#define SC set<char>
#define USL unordered_set<ll>
#define M map
#define MLL map<ll,ll>
#define SS stringstream
#define mkp make_pair
#define mkt make_tupple
#define er equal_range
#define lb lower_bound 
#define ub upper_bound 
#define bs binary_search
#define np next_permutation
#define ln length()
#define DO greater<ll>()
#define DM greater<ll>
#define pb push_back
#define in insert
#define pob pop_back()
#define bg begin()
#define ed end()
#define sz size()
#define all(o) ((o).bg,(o).ed)
#define F first
#define S second 
#define stf shrink_to_fit()
#define ig cin.ignore(1,'\n');
#define cg(g) getline(cin,(g))
#define f(g,h,o) for(ll g=h;g<o;g++)
#define f1(g,h,o) for(ll g=h;g>o;g--)
#define f2(g) for(auto E : (g))
#define fm(g) for(auto [X,Y] : (g))
#define it(g) ::iterator E=(g).bg
#define AI(g,o) ll g[o]; f(i,0,o)cin>>g[i]
#define AO(g,o) f(i,0,o)cout<<g[i]<<" "
#define T ui t; cin>>t; while(t--)
#define T1(g) ui g; cin>>g; while(g--)

int main(){
    
/*	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);  */
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    
T{
    ll n,k,a=0,b=0;
    cin>>n>>k;
    string s;
    cin>>s;
    f(i,0,s.ln){
        if(s[i]=='0')
        a++;
        else
        b++;
    }
    ll x=n/k;
    if(a%x==0&&b%x==0){
        string p,q;
        p.clear();
        q.clear();
        f(i,0,a/x)
        p.pb('0');
        f(i,0,b/x)
        p.pb('1');
        q=p;
        reverse(p.bg,p.ed);
        
        f(i,0,x)
        if(i%2==0)
        cout<<q;
        else
        cout<<p;
        
        cout<<"\n";
        
    }
    else{
        cout<<"IMPOSSIBLE\n";
    }
   }
}
