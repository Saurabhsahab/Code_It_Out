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
    
	ll t,n,i;
	scanf("%lld",&t);
	while(t--)
	{   
	    scanf("%ld",&n);
	    if(n<1001)
	    {
	          ll a[n],c=0,j,x;
	   for(i=0;i<n;i++)
	   {
	       scanf("%lld",&a[i]);
	   }
	   for(i=0;i<n;i++)
	   {
	       if ((a[i]%4)==0 || (a[i]%2)!=0)
	       {
	       c++;
	       }
	       x=a[i];
	   for(j=i-1;j>=0;j--)
	   {
	       x=x*a[j];
	       if( (x%2)!=0 || (x%4)==0)
	       c++;
	   }
	
	   }
	   printf("%lld\n",c);
	    }
	    else
	    {
	    ll a[n],b[n],c[n],j,k,x=0,count=0,d=0;
	  for(i=0;i<n;i++)
	   {
	       scanf("%lld",&a[i]);
	       b[i]=0;
	       c[i]=-1;
	       if( (a[i]%4)==0 || (a[i]%2)!=0 )
	       count++;
	   }
	   j=0;k=0;
	   for(i=0;i<n;i++)
	   {
	       if((a[i]%2)==0 && (a[i]%4)==0)
	       b[j++]=-(i+1);
	       else if((a[i]%2)==0 && (a[i]%4)!=0)
	       b[j++]=i+1;
	       else
	       c[k++]=i;
	   }
	  for(i=0;i<n-1;i++)
	   {
	       if(c[i+1]==-1)
	       break;
	       if(  (c[i+1]-c[i]) == 1)
	       {
	           x=0;
	           while((c[i+1]-c[i])==1 && i<n-1)
	           {
	               x++;
	               i++;
	           }
	           count = count + (x*(x+1))/2;
	       }
	   }
	 
	   d=abs(b[0]);
	   for(i=1;i<n;i++)
	   {
	       if(b[i]==0)
	       break;
	       x= (n-(abs(b[i])-1))*(d);
	       d=abs(b[i])-abs(b[i-1]);
	       count=count+x;
	   }
	   if(b[0]<0 && b[1]==0)
	   {
	      x= ( abs(b[0])-1)*(n-abs(b[0])+1) + (n-abs(b[0]));
	       count = count + x;
	       printf("%lld\n",count);
	       continue;
	   }
	   else if( b[0]<0 && b[1]!=0)
	   {
	       count = count + (abs(b[0])-1)*(abs(b[1])-abs(b[0]) ) + (abs(b[1])-abs(b[0]) -1);
	   }
	   for(i=1;i<n-1;i++)
	   {
	       if(b[i+1]==0 || b[i]==0)
	       break;
	       if(b[i]<0)
	       {
	           x= ( abs(b[i])- abs(b[i-1]) -1)*( abs(b[i+1])-abs(b[i])) +(abs(b[i+1]) - abs(b[i]) -1);
	           count =count +x;
	       }
	   }
	   if(b[i]<0)
	   {
	      x=(abs(b[i])- abs(b[i-1]) -1)*(n-abs(b[i])+1) + (n-abs(b[i]));
	   count =count + x;
	   }
	   printf("%lld\n",count);
	    }
	}
}
