#include<stdio.h>
#include<math.h>
#define ll long long
#define ill(u) scanf("%lld",&u);
#define oll(u) printf("%lld ",u);
#define f(g,h,o) for(ll g=h;g<o;g++)
int main(){
     ll n;
     ill(n);
     
     ll A[n];
     
     f(i,0,n)
     ill(A[i]);
     
     ll key,j;
     
     f(i,1,n){
       key=A[i];
       j=i-1;
       
     while(j>=0&&key<A[j]){
       A[j+1] =A[j];
           j--;
   }
      A[j+1]=key;
}

 f(i,0,n)
 oll(A[i]);
 
 return 0;
}
