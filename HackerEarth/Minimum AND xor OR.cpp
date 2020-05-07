//Saurabhsahab
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
scanf("%d",&t);
while(t--){
   long int n,i,j,m=100000000;
    scanf("%ld",&n);
  long int a[n];
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]);
    }
     sort(a,a+n);
     for(i=0;i<n-1;i++){
      j=(a[i]&a[i+1])^(a[i]|a[i+1]);
      m=min(m,j);
     }
    
    printf("%lld\n",m);
     }
}
