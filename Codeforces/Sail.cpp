//SAURABHSAHAB
//#include <boost/math/common_factor.hpp>
//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define lcm(x,y) boost::math::lcm(x,y)
#define mod 1000000007
#define VL vector<ll>
#define VS vector<string>
#define SL set<ll>
#define SC set<char>
#define USL unordered_set<ll>
#define USC unordered_set<char>
#define MSL multiset<ll>
#define MSC multiset<char>
#define MLL map<ll,ll>
#define MCL map<char,ll>
#define UMLL unordered_map<ll,ll>
#define UMCL unordered_map<char,ll>
#define MMLL multimap<ll,ll> 
#define MMCL multimap<char,ll> 
#define pb push_back
#define in insert
#define ln length()
#define DO greater<ll>()
#define pop pop_back()
#define bg begin()
#define ed end()
#define full INT_MAX
#define stf shrink_to_fit()
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=s;i>n;i--)
#define f2(s) for(auto E : s)
#define IT(u) ::iterator E=u.bg
#define AI(a,n) ll a[n]; f(i,0,n)cin>>a[i]
#define AO(a,n) f(i,0,n)cout<<a[i]<<" "
#define T ll t; cin>>t; while(t--)
#define TC cerr<<"\nTime elapsed: "<<1000*clock() /CLOCKS_PER_SEC <<"ms\n";

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t,a,b,x,y,p,q,r,c;
    cin>>t>>a>>b>>x>>y;
    p=abs(x-a);
    q=abs(y-b);
    string s;
    cin>>s;
    f(i,0,s.ln){
        if(s[i]=='E'){
            r=abs(a+1-x);
            if(r<p){
                p=r;
                a++;
            }
        }
         if(s[i]=='W'){
            r=abs(a-1-x);
            if(r<p){
                p=r;
                a--;
            }
        }
         if(s[i]=='N'){
            c=abs(b+1-y);
            if(c<q){
                q=c;
                b++;
            }
        }
        if(s[i]=='S'){
            c=abs(b-1-y);
            if(c<q){
                q=c;
                b--;
            }
        }
        if(x==a&&y==b){
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;
}
