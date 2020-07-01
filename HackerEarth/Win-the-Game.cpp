//SAURABHSAHAB
#include <bits/stdc++.h> 
using namespace std ;
#define ll long long int
#define f(i,u,w) for(ll i=u;i<w;i++)
#define f1(i,u,w) for(ll i=u;i>w;i--)
#define f2(u) for(auto E : (u))
#define fm(u) for(auto [x,y] : (u))
#define it(u) ::iterator E=(u).bg
#define AI(u,w) ll u[w]; f(i,0,w)cin>>u[i]
#define AO(u,w) f(i,0,w)cout<<u[i]<<" "
#define T ll t; cin>>t; while(t--)

double dp[1003][1003];
int main()
{

  T{
     ll n,m;
     memset(dp,0, sizeof(dp));
     cin>>n>>m;
     f(i,0,n+1){
        f(j,0,m+1){
          if(i==0){ 
          dp[i][j]=1; 
          continue;
       }
          if(j==0){ 
          dp[i][j]=1; 
          continue;
       }
          dp[i][j]= i*1.0/(i+j)+ (j*1.0/(i+j))*((j-1)*1.0/(i+j-1))*dp[i][j-2];
        }
     }
     printf("%.6f\n",dp[n][m]);
  }
}
