//Saurabhsahab
#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll  n,s1=0,p,q,k=1,l,m=0,d=0;
    cin>>n;
    ll a[n+2]={0};
    l=n;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
       
    char  s[1000000],f[1000000];
    // for always left side on similar elements 
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
    // for always right side on similar elements 
    
    m=0;
    k=1;
    l=n;
     while(m<n){
         p=a[k];
         q=a[l];
       if(q<=p&&q>a[k-1]&&q>a[l+1]){
               f[m]='R';
                 d++;
                  m++;
                 l--;
           }
       else{
           if(p<=q&&p>a[k-1]&&p>a[l+1]){
           f[m]='L';
           d++;
            m++;
            k++;
       }
           else{
               if(p>=q&&p>a[k-1]&&p>a[l+1]){
                        f[m]='L';
                       d++;
                        m++;
                        k++;
       }
               else{
                   if(q>=p&&q>a[k-1]&&q>a[l+1]){
                   f[m]='R';
                 d++;
                  m++;
                   l--;
               }
             else
           break;
       
               }
           }
       }
     }
     // printing best out of two 
     if(d>s1){
         cout<<d<<"\n";
         for(ll i=0;i<d;i++){
             cout<<f[i];
         }
     }
     else{
         cout<<s1<<"\n";
         for(ll i=0;i<s1;i++){
             cout<<s[i];
         }
     }
  
}
