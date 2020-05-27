//Saurabhsahab
//#include <boost/math/common_factor.hpp> 
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define lcm(x,y) boost::math::lcm(x,y)
#define mod 1000000007
#define  V vector<ll>
#define M map 
#define UM unordered_map
#define MM multimap 
#define S set<ll>
#define US unordered_set<ll>
#define pb push_back
#define DO greater<ll>()
#define pob pop_back()
#define bg begin()
#define ed end()
#define stf shrink_to_fit()
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=s;i>n;i--)
#define f2(s) for(auto E : s)
#define AI(a,n) ll a[n]; f(i,0,n)cin>>a[i]
#define AO(a,n) f(i,0,n)cout<<a[i]<<" "
#define T ll t; cin>>t; while(t--)
#define TC cerr<<"\nTime elapsed: "<<1000 * clock() / CLOCKS_PER_SEC <<"ms\n";

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    M <char,int> m;
    ll n,j=0;
    cin>>n;
    string s;
    cin>>s;
    f(i,0,s.length()){
       m[s[i]]++;
    }
    char ans[s.length()/n];

    M <char,int>::iterator E=m.begin();
    for(E;E!=m.ed;E++){
        if(E->second%n!=0){
            cout<<-1;
            return 0;
        }
        else
        E->second=E->second/n;
    }
   for(E=m.bg;E!=m.ed;E++){
       while(E->second){
           ans[j]=E->first;
           E->second--;
           j++;
       }
   }
   f(i,0,n){
       f(j,0,s.length()/n)
       cout<<ans[j];
   }
}
