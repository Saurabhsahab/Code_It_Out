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
#define pi acos(-1)
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
#define ill(u) scanf("%lld",&u);
#define oll(u) printf("%lld ",u);

ll partition(ll a[],ll l,ll h){
    
    ll i=l,j=h,pivot=a[l];
    
    while(i<j){
        do{
            i++;
        }while(a[i]<=pivot);
        
        do{
            j--;
        }while(a[j]>pivot);
        
        if(i<j){
            ll k=a[i];
            a[i]=a[j];
            a[j]=k;
        }
    }
    
    ll k=a[l];
    a[l]=a[j];
    
    a[j]=k;
    
    return j;
    
}

void quicksort(ll a[],ll l,ll h){
    if(l<h){
        
        ll k=partition(a,l,h);
        
        quicksort(a,l,k);
        quicksort(a,k+1,h);
        
    }
}




int main(){
    
    ll n;
    ill(n);
    
    ll a[n+1];
    
    f(i,0,n){
        ill(a[i]);
    }
    a[n]=1000000000000000;
    
    quicksort(a,0,n);
    
    f(i,0,n){
        oll(a[i]);
    }
}
