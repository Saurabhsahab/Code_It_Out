//Saurabhsahab
#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll  n,s1=0,p,q,k=1,l,m=0;
    cin>>n;
    ll a[n+2]={0};
    l=n;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
       
    char  s[1000000];
    while(m<n){
         p=a[k];
         q=a[l];
       if(p<=q&&p>a[k-1]&&p>a[l+1]){
           s[m]='L';
           s1++;
            m++;
            k++;
       }
       else{
           if(q<=p&&q>a[k-1]&&q>a[l+1]){
               s[m]='R';
                 s1++;
                  m++;
                 l--;
           }
           else{
               if(q>=p&&q>a[k-1]&&q>a[l+1]){
                   s[m]='R';
                 s1++;
                  m++;
                 l--;
               }
               else{
                   if(p>=q&&p>a[k-1]&&p>a[l+1]){
                        s[m]='L';
                       s1++;
                        m++;
                        k++;
       }
             else
           break;
       
               }
           }
       }
    }
    cout<<s1<<"\n";
  for(ll i=0;i<m;i++)
      cout<<s[i];
  
}