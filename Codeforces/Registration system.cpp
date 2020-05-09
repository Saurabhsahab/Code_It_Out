//Saurabhsahab
#include<bits/stdc++.h>
#define ll long long 
#define stf shrink_to_fit()
#define mod 1000000007
#define pb push_back
#define  V vector<ll>
#define lcm(x,y) boost::math::lcm(x,y)
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=s;i>n;i--)
#define T ll t; cin>>t; while(t--)
using namespace std ;
struct s{
    string s1;
    ll x;
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,p=0;
    cin>>n;
    struct s a[n];
    f(i,0,n){
        cin>>a[i].s1;
        a[i].x=0;
    }
    f(i,0,n){
        f(j,i+1,n){
        if(a[i].s1==a[j].s1&&a[j].x==0){
            p++;
            a[j].x=p;
        }
        else{
            if(a[i].x!=0)
            break;
        }
    }
    if(a[i].x==0)
      cout<<"OK"<<"\n";
      else{
          cout<<a[i].s1<<a[i].x<<"\n";
      }
    p=0;
}
}
