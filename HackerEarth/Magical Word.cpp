//SAURABHSAHAB
//#include <boost/math/common_factor.hpp>
#include<bits/stdc++.h>
using namespace std; 
#define f(i,s,n) for(int i=s;i<n;i++)
#define T int t; cin>>t; while(t--)
 
vector<bool> a(300,1);
void sieve(){
    a[0]=0;
    a[1]=0;
    for(int i=2;i<300;i++){
        if(a[i]){
        for(int j=i*i;j<300;j=j+i)
                a[j]=0;
        }
    }
}
 
int main(){
    
/*	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);  */
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    T{
       string s;
       int n;
       cin>>n>>s;
       f(i,0,n){
           int x=(int)s[i];
           int p=x,q=x;
           if(!(p>47&&p<58)){
           while(1){
               if(p>=123){
                   p=113;
                   break;
               }
               if(p<=64){
                   p=67;
                   break;
               }
               if(a[p]){
                if((p>64&&p<91)||(p>96&&p<123))   
                break;
               }
               p++;
           }
           while(1){
               if(q>=123){
                   q=113;
                   break;
               }
               if(q<=64){
                   q=67;
                   break;
               }
               if(a[q]){
                if((q>64&&q<91)||(q>96&&q<123))  
                break;
               }
               q--;
           }
           }
           else{
               p=67;
               q=67;
           }
           int r=p-x;
           int s=x-q;
           if(s==r){
               if((q>64&&q<91)||(q>96&&q<123))
               cout<<(char)q;
               else
               cout<<(char)p;
           }
           else{
               if(s<r){
                  if((q>64&&q<91)||(q>96&&q<123))
                  cout<<(char)q;
                  else
                  cout<<(char)p; 
               }
               else{
                  if((p>64&&p<91)||(p>96&&p<123))
                  cout<<(char)p;
                  else
                  cout<<(char)q;
               }
           }
       }
       cout<<"\n";
    }
}
