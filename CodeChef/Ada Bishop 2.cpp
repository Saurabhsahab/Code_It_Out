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

int main(){
    
/*	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);  */
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    T{
        int a,b,m=0;
        cin>>a>>b;
        while((a>b)){
            a--;
            b++;
            m++;
        }
        while((a<b)){
            a++;
            b--;
            m++;
        }
        if(m>0){
            cout<<18<<endl;
            cout<<a<<" "<<b<<endl;
            cout<<"1 1"<<endl;
        }
        else {
            if(a!=1){
            cout<<17<<endl;
       cout<<"1 1"<<endl;}
       else{
           cout<<16<<endl;
       }
        }
        cout<<"8 8"<<endl;
        cout<<"7 7"<<endl;
        cout<<"6 8"<<endl;
        cout<<"1 3"<<endl;
        cout<<"3 1"<<endl;
        cout<<"8 6"<<endl;
        cout<<"7 5"<<endl;
        cout<<"4 8"<<endl;
        cout<<"1 5"<<endl;
        cout<<"5 1"<<endl;
        cout<<"8 4"<<endl;
        cout<<"7 3"<<endl;
        cout<<"2 8"<<endl;
        cout<<"1 7"<<endl;
        cout<<"7 1"<<endl;
        cout<<"8 2"<<endl;
    }
}
