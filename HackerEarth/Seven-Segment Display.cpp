//SAURABHSAHAB
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         long long int p=0;
         string m;
        cin>>m;
        for(int i=0;i<m.length();i++){
           if(m[i]=='0'||m[i]=='9'||m[i]=='6')
           p=p+6;
           if(m[i]=='8')
           p=p+7;
           if(m[i]=='1')
           p=p+2;
           if(m[i]=='2'||m[i]=='3'||m[i]=='5')
           p=p+5;
           if(m[i]=='4')
           p=p+4;
           if(m[i]=='7')
           p=p+3;
    }
       if(p%2==0){
           while(p){
               cout<<1;
               p-=2;
           }
       }
       else{
           cout<<7;
           p-=3;
           while(p){
               cout<<1;
               p-=2;
           }
       }
       cout<<"\n";
    }
}
