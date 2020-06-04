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
#define LL list<ll> 
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
#define mkp make_pair
#define mkt make_tupple
#define ln length()
#define DO greater<ll>()
#define er equal_range
#define pb push_back
#define in insert
#define pop pop_back()
#define bg begin()
#define ed end()
#define full INT_MAX
#define stf shrink_to_fit()
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=s;i>n;i--)
#define f2(s) for(auto E : s)
#define it(u) ::iterator E=u.bg
#define F first
#define S second 
#define AI(a,n) ll a[n]; f(i,0,n)cin>>a[i]
#define AO(a,n) f(i,0,n)cout<<a[i]<<" "
#define T ll t; cin>>t; while(t--)
#define TC cerr<<"\nTime elapsed: "<<1000*clock() /CLOCKS_PER_SEC <<"ms\n";

ll b[2000000][2];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,k=0;
    cin>>n;
 long double s=0,a[n+1]={0},m,p,x,y;
    f(i,1,n+1){
        cin>>a[i];
        s=s+a[i];
    }
    f(i,1,n+1){
        p=s;
        m=0;
        x=0;
        y=0;
       f(j,i,n+1){
          m=m+a[j];
          x++;
          p=p-a[j];
          y=n-x;
          if(y==0)
            y=1;
          if((m/x)>((p/y))){
              k++;
            b[k-1][0]=i;
            b[k-1][1]=j;
          }
       }
    }
    cout<<k<<"\n";
    f(i,0,k){
        cout<<b[i][0]<<" "<<b[i][1]<<"\n";
    }
}
