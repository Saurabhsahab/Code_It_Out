//Saurabhsahab
#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
bool ans(ll p){
    ll r=0;
    while(p>0){
        if(p%10==4){
            r++;
            p=p/10;
        }
        else{
            if(p%10==7){
                r--;
                p=p/10;
            }
            else{
                return 0;
            }
        }
    }
    if(r==0)
    return 1;
    else
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,m,c=0;
    cin>>n;
    m=n;
    while(m>0){
        m=m/10;
        c++;
    }
    if(c%2!=0){
        c=c+1;
        n=4*(pow(10,c-1));
    }
    if(n>77774444){
        cout<<4444477777;
        return 0;
    }
    for(ll i=n;i<4444477777;i++){
        if(ans(i)){
            cout<<i;
            break;
        }
    }
}
