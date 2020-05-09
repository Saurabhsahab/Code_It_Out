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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,b,a,p=0,a1,b1;
    cin>>n>>b1>>a1;
    a=a1;
    b=b1;
    ll s[n];
    f(i,0,n){
    cin>>s[i];
    if(s[i]==0&&a!=0){
        a--;
        p++;
    }
    else{
        if(s[i]==0&&a==0&&b!=0){
            b--;
            p++;
        }
        else{
            if(s[i]==1&&b!=0&&a<a1){
                b--;
                p++;
                a++;
            }
            else{
                if(s[i]==1&&b==0&&a!=0){
                    a--;
                    p++;
                }
                else{
                  if(s[i]==1&&b!=0&&a==a1){
                      a--;
                      p++;
                  }
                  else{
                      break;
                  }
                }
            }
        }
    }
}
cout<<p;
}
