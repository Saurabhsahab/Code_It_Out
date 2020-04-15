//Saurabhsahab
#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
  string s;
  cin>>s;
  ll n,k,c=0;
  n=s.length();
  if(n==1)
  cout<<c;
  else{
      while(n!=1){
          k=0;
          for(ll i=0;i<n;i++){
              k=k+s[i]-'0';
          }
          stringstream ss;
          ss<<k;
          ss>>s;
          n=s.length();
          c++;
     }
     cout<<c;
  }
}
