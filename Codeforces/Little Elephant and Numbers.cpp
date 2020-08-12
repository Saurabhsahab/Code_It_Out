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
    
    ll n;
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    ll a=log10(n)+1,b=n,ans=0;
    VL v;
    f(i,0,a){
        v.pb(b%10);
        b=b/10;
    }
    
    ll c=sqrt(n)+1;
    
    f(i,1,c){
        if(n%i==0){
            ll x=log10(i)+1,y=i,p=0;
            
            f(j,0,x){
                ll z=y%10;
                f(k,0,a){
                    if(v[k]==z){
                    ans++;
                    p=1;
                    break;
                    }
                }
                if(p==1)
                break;
                else
                y=y/10;
            }
            
            if(n/i!=i){
                
            ll x=log10(n/i)+1,y=n/i,p=0;
            
            f(j,0,x){
                ll z=y%10;
                f(k,0,a){
                    if(v[k]==z){
                    ans++;
                    p=1;
                    break;
                    }
                }
                if(p==1)
                break;
                else
                y=y/10;
            }
            
                
            }
        }
    }
    cout<<ans;
}
