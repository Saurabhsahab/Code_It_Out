//Saurabhsahab
#include<iostream>
#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,k,p;
    cin>>n>>k;
    if(n%2==0)
        p=n/2;
    else
        p=(n/2)+1;
        if(k>p){
            k=k-p;
            cout<<2*k;
        }
        else{
            cout<<(2*k)-1;
        }
    }
